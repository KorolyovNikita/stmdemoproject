#pragma once

#include <functional>

#define forceinline  __attribute__((always_inline)) inline

template<typename ... Types> struct Collection 
{
  static constexpr int size  =  (sizeof...(Types));   
};


/*-----------------LOKI-----------------*/
namespace LOKI {
  // Glue
  template<class X, class Y> 
  struct Glue;

  template<class T, class... Ts>
  struct Glue<T, Collection<Ts...>> 
  {
    using Result = Collection<T, Ts...>;
  };

  // Erase
  template<class Q, class X> 
  struct Erase;

  template<class Q>
  struct Erase<Q, Collection<>> 
  {
    using Result = Collection<>;
  };

  template<class Q, class... Tail>
  struct Erase<Q, Collection<Q, Tail...>> 
  {
    using Result = Collection<Tail...>;
  };

  template<class Q, class T, class... Tail>
  struct Erase<Q, Collection<T, Tail...>> 
  {
    using Result = typename Glue<T, typename Erase<Q, Collection<Tail...>>::Result>::Result;
  };

  // NoDuplicates
  template <class X> 
  struct NoDuplicates;

  template <> 
  struct NoDuplicates<Collection<>>
  {
    using Result = Collection<>;
  };

  template <class T, class... Tail>
  struct NoDuplicates< Collection<T, Tail...> >
  {
    private:
      using L1 = typename NoDuplicates<Collection<Tail...>>::Result;
      using L2 = typename Erase<T,L1>::Result;
    public:
      using Result = typename Glue<T, L2>::Result;
  };
}
/*-----------------LOKI-----------------*/


template <typename ...Ts>
struct PackImpl 
{
  using Type = PackImpl<Ts...>;
private:
  using Registers = typename LOKI::NoDuplicates<
                    Collection<typename Ts::_register...>>::Result;


  template<typename Reg>
  constexpr static auto GetRegValue() 
  {
    std::size_t result = 0;
    result |= Reg::_resetValue;
    if(result != 0) {
      ((result &= ~((std::is_same<Reg, typename Ts::_register>::value ? 1 : 0) 
                * (Ts::_mask << Ts::_offset))), ...);
    }
    ((result |= (std::is_same<Reg, typename Ts::_register>::value ? 1 : 0) 
              * (Ts::_value << Ts::_offset)), ...);
    return result;
  }


  template<typename Reg, typename ...Regs>
  forceinline static void SetRegs(Collection<Reg, Regs...>)
  {
    Reg::Set(GetRegValue<Reg>());
    
    if constexpr (sizeof ...(Regs) != 0U)  
      Type::template SetRegs<Regs...>(Collection<Regs...>());
  }


  template<typename Reg, typename ...Regs>
  forceinline static void WriteRegs(Collection<Reg, Regs...>)
  {
    Reg::Write(GetRegValue<Reg>());

    if constexpr (sizeof ...(Regs) != 0U)  
      Type::template WriteRegs<Regs...>(Collection<Regs...>());
  }


public:
  forceinline static void Set()
  {
    SetRegs(Registers());
  }


  forceinline static void Write()
  {
    WriteRegs(Registers());
  }
};


template<class... Ts>
struct Pack;

template<class H, class... Ts>
struct Pack <H, Ts...>
{
  using Type = 
    typename PackImpl<typename PackImpl<H>::Type, 
                      typename Pack<Ts...>::Type
                      >::Type;

  forceinline static void Set()
  {
    Type::Set();
  }

  forceinline static void Write()
  {
    Type::Write();
  }
};
template<>
struct Pack<>
{
  using Type = typename PackImpl<>::Type;
};


template<class... Ts1, class... Ts2>
struct PackImpl<PackImpl<Ts1...>, PackImpl<Ts2...>>
{
  using Type = typename PackImpl<Ts1..., Ts2...>::Type;
};

template<class... Ts1>
struct PackImpl<Pack<Ts1...>>
{
  using Type = typename Pack<Ts1...>::Type;
};

template<class... Ts1>
struct PackImpl<const Pack<Ts1...>>
{
  using Type = typename Pack<Ts1...>::Type;
};

