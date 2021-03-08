#pragma once

#include <utility>
#include <cstddef>
#include <type_traits>


template<size_t v>
using int_t = std::integral_constant<size_t, v>;

template <class T>
struct just_type { 
  using type = T; 
};

template <class... Ts>
struct type_pack 
{};


//template template
template <template <class...> class F, class... Ts>
struct part_caller {
  template <class... Us>
  using type = typename F<Ts..., Us...>::type;
};
/* --------- */

namespace tp
{
  using empty_pack = type_pack<>;

  // size
  template<class... Ts>
  constexpr size_t size(type_pack<Ts...>)
  {
    return sizeof...(Ts); 
  }

  // empty
  template<class... Ts>
  constexpr bool empty(type_pack<Ts...> tp)
  {
    return size(tp) == 0; 
  }

  // head
  template <class T, class... Ts>
  constexpr just_type<T> head(type_pack<T, Ts...>) {
    return {};
  }

  // tail
  template <class T, class... Ts>
  constexpr type_pack<Ts...> tail(type_pack<T, Ts...>) {
    return {};
  }

  /* ---------- */

  // typePack operator==
  template <class... Ts, class... Us>
  constexpr bool operator==(type_pack<Ts...>, type_pack<Us...>)
  {
    return false;
  }
  template <class... Ts>
  constexpr bool operator==(type_pack<Ts...>, type_pack<Ts...>)
  {
    return true;
  }
  // typePack operator!=
  template <class... Ts, class... Us>
  constexpr bool operator!=(type_pack<Ts...> t, 
                            type_pack<Us...> u)
  {
    return !(t == u);
  }
  // typePack operator+
  template <class... Ts, class... Us>
  constexpr auto operator+(type_pack<Ts...>, type_pack<Us...>)
  {
    return type_pack<Ts..., Us...>{};
  }

  // justType operator==
  template <class Ts, class  Us>
  constexpr bool operator==(just_type<Ts>, just_type<Us>)
  {
    return false;
  }
  template <class Ts>
  constexpr bool operator==(just_type<Ts>, just_type<Ts>)
  {
    return true;
  }
  // justType operator!=
  template <class Ts, class Us>
  constexpr bool operator!=(just_type<Ts> t, 
                            just_type<Us> u)
  {
    return !(t == u);
  }
  /* ---------- */


  /* push_front */
  // type-based
  template <class T, class... Ts>
  constexpr type_pack<T, Ts...> push_front(type_pack<Ts...>) 
  {
    return {};
  }
  //value-based
  template <class... Ts, class T>
  constexpr type_pack<T, Ts...> push_front(type_pack<Ts...>,
                                           just_type<T>) {
    return {};
  }
  /* ---------- */


  /* pop_front */
  template <class T, class... Ts>
  constexpr type_pack<Ts...> pop_front(type_pack<T, Ts...>) {
    return {};
  }
  /* --------- */


  /* push_back */
  // type-based
  template <class T, class... Ts>
  constexpr type_pack<Ts..., T> push_back(type_pack<Ts...>) 
  {
    return {};
  }
  //value-based
  template <class... Ts, class T>
  constexpr type_pack<Ts..., T> push_back(type_pack<Ts...>,
                                           just_type<T>) {
    return {};
  }
  /* --------- */


  /* Contains */
  template <class T, class... Ts>
  constexpr bool contains(type_pack<Ts...>)
  { 
    return (... || std::is_same_v<T, Ts>);
  }
  /* --------- */


  /* Find */
  template <class T, class... Ts>
  constexpr size_t find(type_pack<Ts...> tp)
  { 
    bool bs[] = {std::is_same<T, Ts>::value...};
    for(size_t i = 0; i < size(tp); ++i) {
      if (bs[i])
        return i;
    }
    return size(tp);
  }

  /* find_if */
  template <template <class...> class F, class... Ts>
  constexpr size_t find_if(type_pack<Ts...> tp) {
    bool bs[]= {F<Ts>::value...};
    for(size_t i = 0; i < size(tp); ++i) {
      if (bs[i])
        return i;
    }
    return size(tp);
  }


  // all_of
  template <class F, class... Ts>
  constexpr bool all_of(F f, type_pack<Ts...>)
  {
    return (... && f(just_type<Ts>{}));
  }
  // any_of
  template <class F, class... Ts>
  constexpr bool any_of(F f, type_pack<Ts...>)
  {
    return (... || f(just_type<Ts>{}));
  }
  // None_of
  template <class F, class... Ts>
  constexpr bool none_of(F f, type_pack<Ts...> tp)
  {
    return !any_of(f, tp);
  }


  /*Transform
  -взять список
  -применить метафункуцию к каждому элементу списка
  -результаты сложить в новый список
  */
  template <template <class...> class F, class... Ts>
  constexpr auto transform(type_pack<Ts...>) {
    return type_pack<typename F<Ts>::type...>{};
  }


  /* Get */
  template <class IS>
  struct get_impl;

  template <size_t... Is>
  struct get_impl<std::index_sequence<Is...>> 
  {
    /*Comma operator*/
    template <class T>
    static constexpr T dummy(decltype(Is, (void*)0)..., T*, ...);
  };

  template <size_t I, class... Ts>
  constexpr auto get(type_pack<Ts...>) {
    return just_type<decltype(
      get_impl<std::make_index_sequence<I>>::dummy((Ts*)(0)...))>{};
  }
  // static_assert(get<1>(type_pack<double, int, char>{}) 
  //               == just_type<int>{});
  /* --- */


  /* Reverse */
  template <std::size_t... is, class TP>
  constexpr auto reverse_impl(std::index_sequence<is...>, TP tp)
  {
    return type_pack<typename 
      decltype(get<size(tp) - is - 1>(tp))::type...>{};
  }
  template <class... Ts>
  constexpr auto reverse(type_pack<Ts...> tp)
  {
    return reverse_impl(std::index_sequence_for<Ts...>{}, tp);
  }
  /* ------- */


  /* Generate */
  template <class... Ts>
  constexpr type_pack<Ts...> generate_helper(Ts*...)
  {
    return {};
  }

  template <class T, size_t...Is>
  constexpr auto generete_impl(std::index_sequence<Is...>)
  {
    return generate_helper(((void)Is, (T*)0)...);
  }

  template <size_t I, class T>
  constexpr auto generate()
  {
    return generete_impl<T>(std::make_index_sequence<I>{});
  }
  /* -------- */


  /* Filter */
  template <template <class...> class F, class T>
  constexpr auto filter_one()
  {
    if constexpr (F<T>::value)
      return type_pack<T>{};
    else
      return empty_pack{};
  }

  template <template <class...> class F, class... Ts>
  constexpr auto filter(type_pack<Ts...>)
  {
    return (empty_pack{} + ... + filter_one<F,  Ts>());
  }
  /* ------ */
};