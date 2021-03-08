#pragma once

#define forceinline  __attribute__((always_inline)) inline


template<typename Interface>
struct mhz19 
{
  forceinline static auto Init()
  {
    Interface::Init();
  }


  forceinline static auto getMeasurement()
  {
    Interface::WriteData(cmd, 9);
    Interface::ReadData(response, 9);
  }

  forceinline static void OnReceiveComplete()
  {
    Co2 = responseCalculation();
  }
  forceinline static void OnTransmitComplete() {}

private:
  inline static uint8_t response[9];
  inline static uint16_t Co2;

  forceinline static auto responseCalculation()
  {
    if(response[0] == 0xFF && 
       response[1] == 0x86 && 
       response[8] == checksumCalculation(response))
    {
      uint16_t responseHigh = response[2];
      uint16_t responseLow  = response[3];
      return 256 * responseHigh + responseLow;
    }
	  else
      return 0;
  }

  forceinline static auto checksumCalculation(uint8_t* cmd)
  {
    uint8_t crc = 0;
    for(uint8_t i = 1; i != 8; i++) 
      crc += cmd[i];
	  return 255 - crc + 1;
  }

  static constexpr uint8_t cmd[9] = {0xFF,0x01,0x86,0x00,0x00,0x00,0x00,0x00,0x79};
};