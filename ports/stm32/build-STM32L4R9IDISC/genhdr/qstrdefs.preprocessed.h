# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "<stdin>"
# 27 "<stdin>"
# 1 "../../py/mpconfig.h" 1
# 62 "../../py/mpconfig.h"
# 1 "./mpconfigport.h" 1
# 31 "./mpconfigport.h"
# 1 "boards/STM32L4R9IDISC/mpconfigboard.h" 1
# 32 "./mpconfigport.h" 2
# 1 "./mpconfigboard_common.h" 1
# 30 "./mpconfigboard_common.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal.h" 1
# 30 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal.h"
# 1 "boards/STM32L4R9IDISC/stm32l4xx_hal_conf.h" 1


# 1 "./boards/stm32l4xx_hal_conf_base.h" 1
# 30 "./boards/stm32l4xx_hal_conf_base.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma.h" 1
# 29 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_def.h" 1
# 30 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_def.h"
# 1 "../../lib/stm32lib/CMSIS/STM32L4xx/Include/stm32l4xx.h" 1
# 162 "../../lib/stm32lib/CMSIS/STM32L4xx/Include/stm32l4xx.h"
# 1 "../../lib/stm32lib/CMSIS/STM32L4xx/Include/stm32l4r9xx.h" 1
# 66 "../../lib/stm32lib/CMSIS/STM32L4xx/Include/stm32l4r9xx.h"
typedef enum
{

  NonMaskableInt_IRQn = -14,
  HardFault_IRQn = -13,
  MemoryManagement_IRQn = -12,
  BusFault_IRQn = -11,
  UsageFault_IRQn = -10,
  SVCall_IRQn = -5,
  DebugMonitor_IRQn = -4,
  PendSV_IRQn = -2,
  SysTick_IRQn = -1,

  WWDG_IRQn = 0,
  PVD_PVM_IRQn = 1,
  TAMP_STAMP_IRQn = 2,
  RTC_WKUP_IRQn = 3,
  FLASH_IRQn = 4,
  RCC_IRQn = 5,
  EXTI0_IRQn = 6,
  EXTI1_IRQn = 7,
  EXTI2_IRQn = 8,
  EXTI3_IRQn = 9,
  EXTI4_IRQn = 10,
  DMA1_Channel1_IRQn = 11,
  DMA1_Channel2_IRQn = 12,
  DMA1_Channel3_IRQn = 13,
  DMA1_Channel4_IRQn = 14,
  DMA1_Channel5_IRQn = 15,
  DMA1_Channel6_IRQn = 16,
  DMA1_Channel7_IRQn = 17,
  ADC1_IRQn = 18,
  CAN1_TX_IRQn = 19,
  CAN1_RX0_IRQn = 20,
  CAN1_RX1_IRQn = 21,
  CAN1_SCE_IRQn = 22,
  EXTI9_5_IRQn = 23,
  TIM1_BRK_TIM15_IRQn = 24,
  TIM1_UP_TIM16_IRQn = 25,
  TIM1_TRG_COM_TIM17_IRQn = 26,
  TIM1_CC_IRQn = 27,
  TIM2_IRQn = 28,
  TIM3_IRQn = 29,
  TIM4_IRQn = 30,
  I2C1_EV_IRQn = 31,
  I2C1_ER_IRQn = 32,
  I2C2_EV_IRQn = 33,
  I2C2_ER_IRQn = 34,
  SPI1_IRQn = 35,
  SPI2_IRQn = 36,
  USART1_IRQn = 37,
  USART2_IRQn = 38,
  USART3_IRQn = 39,
  EXTI15_10_IRQn = 40,
  RTC_Alarm_IRQn = 41,
  DFSDM1_FLT3_IRQn = 42,
  TIM8_BRK_IRQn = 43,
  TIM8_UP_IRQn = 44,
  TIM8_TRG_COM_IRQn = 45,
  TIM8_CC_IRQn = 46,
  FMC_IRQn = 48,
  SDMMC1_IRQn = 49,
  TIM5_IRQn = 50,
  SPI3_IRQn = 51,
  UART4_IRQn = 52,
  UART5_IRQn = 53,
  TIM6_DAC_IRQn = 54,
  TIM7_IRQn = 55,
  DMA2_Channel1_IRQn = 56,
  DMA2_Channel2_IRQn = 57,
  DMA2_Channel3_IRQn = 58,
  DMA2_Channel4_IRQn = 59,
  DMA2_Channel5_IRQn = 60,
  DFSDM1_FLT0_IRQn = 61,
  DFSDM1_FLT1_IRQn = 62,
  DFSDM1_FLT2_IRQn = 63,
  COMP_IRQn = 64,
  LPTIM1_IRQn = 65,
  LPTIM2_IRQn = 66,
  OTG_FS_IRQn = 67,
  DMA2_Channel6_IRQn = 68,
  DMA2_Channel7_IRQn = 69,
  LPUART1_IRQn = 70,
  OCTOSPI1_IRQn = 71,
  I2C3_EV_IRQn = 72,
  I2C3_ER_IRQn = 73,
  SAI1_IRQn = 74,
  SAI2_IRQn = 75,
  OCTOSPI2_IRQn = 76,
  TSC_IRQn = 77,
  DSI_IRQn = 78,
  RNG_IRQn = 80,
  FPU_IRQn = 81,
  CRS_IRQn = 82,
  I2C4_EV_IRQn = 83,
  I2C4_ER_IRQn = 84,
  DCMI_IRQn = 85,
  DMA2D_IRQn = 90,
  LTDC_IRQn = 91,
  LTDC_ER_IRQn = 92,
  GFXMMU_IRQn = 93,
  DMAMUX1_OVR_IRQn = 94
} IRQn_Type;





# 1 "../../lib/cmsis/inc/core_cm4.h" 1
# 34 "../../lib/cmsis/inc/core_cm4.h"
# 1 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stdint.h" 3 4
# 1 "/usr/include/newlib/stdint.h" 1 3 4
# 12 "/usr/include/newlib/stdint.h" 3 4
# 1 "/usr/include/newlib/machine/_default_types.h" 1 3 4







# 1 "/usr/include/newlib/sys/features.h" 1 3 4
# 9 "/usr/include/newlib/machine/_default_types.h" 2 3 4
# 27 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 41 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 63 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 89 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 120 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 146 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 168 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 186 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 200 "/usr/include/newlib/machine/_default_types.h" 3 4
typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 13 "/usr/include/newlib/stdint.h" 2 3 4
# 1 "/usr/include/newlib/sys/_intsup.h" 1 3 4
# 49 "/usr/include/newlib/sys/_intsup.h" 3 4
       
       
       
       
       
       
# 193 "/usr/include/newlib/sys/_intsup.h" 3 4
       
       
       
       
       
       
# 14 "/usr/include/newlib/stdint.h" 2 3 4
# 1 "/usr/include/newlib/sys/_stdint.h" 1 3 4
# 19 "/usr/include/newlib/sys/_stdint.h" 3 4
typedef __int8_t int8_t ;
typedef __uint8_t uint8_t ;




typedef __int16_t int16_t ;
typedef __uint16_t uint16_t ;




typedef __int32_t int32_t ;
typedef __uint32_t uint32_t ;




typedef __int64_t int64_t ;
typedef __uint64_t uint64_t ;



typedef __intptr_t intptr_t;
typedef __uintptr_t uintptr_t;
# 15 "/usr/include/newlib/stdint.h" 2 3 4






typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
# 51 "/usr/include/newlib/stdint.h" 3 4
  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
# 61 "/usr/include/newlib/stdint.h" 3 4
  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
# 71 "/usr/include/newlib/stdint.h" 3 4
  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
# 81 "/usr/include/newlib/stdint.h" 3 4
  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
# 130 "/usr/include/newlib/stdint.h" 3 4
  typedef long long int intmax_t;
# 139 "/usr/include/newlib/stdint.h" 3 4
  typedef long long unsigned int uintmax_t;
# 10 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stdint.h" 2 3 4
# 35 "../../lib/cmsis/inc/core_cm4.h" 2
# 63 "../../lib/cmsis/inc/core_cm4.h"
# 1 "../../lib/cmsis/inc/cmsis_version.h" 1
# 64 "../../lib/cmsis/inc/core_cm4.h" 2
# 162 "../../lib/cmsis/inc/core_cm4.h"
# 1 "../../lib/cmsis/inc/cmsis_compiler.h" 1
# 54 "../../lib/cmsis/inc/cmsis_compiler.h"
# 1 "../../lib/cmsis/inc/cmsis_gcc.h" 1
# 29 "../../lib/cmsis/inc/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 71 "../../lib/cmsis/inc/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed)) T_UINT32 { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_WRITE { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_READ { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_WRITE { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_READ { uint32_t v; };
#pragma GCC diagnostic pop
# 129 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}
# 181 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
}
# 205 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_PSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, psp" : "=r" (result) );
  return(result);
}
# 277 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0" : : "r" (topOfProcStack) : );
}
# 301 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_MSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, msp" : "=r" (result) );
  return(result);
}
# 331 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0" : : "r" (topOfMainStack) : );
}
# 382 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) :: "memory");
  return(result);
}
# 412 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 439 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_fault_irq(void)
{
  __asm volatile ("cpsie f" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_fault_irq(void)
{
  __asm volatile ("cpsid f" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_BASEPRI(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, basepri" : "=r" (result) );
  return(result);
}
# 491 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_BASEPRI(uint32_t basePri)
{
  __asm volatile ("MSR basepri, %0" : : "r" (basePri) : "memory");
}
# 516 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_BASEPRI_MAX(uint32_t basePri)
{
  __asm volatile ("MSR basepri_max, %0" : : "r" (basePri) : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_FAULTMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, faultmask" : "=r" (result) );
  return(result);
}
# 557 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_FAULTMASK(uint32_t faultMask)
{
  __asm volatile ("MSR faultmask, %0" : : "r" (faultMask) : "memory");
}
# 766 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_FPSCR(void)
{
# 776 "../../lib/cmsis/inc/cmsis_gcc.h"
  uint32_t result;

  __asm volatile ("VMRS %0, fpscr" : "=r" (result) );
  return(result);




}







__attribute__((always_inline)) static inline void __set_FPSCR(uint32_t fpscr)
{
# 802 "../../lib/cmsis/inc/cmsis_gcc.h"
  __asm volatile ("VMSR fpscr, %0" : : "r" (fpscr) : "vfpcc", "memory");




}
# 866 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm volatile ("isb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm volatile ("dsb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm volatile ("dmb 0xF":::"memory");
}
# 900 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
# 919 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return result;
}
# 934 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline int16_t __REVSH(int16_t value)
{

  return (int16_t)__builtin_bswap16(value);






}
# 954 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  op2 %= 32U;
  if (op2 == 0U)
  {
    return op1;
  }
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 981 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;




   __asm volatile ("rbit %0, %1" : "=r" (result) : "r" (value) );
# 1001 "../../lib/cmsis/inc/cmsis_gcc.h"
  return result;
}
# 1011 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __CLZ(uint32_t value)
{
# 1022 "../../lib/cmsis/inc/cmsis_gcc.h"
  if (value == 0U)
  {
    return 32U;
  }
  return __builtin_clz(value);
}
# 1040 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDREXB(volatile uint8_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexb %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint8_t) result);
}
# 1062 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDREXH(volatile uint16_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexh %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint16_t) result);
}
# 1084 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDREXW(volatile uint32_t *addr)
{
    uint32_t result;

   __asm volatile ("ldrex %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}
# 1101 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXB(uint8_t value, volatile uint8_t *addr)
{
   uint32_t result;

   __asm volatile ("strexb %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 1118 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXH(uint16_t value, volatile uint16_t *addr)
{
   uint32_t result;

   __asm volatile ("strexh %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 1135 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXW(uint32_t value, volatile uint32_t *addr)
{
   uint32_t result;

   __asm volatile ("strex %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" (value) );
   return(result);
}






__attribute__((always_inline)) static inline void __CLREX(void)
{
  __asm volatile ("clrex" ::: "memory");
}
# 1201 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RRX(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rrx %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}
# 1216 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDRBT(volatile uint8_t *ptr)
{
    uint32_t result;


   __asm volatile ("ldrbt %0, %1" : "=r" (result) : "Q" (*ptr) );






   return ((uint8_t) result);
}
# 1238 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDRHT(volatile uint16_t *ptr)
{
    uint32_t result;


   __asm volatile ("ldrht %0, %1" : "=r" (result) : "Q" (*ptr) );






   return ((uint16_t) result);
}
# 1260 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDRT(volatile uint32_t *ptr)
{
    uint32_t result;

   __asm volatile ("ldrt %0, %1" : "=r" (result) : "Q" (*ptr) );
   return(result);
}
# 1275 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRBT(uint8_t value, volatile uint8_t *ptr)
{
   __asm volatile ("strbt %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}
# 1287 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRHT(uint16_t value, volatile uint16_t *ptr)
{
   __asm volatile ("strht %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}
# 1299 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRT(uint32_t value, volatile uint32_t *ptr)
{
   __asm volatile ("strt %1, %0" : "=Q" (*ptr) : "r" (value) );
}
# 1554 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __SADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__((always_inline)) static inline uint32_t __SSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__((always_inline)) static inline uint32_t __SADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USAD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usad8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USADA8(uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("usada8 %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}
# 1874 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __UXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("uxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("sxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUAD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuad %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUADX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuadx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLAD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlad %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLADX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smladx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint64_t __SMLALD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlald %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint64_t __SMLALDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlaldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint32_t __SMUSD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUSDX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusdx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLSD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsd %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLSDX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsdx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint64_t __SMLSLD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsld %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint64_t __SMLSLDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint32_t __SEL (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sel %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline int32_t __QADD( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qadd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline int32_t __QSUB( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qsub %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}
# 2087 "../../lib/cmsis/inc/cmsis_gcc.h"
__attribute__((always_inline)) static inline int32_t __SMMLA (int32_t op1, int32_t op2, int32_t op3)
{
 int32_t result;

 __asm volatile ("smmla %0, %1, %2, %3" : "=r" (result): "r" (op1), "r" (op2), "r" (op3) );
 return(result);
}





#pragma GCC diagnostic pop
# 55 "../../lib/cmsis/inc/cmsis_compiler.h" 2
# 163 "../../lib/cmsis/inc/core_cm4.h" 2
# 259 "../../lib/cmsis/inc/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t _reserved0:16;
    uint32_t GE:4;
    uint32_t _reserved1:7;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} APSR_Type;
# 298 "../../lib/cmsis/inc/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:23;
  } b;
  uint32_t w;
} IPSR_Type;
# 316 "../../lib/cmsis/inc/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:1;
    uint32_t ICI_IT_1:6;
    uint32_t GE:4;
    uint32_t _reserved1:4;
    uint32_t T:1;
    uint32_t ICI_IT_2:2;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} xPSR_Type;
# 371 "../../lib/cmsis/inc/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t nPRIV:1;
    uint32_t SPSEL:1;
    uint32_t FPCA:1;
    uint32_t _reserved0:29;
  } b;
  uint32_t w;
} CONTROL_Type;
# 406 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
  volatile uint32_t ISER[8U];
        uint32_t RESERVED0[24U];
  volatile uint32_t ICER[8U];
        uint32_t RESERVED1[24U];
  volatile uint32_t ISPR[8U];
        uint32_t RESERVED2[24U];
  volatile uint32_t ICPR[8U];
        uint32_t RESERVED3[24U];
  volatile uint32_t IABR[8U];
        uint32_t RESERVED4[56U];
  volatile uint8_t IP[240U];
        uint32_t RESERVED5[644U];
  volatile uint32_t STIR;
} NVIC_Type;
# 440 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
  volatile const uint32_t CPUID;
  volatile uint32_t ICSR;
  volatile uint32_t VTOR;
  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
  volatile uint8_t SHP[12U];
  volatile uint32_t SHCSR;
  volatile uint32_t CFSR;
  volatile uint32_t HFSR;
  volatile uint32_t DFSR;
  volatile uint32_t MMFAR;
  volatile uint32_t BFAR;
  volatile uint32_t AFSR;
  volatile const uint32_t PFR[2U];
  volatile const uint32_t DFR;
  volatile const uint32_t ADR;
  volatile const uint32_t MMFR[4U];
  volatile const uint32_t ISAR[5U];
        uint32_t RESERVED0[5U];
  volatile uint32_t CPACR;
} SCB_Type;
# 719 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile const uint32_t ICTR;
  volatile uint32_t ACTLR;
} SCnSCB_Type;
# 759 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;
# 811 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
  volatile union
  {
    volatile uint8_t u8;
    volatile uint16_t u16;
    volatile uint32_t u32;
  } PORT [32U];
        uint32_t RESERVED0[864U];
  volatile uint32_t TER;
        uint32_t RESERVED1[15U];
  volatile uint32_t TPR;
        uint32_t RESERVED2[15U];
  volatile uint32_t TCR;
        uint32_t RESERVED3[32U];
        uint32_t RESERVED4[43U];
  volatile uint32_t LAR;
  volatile const uint32_t LSR;
        uint32_t RESERVED5[6U];
  volatile const uint32_t PID4;
  volatile const uint32_t PID5;
  volatile const uint32_t PID6;
  volatile const uint32_t PID7;
  volatile const uint32_t PID0;
  volatile const uint32_t PID1;
  volatile const uint32_t PID2;
  volatile const uint32_t PID3;
  volatile const uint32_t CID0;
  volatile const uint32_t CID1;
  volatile const uint32_t CID2;
  volatile const uint32_t CID3;
} ITM_Type;
# 899 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t CYCCNT;
  volatile uint32_t CPICNT;
  volatile uint32_t EXCCNT;
  volatile uint32_t SLEEPCNT;
  volatile uint32_t LSUCNT;
  volatile uint32_t FOLDCNT;
  volatile const uint32_t PCSR;
  volatile uint32_t COMP0;
  volatile uint32_t MASK0;
  volatile uint32_t FUNCTION0;
        uint32_t RESERVED0[1U];
  volatile uint32_t COMP1;
  volatile uint32_t MASK1;
  volatile uint32_t FUNCTION1;
        uint32_t RESERVED1[1U];
  volatile uint32_t COMP2;
  volatile uint32_t MASK2;
  volatile uint32_t FUNCTION2;
        uint32_t RESERVED2[1U];
  volatile uint32_t COMP3;
  volatile uint32_t MASK3;
  volatile uint32_t FUNCTION3;
} DWT_Type;
# 1046 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
  volatile const uint32_t SSPSR;
  volatile uint32_t CSPSR;
        uint32_t RESERVED0[2U];
  volatile uint32_t ACPR;
        uint32_t RESERVED1[55U];
  volatile uint32_t SPPR;
        uint32_t RESERVED2[131U];
  volatile const uint32_t FFSR;
  volatile uint32_t FFCR;
  volatile const uint32_t FSCR;
        uint32_t RESERVED3[759U];
  volatile const uint32_t TRIGGER;
  volatile const uint32_t FIFO0;
  volatile const uint32_t ITATBCTR2;
        uint32_t RESERVED4[1U];
  volatile const uint32_t ITATBCTR0;
  volatile const uint32_t FIFO1;
  volatile uint32_t ITCTRL;
        uint32_t RESERVED5[39U];
  volatile uint32_t CLAIMSET;
  volatile uint32_t CLAIMCLR;
        uint32_t RESERVED7[8U];
  volatile const uint32_t DEVID;
  volatile const uint32_t DEVTYPE;
} TPI_Type;
# 1208 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
  volatile const uint32_t TYPE;
  volatile uint32_t CTRL;
  volatile uint32_t RNR;
  volatile uint32_t RBAR;
  volatile uint32_t RASR;
  volatile uint32_t RBAR_A1;
  volatile uint32_t RASR_A1;
  volatile uint32_t RBAR_A2;
  volatile uint32_t RASR_A2;
  volatile uint32_t RBAR_A3;
  volatile uint32_t RASR_A3;
} MPU_Type;
# 1304 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile uint32_t FPCCR;
  volatile uint32_t FPCAR;
  volatile uint32_t FPDSCR;
  volatile const uint32_t MVFR0;
  volatile const uint32_t MVFR1;
  volatile const uint32_t MVFR2;
} FPU_Type;
# 1416 "../../lib/cmsis/inc/core_cm4.h"
typedef struct
{
  volatile uint32_t DHCSR;
  volatile uint32_t DCRSR;
  volatile uint32_t DCRDR;
  volatile uint32_t DEMCR;
} CoreDebug_Type;
# 1648 "../../lib/cmsis/inc/core_cm4.h"
static inline void __NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);

  reg_value = ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR;
  reg_value &= ~((uint32_t)((0xFFFFUL << 16U) | (7UL << 8U)));
  reg_value = (reg_value |
                ((uint32_t)0x5FAUL << 16U) |
                (PriorityGroupTmp << 8U) );
  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = reg_value;
}







static inline uint32_t __NVIC_GetPriorityGrouping(void)
{
  return ((uint32_t)((((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) >> 8U));
}
# 1679 "../../lib/cmsis/inc/core_cm4.h"
static inline void __NVIC_EnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1696 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t __NVIC_GetEnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1715 "../../lib/cmsis/inc/core_cm4.h"
static inline void __NVIC_DisableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __DSB();
    __ISB();
  }
}
# 1734 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t __NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1753 "../../lib/cmsis/inc/core_cm4.h"
static inline void __NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1768 "../../lib/cmsis/inc/core_cm4.h"
static inline void __NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1785 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t __NVIC_GetActive(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IABR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1807 "../../lib/cmsis/inc/core_cm4.h"
static inline void __NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)IRQn)] = (uint8_t)((priority << (8U - 4)) & (uint32_t)0xFFUL);
  }
  else
  {
    ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] = (uint8_t)((priority << (8U - 4)) & (uint32_t)0xFFUL);
  }
}
# 1829 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t __NVIC_GetPriority(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) >= 0)
  {
    return(((uint32_t)((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)IRQn)] >> (8U - 4)));
  }
  else
  {
    return(((uint32_t)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] >> (8U - 4)));
  }
}
# 1854 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(4)) ? (uint32_t)(4) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(4)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(4));

  return (
           ((PreemptPriority & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL)) << SubPriorityBits) |
           ((SubPriority & (uint32_t)((1UL << (SubPriorityBits )) - 1UL)))
         );
}
# 1881 "../../lib/cmsis/inc/core_cm4.h"
static inline void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(4)) ? (uint32_t)(4) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(4)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(4));

  *pPreemptPriority = (Priority >> SubPriorityBits) & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL);
  *pSubPriority = (Priority ) & (uint32_t)((1UL << (SubPriorityBits )) - 1UL);
}
# 1904 "../../lib/cmsis/inc/core_cm4.h"
static inline void __NVIC_SetVector(IRQn_Type IRQn, uint32_t vector)
{
  uint32_t vectors = (uint32_t )((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  (* (int *) (vectors + ((int32_t)IRQn + 16) * 4)) = vector;
}
# 1919 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t __NVIC_GetVector(IRQn_Type IRQn)
{
  uint32_t vectors = (uint32_t )((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  return (uint32_t)(* (int *) (vectors + ((int32_t)IRQn + 16) * 4));
}






__attribute__((__noreturn__)) static inline void __NVIC_SystemReset(void)
{
  __DSB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = (uint32_t)((0x5FAUL << 16U) |
                           (((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) |
                            (1UL << 2U) );
  __DSB();

  for(;;)
  {
    __asm volatile ("nop");
  }
}
# 1952 "../../lib/cmsis/inc/core_cm4.h"
# 1 "../../lib/cmsis/inc/mpu_armv7.h" 1
# 183 "../../lib/cmsis/inc/mpu_armv7.h"
typedef struct {
  uint32_t RBAR;
  uint32_t RASR;
} ARM_MPU_Region_t;




static inline void ARM_MPU_Enable(uint32_t MPU_Control)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->CTRL = MPU_Control | (1UL );

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHCSR |= (1UL << 16U);

  __DSB();
  __ISB();
}



static inline void ARM_MPU_Disable(void)
{
  __DMB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHCSR &= ~(1UL << 16U);

  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->CTRL &= ~(1UL );
}




static inline void ARM_MPU_ClrRegion(uint32_t rnr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RNR = rnr;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = 0U;
}





static inline void ARM_MPU_SetRegion(uint32_t rbar, uint32_t rasr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR = rbar;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = rasr;
}






static inline void ARM_MPU_SetRegionEx(uint32_t rnr, uint32_t rbar, uint32_t rasr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RNR = rnr;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR = rbar;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = rasr;
}






static inline void ARM_MPU_OrderedMemcpy(volatile uint32_t* dst, const uint32_t* __restrict src, uint32_t len)
{
  uint32_t i;
  for (i = 0U; i < len; ++i)
  {
    dst[i] = src[i];
  }
}





static inline void ARM_MPU_Load(ARM_MPU_Region_t const* table, uint32_t cnt)
{
  const uint32_t rowWordSize = sizeof(ARM_MPU_Region_t)/4U;
  while (cnt > 4U) {
    ARM_MPU_OrderedMemcpy(&(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR), &(table->RBAR), 4U*rowWordSize);
    table += 4U;
    cnt -= 4U;
  }
  ARM_MPU_OrderedMemcpy(&(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR), &(table->RBAR), cnt*rowWordSize);
}
# 1953 "../../lib/cmsis/inc/core_cm4.h" 2
# 1973 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t SCB_GetFPUType(void)
{
  uint32_t mvfr0;

  mvfr0 = ((FPU_Type *) ((0xE000E000UL) + 0x0F30UL) )->MVFR0;
  if ((mvfr0 & ((0xFUL << 4U) | (0xFUL << 8U))) == 0x020U)
  {
    return 1U;
  }
  else
  {
    return 0U;
  }
}
# 2014 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1UL) > (0xFFFFFFUL ))
  {
    return (1UL);
  }

  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->LOAD = (uint32_t)(ticks - 1UL);
  __NVIC_SetPriority (SysTick_IRQn, (1UL << 4) - 1UL);
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->VAL = 0UL;
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->CTRL = (1UL << 2U) |
                   (1UL << 1U) |
                   (1UL );
  return (0UL);
}
# 2044 "../../lib/cmsis/inc/core_cm4.h"
extern volatile int32_t ITM_RxBuffer;
# 2056 "../../lib/cmsis/inc/core_cm4.h"
static inline uint32_t ITM_SendChar (uint32_t ch)
{
  if (((((ITM_Type *) (0xE0000000UL) )->TCR & (1UL )) != 0UL) &&
      ((((ITM_Type *) (0xE0000000UL) )->TER & 1UL ) != 0UL) )
  {
    while (((ITM_Type *) (0xE0000000UL) )->PORT[0U].u32 == 0UL)
    {
      __asm volatile ("nop");
    }
    ((ITM_Type *) (0xE0000000UL) )->PORT[0U].u8 = (uint8_t)ch;
  }
  return (ch);
}
# 2077 "../../lib/cmsis/inc/core_cm4.h"
static inline int32_t ITM_ReceiveChar (void)
{
  int32_t ch = -1;

  if (ITM_RxBuffer != ((int32_t)0x5AA55AA5U))
  {
    ch = ITM_RxBuffer;
    ITM_RxBuffer = ((int32_t)0x5AA55AA5U);
  }

  return (ch);
}
# 2097 "../../lib/cmsis/inc/core_cm4.h"
static inline int32_t ITM_CheckChar (void)
{

  if (ITM_RxBuffer == ((int32_t)0x5AA55AA5U))
  {
    return (0);
  }
  else
  {
    return (1);
  }
}
# 175 "../../lib/stm32lib/CMSIS/STM32L4xx/Include/stm32l4r9xx.h" 2
# 1 "../../lib/stm32lib/CMSIS/STM32L4xx/Include/system_stm32l4xx.h" 1
# 58 "../../lib/stm32lib/CMSIS/STM32L4xx/Include/system_stm32l4xx.h"
extern uint32_t SystemCoreClock;

extern const uint8_t AHBPrescTable[16];
extern const uint8_t APBPrescTable[8];
extern const uint32_t MSIRangeTable[12];
# 88 "../../lib/stm32lib/CMSIS/STM32L4xx/Include/system_stm32l4xx.h"
extern void SystemInit(void);
extern void SystemCoreClockUpdate(void);
# 176 "../../lib/stm32lib/CMSIS/STM32L4xx/Include/stm32l4r9xx.h" 2
# 186 "../../lib/stm32lib/CMSIS/STM32L4xx/Include/stm32l4r9xx.h"
typedef struct
{
  volatile uint32_t ISR;
  volatile uint32_t IER;
  volatile uint32_t CR;
  volatile uint32_t CFGR;
  volatile uint32_t CFGR2;
  volatile uint32_t SMPR1;
  volatile uint32_t SMPR2;
       uint32_t RESERVED1;
  volatile uint32_t TR1;
  volatile uint32_t TR2;
  volatile uint32_t TR3;
       uint32_t RESERVED2;
  volatile uint32_t SQR1;
  volatile uint32_t SQR2;
  volatile uint32_t SQR3;
  volatile uint32_t SQR4;
  volatile uint32_t DR;
       uint32_t RESERVED3;
       uint32_t RESERVED4;
  volatile uint32_t JSQR;
       uint32_t RESERVED5[4];
  volatile uint32_t OFR1;
  volatile uint32_t OFR2;
  volatile uint32_t OFR3;
  volatile uint32_t OFR4;
       uint32_t RESERVED6[4];
  volatile uint32_t JDR1;
  volatile uint32_t JDR2;
  volatile uint32_t JDR3;
  volatile uint32_t JDR4;
       uint32_t RESERVED7[4];
  volatile uint32_t AWD2CR;
  volatile uint32_t AWD3CR;
       uint32_t RESERVED8;
       uint32_t RESERVED9;
  volatile uint32_t DIFSEL;
  volatile uint32_t CALFACT;

} ADC_TypeDef;

typedef struct
{
  uint32_t RESERVED1;
  uint32_t RESERVED2;
  volatile uint32_t CCR;
  uint32_t RESERVED3;
} ADC_Common_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t SR;
  volatile uint32_t RISR;
  volatile uint32_t IER;
  volatile uint32_t MISR;
  volatile uint32_t ICR;
  volatile uint32_t ESCR;
  volatile uint32_t ESUR;
  volatile uint32_t CWSTRTR;
  volatile uint32_t CWSIZER;
  volatile uint32_t DR;
} DCMI_TypeDef;





typedef struct
{
  volatile uint32_t TIR;
  volatile uint32_t TDTR;
  volatile uint32_t TDLR;
  volatile uint32_t TDHR;
} CAN_TxMailBox_TypeDef;





typedef struct
{
  volatile uint32_t RIR;
  volatile uint32_t RDTR;
  volatile uint32_t RDLR;
  volatile uint32_t RDHR;
} CAN_FIFOMailBox_TypeDef;





typedef struct
{
  volatile uint32_t FR1;
  volatile uint32_t FR2;
} CAN_FilterRegister_TypeDef;





typedef struct
{
  volatile uint32_t MCR;
  volatile uint32_t MSR;
  volatile uint32_t TSR;
  volatile uint32_t RF0R;
  volatile uint32_t RF1R;
  volatile uint32_t IER;
  volatile uint32_t ESR;
  volatile uint32_t BTR;
  uint32_t RESERVED0[88];
  CAN_TxMailBox_TypeDef sTxMailBox[3];
  CAN_FIFOMailBox_TypeDef sFIFOMailBox[2];
  uint32_t RESERVED1[12];
  volatile uint32_t FMR;
  volatile uint32_t FM1R;
  uint32_t RESERVED2;
  volatile uint32_t FS1R;
  uint32_t RESERVED3;
  volatile uint32_t FFA1R;
  uint32_t RESERVED4;
  volatile uint32_t FA1R;
  uint32_t RESERVED5[8];
  CAN_FilterRegister_TypeDef sFilterRegister[28];
} CAN_TypeDef;






typedef struct
{
  volatile uint32_t CSR;
} COMP_TypeDef;

typedef struct
{
  volatile uint32_t CSR;
} COMP_Common_TypeDef;





typedef struct
{
  volatile uint32_t DR;
  volatile uint32_t IDR;
  volatile uint32_t CR;
  uint32_t RESERVED2;
  volatile uint32_t INIT;
  volatile uint32_t POL;
} CRC_TypeDef;




typedef struct
{
volatile uint32_t CR;
volatile uint32_t CFGR;
volatile uint32_t ISR;
volatile uint32_t ICR;
} CRS_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t SWTRIGR;
  volatile uint32_t DHR12R1;
  volatile uint32_t DHR12L1;
  volatile uint32_t DHR8R1;
  volatile uint32_t DHR12R2;
  volatile uint32_t DHR12L2;
  volatile uint32_t DHR8R2;
  volatile uint32_t DHR12RD;
  volatile uint32_t DHR12LD;
  volatile uint32_t DHR8RD;
  volatile uint32_t DOR1;
  volatile uint32_t DOR2;
  volatile uint32_t SR;
  volatile uint32_t CCR;
  volatile uint32_t MCR;
  volatile uint32_t SHSR1;
  volatile uint32_t SHSR2;
  volatile uint32_t SHHR;
  volatile uint32_t SHRR;
} DAC_TypeDef;




typedef struct
{
  volatile uint32_t FLTCR1;
  volatile uint32_t FLTCR2;
  volatile uint32_t FLTISR;
  volatile uint32_t FLTICR;
  volatile uint32_t FLTJCHGR;
  volatile uint32_t FLTFCR;
  volatile uint32_t FLTJDATAR;
  volatile uint32_t FLTRDATAR;
  volatile uint32_t FLTAWHTR;
  volatile uint32_t FLTAWLTR;
  volatile uint32_t FLTAWSR;
  volatile uint32_t FLTAWCFR;
  volatile uint32_t FLTEXMAX;
  volatile uint32_t FLTEXMIN;
  volatile uint32_t FLTCNVTIMR;
} DFSDM_Filter_TypeDef;




typedef struct
{
  volatile uint32_t CHCFGR1;
  volatile uint32_t CHCFGR2;
  volatile uint32_t CHAWSCDR;

  volatile uint32_t CHWDATAR;
  volatile uint32_t CHDATINR;
  volatile uint32_t CHDLYR;
} DFSDM_Channel_TypeDef;





typedef struct
{
  volatile uint32_t IDCODE;
  volatile uint32_t CR;
  volatile uint32_t APB1FZR1;
  volatile uint32_t APB1FZR2;
  volatile uint32_t APB2FZ;
} DBGMCU_TypeDef;






typedef struct
{
  volatile uint32_t CCR;
  volatile uint32_t CNDTR;
  volatile uint32_t CPAR;
  volatile uint32_t CMAR;
} DMA_Channel_TypeDef;

typedef struct
{
  volatile uint32_t ISR;
  volatile uint32_t IFCR;
} DMA_TypeDef;





typedef struct
{
  volatile uint32_t CCR;
}DMAMUX_Channel_TypeDef;

typedef struct
{
  volatile uint32_t CSR;
  volatile uint32_t CFR;
}DMAMUX_ChannelStatus_TypeDef;

typedef struct
{
  volatile uint32_t RGCR;
}DMAMUX_RequestGen_TypeDef;

typedef struct
{
  volatile uint32_t RGSR;
  volatile uint32_t RGCFR;
}DMAMUX_RequestGenStatus_TypeDef;






typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t ISR;
  volatile uint32_t IFCR;
  volatile uint32_t FGMAR;
  volatile uint32_t FGOR;
  volatile uint32_t BGMAR;
  volatile uint32_t BGOR;
  volatile uint32_t FGPFCCR;
  volatile uint32_t FGCOLR;
  volatile uint32_t BGPFCCR;
  volatile uint32_t BGCOLR;
  volatile uint32_t FGCMAR;
  volatile uint32_t BGCMAR;
  volatile uint32_t OPFCCR;
  volatile uint32_t OCOLR;
  volatile uint32_t OMAR;
  volatile uint32_t OOR;
  volatile uint32_t NLR;
  volatile uint32_t LWR;
  volatile uint32_t AMTCR;
  uint32_t RESERVED[236];
  volatile uint32_t FGCLUT[256];
  volatile uint32_t BGCLUT[256];
} DMA2D_TypeDef;





typedef struct
{
  volatile uint32_t VR;
  volatile uint32_t CR;
  volatile uint32_t CCR;
  volatile uint32_t LVCIDR;
  volatile uint32_t LCOLCR;
  volatile uint32_t LPCR;
  volatile uint32_t LPMCR;
  uint32_t RESERVED0[4];
  volatile uint32_t PCR;
  volatile uint32_t GVCIDR;
  volatile uint32_t MCR;
  volatile uint32_t VMCR;
  volatile uint32_t VPCR;
  volatile uint32_t VCCR;
  volatile uint32_t VNPCR;
  volatile uint32_t VHSACR;
  volatile uint32_t VHBPCR;
  volatile uint32_t VLCR;
  volatile uint32_t VVSACR;
  volatile uint32_t VVBPCR;
  volatile uint32_t VVFPCR;
  volatile uint32_t VVACR;
  volatile uint32_t LCCR;
  volatile uint32_t CMCR;
  volatile uint32_t GHCR;
  volatile uint32_t GPDR;
  volatile uint32_t GPSR;
  volatile uint32_t TCCR[6];
  uint32_t RESERVED1;
  volatile uint32_t CLCR;
  volatile uint32_t CLTCR;
  volatile uint32_t DLTCR;
  volatile uint32_t PCTLR;
  volatile uint32_t PCONFR;
  volatile uint32_t PUCR;
  volatile uint32_t PTTCR;
  volatile uint32_t PSR;
  uint32_t RESERVED2[2];
  volatile uint32_t ISR[2];
  volatile uint32_t IER[2];
  uint32_t RESERVED3[3];
  volatile uint32_t FIR[2];
  uint32_t RESERVED4[8];
  volatile uint32_t VSCR;
  uint32_t RESERVED5[2];
  volatile uint32_t LCVCIDR;
  volatile uint32_t LCCCR;
  uint32_t RESERVED6;
  volatile uint32_t LPMCCR;
  uint32_t RESERVED7[7];
  volatile uint32_t VMCCR;
  volatile uint32_t VPCCR;
  volatile uint32_t VCCCR;
  volatile uint32_t VNPCCR;
  volatile uint32_t VHSACCR;
  volatile uint32_t VHBPCCR;
  volatile uint32_t VLCCR;
  volatile uint32_t VVSACCR;
  volatile uint32_t VVBPCCR;
  volatile uint32_t VVFPCCR;
  volatile uint32_t VVACCR;
  uint32_t RESERVED8[167];
  volatile uint32_t WCFGR;
  volatile uint32_t WCR;
  volatile uint32_t WIER;
  volatile uint32_t WISR;
  volatile uint32_t WIFCR;
  uint32_t RESERVED9;
  volatile uint32_t WPCR[5];
  uint32_t RESERVED10;
  volatile uint32_t WRPCR;
} DSI_TypeDef;





typedef struct
{
  volatile uint32_t IMR1;
  volatile uint32_t EMR1;
  volatile uint32_t RTSR1;
  volatile uint32_t FTSR1;
  volatile uint32_t SWIER1;
  volatile uint32_t PR1;
  uint32_t RESERVED1;
  uint32_t RESERVED2;
  volatile uint32_t IMR2;
  volatile uint32_t EMR2;
  volatile uint32_t RTSR2;
  volatile uint32_t FTSR2;
  volatile uint32_t SWIER2;
  volatile uint32_t PR2;
} EXTI_TypeDef;






typedef struct
{
  volatile uint32_t CSSA;
  volatile uint32_t CSL;
  volatile uint32_t NVDSSA;
  volatile uint32_t NVDSL;
  volatile uint32_t VDSSA ;
  volatile uint32_t VDSL ;
  uint32_t RESERVED1;
  uint32_t RESERVED2;
  volatile uint32_t CR ;
} FIREWALL_TypeDef;






typedef struct
{
  volatile uint32_t ACR;
  volatile uint32_t PDKEYR;
  volatile uint32_t KEYR;
  volatile uint32_t OPTKEYR;
  volatile uint32_t SR;
  volatile uint32_t CR;
  volatile uint32_t ECCR;
  volatile uint32_t RESERVED1;
  volatile uint32_t OPTR;
  volatile uint32_t PCROP1SR;
  volatile uint32_t PCROP1ER;
  volatile uint32_t WRP1AR;
  volatile uint32_t WRP1BR;
       uint32_t RESERVED2[4];
  volatile uint32_t PCROP2SR;
  volatile uint32_t PCROP2ER;
  volatile uint32_t WRP2AR;
  volatile uint32_t WRP2BR;
       uint32_t RESERVED3[55];
  volatile uint32_t CFGR;
} FLASH_TypeDef;






typedef struct
{
  volatile uint32_t BTCR[8];
} FMC_Bank1_TypeDef;





typedef struct
{
  volatile uint32_t BWTR[7];
} FMC_Bank1E_TypeDef;





typedef struct
{
  volatile uint32_t PCR;
  volatile uint32_t SR;
  volatile uint32_t PMEM;
  volatile uint32_t PATT;
  uint32_t RESERVED0;
  volatile uint32_t ECCR;
} FMC_Bank3_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t SR;
  volatile uint32_t FCR;
       uint32_t RESERVED0;
  volatile uint32_t DVR;
       uint32_t RESERVED1[3];
  volatile uint32_t B0CR;
  volatile uint32_t B1CR;
  volatile uint32_t B2CR;
  volatile uint32_t B3CR;
       uint32_t RESERVED2[1012];
  volatile uint32_t LUT[2048];

} GFXMMU_TypeDef;





typedef struct
{
  volatile uint32_t MODER;
  volatile uint32_t OTYPER;
  volatile uint32_t OSPEEDR;
  volatile uint32_t PUPDR;
  volatile uint32_t IDR;
  volatile uint32_t ODR;
  volatile uint32_t BSRR;
  volatile uint32_t LCKR;
  volatile uint32_t AFR[2];
  volatile uint32_t BRR;

} GPIO_TypeDef;






typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t OAR1;
  volatile uint32_t OAR2;
  volatile uint32_t TIMINGR;
  volatile uint32_t TIMEOUTR;
  volatile uint32_t ISR;
  volatile uint32_t ICR;
  volatile uint32_t PECR;
  volatile uint32_t RXDR;
  volatile uint32_t TXDR;
} I2C_TypeDef;





typedef struct
{
  volatile uint32_t KR;
  volatile uint32_t PR;
  volatile uint32_t RLR;
  volatile uint32_t SR;
  volatile uint32_t WINR;
} IWDG_TypeDef;




typedef struct
{
  volatile uint32_t ISR;
  volatile uint32_t ICR;
  volatile uint32_t IER;
  volatile uint32_t CFGR;
  volatile uint32_t CR;
  volatile uint32_t CMP;
  volatile uint32_t ARR;
  volatile uint32_t CNT;
  volatile uint32_t OR;
} LPTIM_TypeDef;





typedef struct
{
  uint32_t RESERVED0[2];
  volatile uint32_t SSCR;
  volatile uint32_t BPCR;
  volatile uint32_t AWCR;
  volatile uint32_t TWCR;
  volatile uint32_t GCR;
  uint32_t RESERVED1[2];
  volatile uint32_t SRCR;
  uint32_t RESERVED2[1];
  volatile uint32_t BCCR;
  uint32_t RESERVED3[1];
  volatile uint32_t IER;
  volatile uint32_t ISR;
  volatile uint32_t ICR;
  volatile uint32_t LIPCR;
  volatile uint32_t CPSR;
  volatile uint32_t CDSR;
} LTDC_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t WHPCR;
  volatile uint32_t WVPCR;
  volatile uint32_t CKCR;
  volatile uint32_t PFCR;
  volatile uint32_t CACR;
  volatile uint32_t DCCR;
  volatile uint32_t BFCR;
  uint32_t RESERVED0[2];
  volatile uint32_t CFBAR;
  volatile uint32_t CFBLR;
  volatile uint32_t CFBLNR;
  uint32_t RESERVED1[3];
  volatile uint32_t CLUTWR;

} LTDC_Layer_TypeDef;





typedef struct
{
  volatile uint32_t CSR;
  volatile uint32_t OTR;
  volatile uint32_t LPOTR;
} OPAMP_TypeDef;

typedef struct
{
  volatile uint32_t CSR;
} OPAMP_Common_TypeDef;





typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t CR3;
  volatile uint32_t CR4;
  volatile uint32_t SR1;
  volatile uint32_t SR2;
  volatile uint32_t SCR;
  uint32_t RESERVED;
  volatile uint32_t PUCRA;
  volatile uint32_t PDCRA;
  volatile uint32_t PUCRB;
  volatile uint32_t PDCRB;
  volatile uint32_t PUCRC;
  volatile uint32_t PDCRC;
  volatile uint32_t PUCRD;
  volatile uint32_t PDCRD;
  volatile uint32_t PUCRE;
  volatile uint32_t PDCRE;
  volatile uint32_t PUCRF;
  volatile uint32_t PDCRF;
  volatile uint32_t PUCRG;
  volatile uint32_t PDCRG;
  volatile uint32_t PUCRH;
  volatile uint32_t PDCRH;
  volatile uint32_t PUCRI;
  volatile uint32_t PDCRI;
  uint32_t RESERVED1[6];
  volatile uint32_t CR5;
} PWR_TypeDef;






typedef struct
{
  volatile uint32_t CR;
  uint32_t RESERVED;
  volatile uint32_t DCR1;
  volatile uint32_t DCR2;
  volatile uint32_t DCR3;
  uint32_t RESERVED1[3];
  volatile uint32_t SR;
  volatile uint32_t FCR;
  uint32_t RESERVED2[6];
  volatile uint32_t DLR;
  uint32_t RESERVED3;
  volatile uint32_t AR;
  uint32_t RESERVED4;
  volatile uint32_t DR;
  uint32_t RESERVED5[11];
  volatile uint32_t PSMKR;
  uint32_t RESERVED6;
  volatile uint32_t PSMAR;
  uint32_t RESERVED7;
  volatile uint32_t PIR;
  uint32_t RESERVED8[27];
  volatile uint32_t CCR;
  uint32_t RESERVED9;
  volatile uint32_t TCR;
  uint32_t RESERVED10;
  volatile uint32_t IR;
  uint32_t RESERVED11[3];
  volatile uint32_t ABR;
  uint32_t RESERVED12[3];
  volatile uint32_t LPTR;
  uint32_t RESERVED13[19];
  volatile uint32_t WCCR;
  uint32_t RESERVED14;
  volatile uint32_t WTCR;
  uint32_t RESERVED15;
  volatile uint32_t WIR;
  uint32_t RESERVED16[3];
  volatile uint32_t WABR;
  uint32_t RESERVED17[23];
  volatile uint32_t HLCR;
} OCTOSPI_TypeDef;





typedef struct
{
  uint32_t RESERVED;
  volatile uint32_t PCR[2];
} OCTOSPIM_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t ICSCR;
  volatile uint32_t CFGR;
  volatile uint32_t PLLCFGR;
  volatile uint32_t PLLSAI1CFGR;
  volatile uint32_t PLLSAI2CFGR;
  volatile uint32_t CIER;
  volatile uint32_t CIFR;
  volatile uint32_t CICR;
  uint32_t RESERVED0;
  volatile uint32_t AHB1RSTR;
  volatile uint32_t AHB2RSTR;
  volatile uint32_t AHB3RSTR;
  uint32_t RESERVED1;
  volatile uint32_t APB1RSTR1;
  volatile uint32_t APB1RSTR2;
  volatile uint32_t APB2RSTR;
  uint32_t RESERVED2;
  volatile uint32_t AHB1ENR;
  volatile uint32_t AHB2ENR;
  volatile uint32_t AHB3ENR;
  uint32_t RESERVED3;
  volatile uint32_t APB1ENR1;
  volatile uint32_t APB1ENR2;
  volatile uint32_t APB2ENR;
  uint32_t RESERVED4;
  volatile uint32_t AHB1SMENR;
  volatile uint32_t AHB2SMENR;
  volatile uint32_t AHB3SMENR;
  uint32_t RESERVED5;
  volatile uint32_t APB1SMENR1;
  volatile uint32_t APB1SMENR2;
  volatile uint32_t APB2SMENR;
  uint32_t RESERVED6;
  volatile uint32_t CCIPR;
  uint32_t RESERVED7;
  volatile uint32_t BDCR;
  volatile uint32_t CSR;
  volatile uint32_t CRRCR;
  volatile uint32_t CCIPR2;
} RCC_TypeDef;





typedef struct
{
  volatile uint32_t TR;
  volatile uint32_t DR;
  volatile uint32_t CR;
  volatile uint32_t ISR;
  volatile uint32_t PRER;
  volatile uint32_t WUTR;
       uint32_t reserved;
  volatile uint32_t ALRMAR;
  volatile uint32_t ALRMBR;
  volatile uint32_t WPR;
  volatile uint32_t SSR;
  volatile uint32_t SHIFTR;
  volatile uint32_t TSTR;
  volatile uint32_t TSDR;
  volatile uint32_t TSSSR;
  volatile uint32_t CALR;
  volatile uint32_t TAMPCR;
  volatile uint32_t ALRMASSR;
  volatile uint32_t ALRMBSSR;
  volatile uint32_t OR;
  volatile uint32_t BKP0R;
  volatile uint32_t BKP1R;
  volatile uint32_t BKP2R;
  volatile uint32_t BKP3R;
  volatile uint32_t BKP4R;
  volatile uint32_t BKP5R;
  volatile uint32_t BKP6R;
  volatile uint32_t BKP7R;
  volatile uint32_t BKP8R;
  volatile uint32_t BKP9R;
  volatile uint32_t BKP10R;
  volatile uint32_t BKP11R;
  volatile uint32_t BKP12R;
  volatile uint32_t BKP13R;
  volatile uint32_t BKP14R;
  volatile uint32_t BKP15R;
  volatile uint32_t BKP16R;
  volatile uint32_t BKP17R;
  volatile uint32_t BKP18R;
  volatile uint32_t BKP19R;
  volatile uint32_t BKP20R;
  volatile uint32_t BKP21R;
  volatile uint32_t BKP22R;
  volatile uint32_t BKP23R;
  volatile uint32_t BKP24R;
  volatile uint32_t BKP25R;
  volatile uint32_t BKP26R;
  volatile uint32_t BKP27R;
  volatile uint32_t BKP28R;
  volatile uint32_t BKP29R;
  volatile uint32_t BKP30R;
  volatile uint32_t BKP31R;
} RTC_TypeDef;





typedef struct
{
  volatile uint32_t GCR;
  uint32_t RESERVED[16];
  volatile uint32_t PDMCR;
  volatile uint32_t PDMDLY;
} SAI_TypeDef;

typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t FRCR;
  volatile uint32_t SLOTR;
  volatile uint32_t IMR;
  volatile uint32_t SR;
  volatile uint32_t CLRFR;
  volatile uint32_t DR;
} SAI_Block_TypeDef;






typedef struct
{
  volatile uint32_t POWER;
  volatile uint32_t CLKCR;
  volatile uint32_t ARG;
  volatile uint32_t CMD;
  volatile const uint32_t RESPCMD;
  volatile const uint32_t RESP1;
  volatile const uint32_t RESP2;
  volatile const uint32_t RESP3;
  volatile const uint32_t RESP4;
  volatile uint32_t DTIMER;
  volatile uint32_t DLEN;
  volatile uint32_t DCTRL;
  volatile const uint32_t DCOUNT;
  volatile const uint32_t STA;
  volatile uint32_t ICR;
  volatile uint32_t MASK;
  volatile uint32_t ACKTIME;
  uint32_t RESERVED0[3];
  volatile uint32_t IDMACTRL;
  volatile uint32_t IDMABSIZE;
  volatile uint32_t IDMABASE0;
  volatile uint32_t IDMABASE1;
  uint32_t RESERVED1[8];
  volatile uint32_t FIFO;
} SDMMC_TypeDef;




typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SR;
  volatile uint32_t DR;
  volatile uint32_t CRCPR;
  volatile uint32_t RXCRCR;
  volatile uint32_t TXCRCR;
} SPI_TypeDef;






typedef struct
{
  volatile uint32_t MEMRMP;
  volatile uint32_t CFGR1;
  volatile uint32_t EXTICR[4];
  volatile uint32_t SCSR;
  volatile uint32_t CFGR2;
  volatile uint32_t SWPR;
  volatile uint32_t SKR;
  volatile uint32_t SWPR2;
} SYSCFG_TypeDef;






typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SMCR;
  volatile uint32_t DIER;
  volatile uint32_t SR;
  volatile uint32_t EGR;
  volatile uint32_t CCMR1;
  volatile uint32_t CCMR2;
  volatile uint32_t CCER;
  volatile uint32_t CNT;
  volatile uint32_t PSC;
  volatile uint32_t ARR;
  volatile uint32_t RCR;
  volatile uint32_t CCR1;
  volatile uint32_t CCR2;
  volatile uint32_t CCR3;
  volatile uint32_t CCR4;
  volatile uint32_t BDTR;
  volatile uint32_t DCR;
  volatile uint32_t DMAR;
  volatile uint32_t OR1;
  volatile uint32_t CCMR3;
  volatile uint32_t CCR5;
  volatile uint32_t CCR6;
  volatile uint32_t OR2;
  volatile uint32_t OR3;
} TIM_TypeDef;






typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t IER;
  volatile uint32_t ICR;
  volatile uint32_t ISR;
  volatile uint32_t IOHCR;
  uint32_t RESERVED1;
  volatile uint32_t IOASCR;
  uint32_t RESERVED2;
  volatile uint32_t IOSCR;
  uint32_t RESERVED3;
  volatile uint32_t IOCCR;
  uint32_t RESERVED4;
  volatile uint32_t IOGCSR;
  volatile uint32_t IOGXCR[8];
} TSC_TypeDef;





typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t CR3;
  volatile uint32_t BRR;
  volatile uint16_t GTPR;
  uint16_t RESERVED2;
  volatile uint32_t RTOR;
  volatile uint16_t RQR;
  uint16_t RESERVED3;
  volatile uint32_t ISR;
  volatile uint32_t ICR;
  volatile uint16_t RDR;
  uint16_t RESERVED4;
  volatile uint16_t TDR;
  uint16_t RESERVED5;
  volatile uint32_t PRESC;
} USART_TypeDef;





typedef struct
{
  volatile uint32_t CSR;
  volatile uint32_t CCR;
} VREFBUF_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CFR;
  volatile uint32_t SR;
} WWDG_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t SR;
  volatile uint32_t DR;
} RNG_TypeDef;




typedef struct
{
  volatile uint32_t GOTGCTL;
  volatile uint32_t GOTGINT;
  volatile uint32_t GAHBCFG;
  volatile uint32_t GUSBCFG;
  volatile uint32_t GRSTCTL;
  volatile uint32_t GINTSTS;
  volatile uint32_t GINTMSK;
  volatile uint32_t GRXSTSR;
  volatile uint32_t GRXSTSP;
  volatile uint32_t GRXFSIZ;
  volatile uint32_t DIEPTXF0_HNPTXFSIZ;
  volatile uint32_t HNPTXSTS;
  uint32_t Reserved30[2];
  volatile uint32_t GCCFG;
  volatile uint32_t CID;
  volatile uint32_t GSNPSID;
  volatile uint32_t GHWCFG1;
  volatile uint32_t GHWCFG2;
  volatile uint32_t GHWCFG3;
  uint32_t Reserved6;
  volatile uint32_t GLPMCFG;
  volatile uint32_t GPWRDN;
  volatile uint32_t GDFIFOCFG;
   volatile uint32_t GADPCTL;
    uint32_t Reserved43[39];
  volatile uint32_t HPTXFSIZ;
  volatile uint32_t DIEPTXF[0x0F];
} USB_OTG_GlobalTypeDef;




typedef struct
{
  volatile uint32_t DCFG;
  volatile uint32_t DCTL;
  volatile uint32_t DSTS;
  uint32_t Reserved0C;
  volatile uint32_t DIEPMSK;
  volatile uint32_t DOEPMSK;
  volatile uint32_t DAINT;
  volatile uint32_t DAINTMSK;
  uint32_t Reserved20;
  uint32_t Reserved24;
  volatile uint32_t DVBUSDIS;
  volatile uint32_t DVBUSPULSE;
  volatile uint32_t DTHRCTL;
  volatile uint32_t DIEPEMPMSK;
  volatile uint32_t DEACHINT;
  volatile uint32_t DEACHMSK;
  uint32_t Reserved40;
  volatile uint32_t DINEP1MSK;
  uint32_t Reserved44[15];
  volatile uint32_t DOUTEP1MSK;
} USB_OTG_DeviceTypeDef;




typedef struct
{
  volatile uint32_t DIEPCTL;
  uint32_t Reserved04;
  volatile uint32_t DIEPINT;
  uint32_t Reserved0C;
  volatile uint32_t DIEPTSIZ;
  volatile uint32_t DIEPDMA;
  volatile uint32_t DTXFSTS;
  uint32_t Reserved18;
} USB_OTG_INEndpointTypeDef;




typedef struct
{
  volatile uint32_t DOEPCTL;
  uint32_t Reserved04;
  volatile uint32_t DOEPINT;
  uint32_t Reserved0C;
  volatile uint32_t DOEPTSIZ;
  volatile uint32_t DOEPDMA;
  uint32_t Reserved18[2];
} USB_OTG_OUTEndpointTypeDef;




typedef struct
{
  volatile uint32_t HCFG;
  volatile uint32_t HFIR;
  volatile uint32_t HFNUM;
  uint32_t Reserved40C;
  volatile uint32_t HPTXSTS;
  volatile uint32_t HAINT;
  volatile uint32_t HAINTMSK;
} USB_OTG_HostTypeDef;




typedef struct
{
  volatile uint32_t HCCHAR;
  volatile uint32_t HCSPLT;
  volatile uint32_t HCINT;
  volatile uint32_t HCINTMSK;
  volatile uint32_t HCTSIZ;
  volatile uint32_t HCDMA;
  uint32_t Reserved[2];
} USB_OTG_HostChannelTypeDef;
# 163 "../../lib/stm32lib/CMSIS/STM32L4xx/Include/stm32l4xx.h" 2
# 180 "../../lib/stm32lib/CMSIS/STM32L4xx/Include/stm32l4xx.h"
typedef enum
{
  RESET = 0,
  SET = !RESET
} FlagStatus, ITStatus;

typedef enum
{
  DISABLE = 0,
  ENABLE = !DISABLE
} FunctionalState;


typedef enum
{
  SUCCESS = 0,
  ERROR = !SUCCESS
} ErrorStatus;
# 31 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_def.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/Legacy/stm32_hal_legacy.h" 1
# 32 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_def.h" 2
# 1 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 212 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 3 4
typedef unsigned int size_t;
# 324 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 33 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_def.h" 2






typedef enum
{
  HAL_OK = 0x00,
  HAL_ERROR = 0x01,
  HAL_BUSY = 0x02,
  HAL_TIMEOUT = 0x03
} HAL_StatusTypeDef;




typedef enum
{
  HAL_UNLOCKED = 0x00,
  HAL_LOCKED = 0x01
} HAL_LockTypeDef;
# 30 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma.h" 2
# 47 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma.h"
typedef struct
{
  uint32_t Request;


  uint32_t Direction;



  uint32_t PeriphInc;


  uint32_t MemInc;


  uint32_t PeriphDataAlignment;


  uint32_t MemDataAlignment;


  uint32_t Mode;




  uint32_t Priority;

} DMA_InitTypeDef;




typedef enum
{
  HAL_DMA_STATE_RESET = 0x00U,
  HAL_DMA_STATE_READY = 0x01U,
  HAL_DMA_STATE_BUSY = 0x02U,
  HAL_DMA_STATE_TIMEOUT = 0x03U,
}HAL_DMA_StateTypeDef;




typedef enum
{
  HAL_DMA_FULL_TRANSFER = 0x00U,
  HAL_DMA_HALF_TRANSFER = 0x01U
}HAL_DMA_LevelCompleteTypeDef;





typedef enum
{
  HAL_DMA_XFER_CPLT_CB_ID = 0x00U,
  HAL_DMA_XFER_HALFCPLT_CB_ID = 0x01U,
  HAL_DMA_XFER_ERROR_CB_ID = 0x02U,
  HAL_DMA_XFER_ABORT_CB_ID = 0x03U,
  HAL_DMA_XFER_ALL_CB_ID = 0x04U
}HAL_DMA_CallbackIDTypeDef;




typedef struct __DMA_HandleTypeDef
{
  DMA_Channel_TypeDef *Instance;

  DMA_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  volatile HAL_DMA_StateTypeDef State;

  void *Parent;

  void (* XferCpltCallback)(struct __DMA_HandleTypeDef * hdma);

  void (* XferHalfCpltCallback)(struct __DMA_HandleTypeDef * hdma);

  void (* XferErrorCallback)(struct __DMA_HandleTypeDef * hdma);

  void (* XferAbortCallback)(struct __DMA_HandleTypeDef * hdma);

  volatile uint32_t ErrorCode;

  DMA_TypeDef *DmaBaseAddress;

  uint32_t ChannelIndex;


  DMAMUX_Channel_TypeDef *DMAmuxChannel;

  DMAMUX_ChannelStatus_TypeDef *DMAmuxChannelStatus;

  uint32_t DMAmuxChannelStatusMask;

  DMAMUX_RequestGen_TypeDef *DMAmuxRequestGen;

  DMAMUX_RequestGenStatus_TypeDef *DMAmuxRequestGenStatus;

  uint32_t DMAmuxRequestGenStatusMask;



}DMA_HandleTypeDef;
# 628 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma_ex.h" 1
# 54 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma_ex.h"
typedef struct
{
  uint32_t SyncSignalID;


  uint32_t SyncPolarity;


  FunctionalState SyncEnable;



  FunctionalState EventEnable;


  uint32_t RequestNumber;



}HAL_DMA_MuxSyncConfigTypeDef;





typedef struct
{
 uint32_t SignalID;


  uint32_t Polarity;


  uint32_t RequestNumber;


}HAL_DMA_MuxRequestGeneratorConfigTypeDef;
# 211 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma_ex.h"
HAL_StatusTypeDef HAL_DMAEx_ConfigMuxRequestGenerator (DMA_HandleTypeDef *hdma,
             HAL_DMA_MuxRequestGeneratorConfigTypeDef *pRequestGeneratorConfig);
HAL_StatusTypeDef HAL_DMAEx_EnableMuxRequestGenerator (DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMAEx_DisableMuxRequestGenerator (DMA_HandleTypeDef *hdma);



HAL_StatusTypeDef HAL_DMAEx_ConfigMuxSync(DMA_HandleTypeDef *hdma, HAL_DMA_MuxSyncConfigTypeDef *pSyncConfig);


void HAL_DMAEx_MUX_IRQHandler(DMA_HandleTypeDef *hdma);
# 629 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma.h" 2
# 641 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma.h"
HAL_StatusTypeDef HAL_DMA_Init(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_DeInit (DMA_HandleTypeDef *hdma);
# 651 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma.h"
HAL_StatusTypeDef HAL_DMA_Start (DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength);
HAL_StatusTypeDef HAL_DMA_Start_IT(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength);
HAL_StatusTypeDef HAL_DMA_Abort(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_Abort_IT(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_PollForTransfer(DMA_HandleTypeDef *hdma, HAL_DMA_LevelCompleteTypeDef CompleteLevel, uint32_t Timeout);
void HAL_DMA_IRQHandler(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_RegisterCallback(DMA_HandleTypeDef *hdma, HAL_DMA_CallbackIDTypeDef CallbackID, void (* pCallback)( DMA_HandleTypeDef * _hdma));
HAL_StatusTypeDef HAL_DMA_UnRegisterCallback(DMA_HandleTypeDef *hdma, HAL_DMA_CallbackIDTypeDef CallbackID);
# 668 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma.h"
HAL_DMA_StateTypeDef HAL_DMA_GetState(DMA_HandleTypeDef *hdma);
uint32_t HAL_DMA_GetError(DMA_HandleTypeDef *hdma);
# 31 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h" 1
# 32 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h" 1
# 2388 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_DMA_GetRegAddr(ADC_TypeDef *ADCx, uint32_t Register)
{

  (void)(Register);


  return (uint32_t) &(ADCx->DR);
}
# 2440 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_SetCommonClock(ADC_Common_TypeDef *ADCxy_COMMON, uint32_t CommonClock)
{
  (((ADCxy_COMMON->CCR)) = ((((((ADCxy_COMMON->CCR))) & (~((0x3UL << (16U)) | (0xFUL << (18U))))) | (CommonClock))));
}
# 2468 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetCommonClock(ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (uint32_t)(((ADCxy_COMMON->CCR) & ((0x3UL << (16U)) | (0xFUL << (18U)))));
}
# 2502 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_SetCommonPathInternalCh(ADC_Common_TypeDef *ADCxy_COMMON, uint32_t PathInternal)
{
  (((ADCxy_COMMON->CCR)) = ((((((ADCxy_COMMON->CCR))) & (~((0x1UL << (22U)) | (0x1UL << (23U)) | (0x1UL << (24U))))) | (PathInternal))));
}
# 2524 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetCommonPathInternalCh(ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (uint32_t)(((ADCxy_COMMON->CCR) & ((0x1UL << (22U)) | (0x1UL << (23U)) | (0x1UL << (24U)))));
}
# 2568 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_SetCalibrationFactor(ADC_TypeDef *ADCx, uint32_t SingleDiff, uint32_t CalibrationFactor)
{
  (((ADCx->CALFACT)) = ((((((ADCx->CALFACT))) & (~(SingleDiff & ((0x7FUL << (16U)) | (0x7FUL << (0U)))))) | (CalibrationFactor << (((SingleDiff & (0x00010000UL)) >> ((16UL) - 4UL)) & ~(SingleDiff & (0x7FUL << (0U))))))))

                                                                                                                                                                      ;
}
# 2591 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetCalibrationFactor(ADC_TypeDef *ADCx, uint32_t SingleDiff)
{




  return (uint32_t)(((ADCx->CALFACT) & ((SingleDiff & ((0x7FUL << (16U)) | (0x7FUL << (0U)))))) >> ((SingleDiff & (0x00010000UL)) >> ((16UL) - 4UL)));
}
# 2617 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_SetResolution(ADC_TypeDef *ADCx, uint32_t Resolution)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x3UL << (3U))))) | (Resolution))));
}
# 2634 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetResolution(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x3UL << (3U)))));
}
# 2654 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_SetDataAlignment(ADC_TypeDef *ADCx, uint32_t DataAlignment)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (5U))))) | (DataAlignment))));
}
# 2669 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetDataAlignment(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (5U)))));
}
# 2722 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_SetLowPowerMode(ADC_TypeDef *ADCx, uint32_t LowPowerMode)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (14U))))) | (LowPowerMode))));
}
# 2770 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetLowPowerMode(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (14U)))));
}
# 2855 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_SetOffset(ADC_TypeDef *ADCx, uint32_t Offsety, uint32_t Channel, uint32_t OffsetLevel)
{
  register volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->OFR1)) + ((Offsety) << 2UL))));

  (((*preg)) = ((((((*preg))) & (~((0x1UL << (31U)) | (0x1FUL << (26U)) | (0xFFFUL << (0U))))) | ((0x1UL << (31U)) | (Channel & ((0x1FUL << (26U)))) | OffsetLevel))))

                                                                                        ;
}
# 2934 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetOffsetChannel(ADC_TypeDef *ADCx, uint32_t Offsety)
{
  register const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->OFR1)) + ((Offsety) << 2UL))));

  return (uint32_t) ((*preg) & ((0x1FUL << (26U))));
}
# 2960 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetOffsetLevel(ADC_TypeDef *ADCx, uint32_t Offsety)
{
  register const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->OFR1)) + ((Offsety) << 2UL))));

  return (uint32_t) ((*preg) & ((0xFFFUL << (0U))));
}
# 2993 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_SetOffsetState(ADC_TypeDef *ADCx, uint32_t Offsety, uint32_t OffsetState)
{
  register volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->OFR1)) + ((Offsety) << 2UL))));

  (((*preg)) = ((((((*preg))) & (~((0x1UL << (31U))))) | (OffsetState))))

                         ;
}
# 3019 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetOffsetState(ADC_TypeDef *ADCx, uint32_t Offsety)
{
  register const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->OFR1)) + ((Offsety) << 2UL))));

  return (uint32_t) ((*preg) & ((0x1UL << (31U))));
}
# 3041 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_SetSamplingTimeCommonConfig(ADC_TypeDef *ADCx, uint32_t SamplingTimeCommonConfig)
{
  (((ADCx->SMPR1)) = ((((((ADCx->SMPR1))) & (~((0x1UL << (31U))))) | (SamplingTimeCommonConfig))));
}
# 3055 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetSamplingTimeCommonConfig(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->SMPR1) & ((0x1UL << (31U)))));
}
# 3108 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_REG_SetTriggerSource(ADC_TypeDef *ADCx, uint32_t TriggerSource)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x3UL << (10U)) | (0xFUL << (6U))))) | (TriggerSource))));
}
# 3147 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetTriggerSource(ADC_TypeDef *ADCx)
{
  register volatile uint32_t TriggerSource = ((ADCx->CFGR) & ((0xFUL << (6U)) | (0x3UL << (10U))));



  register uint32_t ShiftExten = ((TriggerSource & (0x3UL << (10U))) >> ((10UL) - 2UL));



  return ((TriggerSource
           & (((((0x00000000UL) & (0xFUL << (6U))) << (4U * 0UL)) | (((0xFUL << (6U))) << (4U * 1UL)) | (((0xFUL << (6U))) << (4U * 2UL)) | (((0xFUL << (6U))) << (4U * 3UL)) ) >> ShiftExten) & (0xFUL << (6U)))
          | ((((((0x00000000UL) & (0x3UL << (10U))) << (4U * 0UL)) | ((((0x1UL << (10U)))) << (4U * 1UL)) | ((((0x1UL << (10U)))) << (4U * 2UL)) | ((((0x1UL << (10U)))) << (4U * 3UL)) ) >> ShiftExten) & (0x3UL << (10U)))
         );
}
# 3174 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_IsTriggerSourceSWStart(ADC_TypeDef *ADCx)
{
  return ((((ADCx->CFGR) & ((0x3UL << (10U)))) == ((0x00000000UL) & (0x3UL << (10U)))) ? 1UL : 0UL);
}
# 3194 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_REG_SetTriggerEdge(ADC_TypeDef *ADCx, uint32_t ExternalTriggerEdge)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x3UL << (10U))))) | (ExternalTriggerEdge))));
}
# 3209 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetTriggerEdge(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x3UL << (10U)))));
}
# 3268 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_REG_SetSequencerLength(ADC_TypeDef *ADCx, uint32_t SequencerNbRanks)
{
  (((ADCx->SQR1)) = ((((((ADCx->SQR1))) & (~((0xFUL << (0U))))) | (SequencerNbRanks))));
}
# 3322 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetSequencerLength(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->SQR1) & ((0xFUL << (0U)))));
}
# 3354 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_REG_SetSequencerDiscont(ADC_TypeDef *ADCx, uint32_t SeqDiscont)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (16U)) | (0x7UL << (17U))))) | (SeqDiscont))));
}
# 3377 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetSequencerDiscont(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (16U)) | (0x7UL << (17U)))));
}
# 3476 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_REG_SetSequencerRanks(ADC_TypeDef *ADCx, uint32_t Rank, uint32_t Channel)
{




  register volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->SQR1)) + ((((Rank & ((0x00000000UL) | (0x00000100UL) | (0x00000200UL) | (0x00000300UL))) >> (8UL))) << 2UL))));

  (((*preg)) = ((((((*preg))) & (~(((0x1FUL << (0U))) << (Rank & (((0x1FUL << (0U)))))))) | (((Channel & ((0x1FUL << (26U)))) >> (26UL)) << (Rank & (((0x1FUL << (0U)))))))))

                                                                                                                                   ;
}
# 3585 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetSequencerRanks(ADC_TypeDef *ADCx, uint32_t Rank)
{
  register const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->SQR1)) + ((((Rank & ((0x00000000UL) | (0x00000100UL) | (0x00000200UL) | (0x00000300UL))) >> (8UL))) << 2UL))));

  return (uint32_t)((((*preg) & (((0x1FUL << (0U))) << (Rank & (((0x1FUL << (0U)))))))

                     >> (Rank & (((0x1FUL << (0U)))))) << (26UL)
                   );
}
# 3614 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_REG_SetContinuousMode(ADC_TypeDef *ADCx, uint32_t Continuous)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (13U))))) | (Continuous))));
}
# 3631 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetContinuousMode(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (13U)))));
}
# 3671 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_REG_SetDMATransfer(ADC_TypeDef *ADCx, uint32_t DMATransfer)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (0U)) | (0x1UL << (1U))))) | (DMATransfer))));
}
# 3706 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetDMATransfer(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (0U)) | (0x1UL << (1U)))));
}
# 3729 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_REG_SetDFSDMTransfer(ADC_TypeDef *ADCx, uint32_t DFSDMTransfer)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (2U))))) | (DFSDMTransfer))));
}
# 3742 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetDFSDMTransfer(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (2U)))));
}
# 3768 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_REG_SetOverrun(ADC_TypeDef *ADCx, uint32_t Overrun)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (12U))))) | (Overrun))));
}
# 3782 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetOverrun(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (12U)))));
}
# 3834 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetTriggerSource(ADC_TypeDef *ADCx, uint32_t TriggerSource)
{
  (((ADCx->JSQR)) = ((((((ADCx->JSQR))) & (~((0xFUL << (2U)) | (0x3UL << (6U))))) | (TriggerSource))));
}
# 3873 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetTriggerSource(ADC_TypeDef *ADCx)
{
  register volatile uint32_t TriggerSource = ((ADCx->JSQR) & ((0xFUL << (2U)) | (0x3UL << (6U))));



  register uint32_t ShiftJexten = ((TriggerSource & (0x3UL << (6U))) >> (( 6UL) - 2UL));



  return ((TriggerSource
           & (((((0x00000000UL) & (0xFUL << (2U))) << (4U * 0UL)) | (((0xFUL << (2U))) << (4U * 1UL)) | (((0xFUL << (2U))) << (4U * 2UL)) | (((0xFUL << (2U))) << (4U * 3UL)) ) >> ShiftJexten) & (0xFUL << (2U)))
          | ((((((0x00000000UL) & (0x3UL << (6U))) << (4U * 0UL)) | ((((0x1UL << (6U)))) << (4U * 1UL)) | ((((0x1UL << (6U)))) << (4U * 2UL)) | ((((0x1UL << (6U)))) << (4U * 3UL)) ) >> ShiftJexten) & (0x3UL << (6U)))
         );
}
# 3900 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_IsTriggerSourceSWStart(ADC_TypeDef *ADCx)
{
  return ((((ADCx->JSQR) & ((0x3UL << (6U)))) == ((0x00000000UL) & (0x3UL << (6U)))) ? 1UL : 0UL);
}
# 3920 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetTriggerEdge(ADC_TypeDef *ADCx, uint32_t ExternalTriggerEdge)
{
  (((ADCx->JSQR)) = ((((((ADCx->JSQR))) & (~((0x3UL << (6U))))) | (ExternalTriggerEdge))));
}
# 3935 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetTriggerEdge(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->JSQR) & ((0x3UL << (6U)))));
}
# 3961 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetSequencerLength(ADC_TypeDef *ADCx, uint32_t SequencerNbRanks)
{
  (((ADCx->JSQR)) = ((((((ADCx->JSQR))) & (~((0x3UL << (0U))))) | (SequencerNbRanks))));
}
# 3982 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetSequencerLength(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->JSQR) & ((0x3UL << (0U)))));
}
# 4000 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetSequencerDiscont(ADC_TypeDef *ADCx, uint32_t SeqDiscont)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (20U))))) | (SeqDiscont))));
}
# 4015 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetSequencerDiscont(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (20U)))));
}
# 4085 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetSequencerRanks(ADC_TypeDef *ADCx, uint32_t Rank, uint32_t Channel)
{




  (((ADCx->JSQR)) = ((((((ADCx->JSQR))) & (~((((0x1FUL << (26U))) >> (26UL)) << (Rank & (((0x1FUL << (0U)))))))) | (((Channel & ((0x1FUL << (26U)))) >> (26UL)) << (Rank & (((0x1FUL << (0U)))))))))

                                                                                                                                   ;
}
# 4164 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetSequencerRanks(ADC_TypeDef *ADCx, uint32_t Rank)
{
  return (uint32_t)((((ADCx->JSQR) & ((((0x1FUL << (26U))) >> (26UL)) << (Rank & (((0x1FUL << (0U)))))))

                     >> (Rank & (((0x1FUL << (0U)))))) << (26UL)
                   );
}
# 4202 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetTrigAuto(ADC_TypeDef *ADCx, uint32_t TrigAuto)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (25U))))) | (TrigAuto))));
}
# 4216 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetTrigAuto(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (25U)))));
}
# 4262 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetQueueMode(ADC_TypeDef *ADCx, uint32_t QueueMode)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (21U)) | (0x1UL << (31U))))) | (QueueMode))));
}
# 4277 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetQueueMode(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (21U)) | (0x1UL << (31U)))));
}
# 4501 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_INJ_ConfigQueueContext(ADC_TypeDef *ADCx,
                                                   uint32_t TriggerSource,
                                                   uint32_t ExternalTriggerEdge,
                                                   uint32_t SequencerNbRanks,
                                                   uint32_t Rank1_Channel,
                                                   uint32_t Rank2_Channel,
                                                   uint32_t Rank3_Channel,
                                                   uint32_t Rank4_Channel)
{






  register uint32_t is_trigger_not_sw = (uint32_t)((TriggerSource != (0x00000000UL)) ? 1UL : 0UL);
  (((ADCx->JSQR)) = ((((((ADCx->JSQR))) & (~((0xFUL << (2U)) | (0x3UL << (6U)) | (0x1FUL << (26U)) | (0x1FUL << (20U)) | (0x1FUL << (14U)) | (0x1FUL << (8U)) | (0x3UL << (0U))))) | ((TriggerSource & (0xFUL << (2U))) | (ExternalTriggerEdge * (is_trigger_not_sw)) | (((Rank4_Channel & ((0x1FUL << (26U)))) >> (26UL)) << (((0x00000300UL) | (26UL)) & (((0x1FUL << (0U)))))) | (((Rank3_Channel & ((0x1FUL << (26U)))) >> (26UL)) << (((0x00000200UL) | (20UL)) & (((0x1FUL << (0U)))))) | (((Rank2_Channel & ((0x1FUL << (26U)))) >> (26UL)) << (((0x00000100UL) | (14UL)) & (((0x1FUL << (0U)))))) | (((Rank1_Channel & ((0x1FUL << (26U)))) >> (26UL)) << (((0x00000000UL) | ( 8UL)) & (((0x1FUL << (0U)))))) | SequencerNbRanks))))
# 4532 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
             ;
}
# 4642 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_SetChannelSamplingTime(ADC_TypeDef *ADCx, uint32_t Channel, uint32_t SamplingTime)
{




  register volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->SMPR1)) + ((((Channel & ((0x00000000UL) | (0x02000000UL))) >> (25UL))) << 2UL))));

  (((*preg)) = ((((((*preg))) & (~((0x7UL << (0U)) << ((Channel & (0x01F00000UL)) >> (20UL))))) | (SamplingTime << ((Channel & (0x01F00000UL)) >> (20UL))))))

                                                                                                               ;
}
# 4738 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetChannelSamplingTime(ADC_TypeDef *ADCx, uint32_t Channel)
{
  register const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->SMPR1)) + ((((Channel & ((0x00000000UL) | (0x02000000UL))) >> (25UL))) << 2UL))));

  return (uint32_t)(((*preg) & ((0x7UL << (0U)) << ((Channel & (0x01F00000UL)) >> (20UL))))

                    >> ((Channel & (0x01F00000UL)) >> (20UL))
                   );
}
# 4796 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_SetChannelSingleDiff(ADC_TypeDef *ADCx, uint32_t Channel, uint32_t SingleDiff)
{



  (((ADCx->DIFSEL)) = ((((((ADCx->DIFSEL))) & (~(Channel & (((0x7FFFFUL << (0U))))))) | ((Channel & (((0x7FFFFUL << (0U))))) & ((0x7FFFFUL << (0U)) >> (SingleDiff & ((0x10UL << (0U)) | (0x08UL << (0U)))))))))

                                                                                                                               ;
}
# 4846 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetChannelSingleDiff(ADC_TypeDef *ADCx, uint32_t Channel)
{
  return (uint32_t)(((ADCx->DIFSEL) & ((Channel & (((0x7FFFFUL << (0U))))))));
}
# 5003 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_SetAnalogWDMonitChannels(ADC_TypeDef *ADCx, uint32_t AWDy, uint32_t AWDChannelGroup)
{




  register volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->CFGR)) + ((((AWDy & ((0x00000000UL) | (0x00100000UL) | (0x00200000UL))) >> (20UL)) + ((AWDy & ((0x00001UL << (0U)))) * (0x00000024UL))) << 2UL))))
                                                                                                                                  ;

  (((*preg)) = ((((((*preg))) & (~((AWDy & (((0x1FUL << (26U)) | (0x1UL << (24U)) | (0x1UL << (23U)) | (0x1UL << (22U))) | ((0x7FFFFUL << (0U)))))))) | (AWDChannelGroup & AWDy))))

                                    ;
}
# 5139 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetAnalogWDMonitChannels(ADC_TypeDef *ADCx, uint32_t AWDy)
{
  register const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->CFGR)) + ((((AWDy & ((0x00000000UL) | (0x00100000UL) | (0x00200000UL))) >> (20UL)) + ((AWDy & ((0x00001UL << (0U)))) * (0x00000024UL))) << 2UL))))
                                                                                                                                        ;

  register uint32_t AnalogWDMonitChannels = (((*preg) & (AWDy)) & AWDy & (((0x1FUL << (26U)) | (0x1UL << (24U)) | (0x1UL << (23U)) | (0x1UL << (22U))) | ((0x7FFFFUL << (0U)))));





  if (AnalogWDMonitChannels != 0UL)
  {
    if (AWDy == (((0x1FUL << (26U)) | (0x1UL << (24U)) | (0x1UL << (23U)) | (0x1UL << (22U))) | (0x00000000UL)))
    {
      if ((AnalogWDMonitChannels & (0x1UL << (22U))) == 0UL)
      {

        AnalogWDMonitChannels = ((AnalogWDMonitChannels
                                  | (((0x7FFFFUL << (0U))))
                                 )
                                 & (~((0x1FUL << (26U))))
                                );
      }
      else
      {

        AnalogWDMonitChannels = (AnalogWDMonitChannels
                                 | ((0x00001UL << (0U)) << (AnalogWDMonitChannels >> (26U)))
                                );
      }
    }
    else
    {
      if ((AnalogWDMonitChannels & ((0x7FFFFUL << (0U)))) == ((0x7FFFFUL << (0U))))
      {

        AnalogWDMonitChannels = (((0x7FFFFUL << (0U)))
                                 | (((0x1UL << (24U)) | (0x1UL << (23U))))
                                );
      }
      else
      {


        AnalogWDMonitChannels = (AnalogWDMonitChannels
                                 | ((0x1UL << (24U)) | (0x1UL << (23U)) | (0x1UL << (22U)))
                                 | (((((AnalogWDMonitChannels) & ((0x7FFFFUL << (0U)))) == 0UL) ? ( ((AnalogWDMonitChannels) & ((0x1FUL << (26U)))) >> (26UL) ) : ( (uint32_t)(__CLZ(__RBIT((AnalogWDMonitChannels)))) ) ) << (26U))
                                );
      }
    }
  }

  return AnalogWDMonitChannels;
}
# 5247 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_ConfigAnalogWDThresholds(ADC_TypeDef *ADCx, uint32_t AWDy, uint32_t AWDThresholdHighValue,
                                                     uint32_t AWDThresholdLowValue)
{





  register volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->TR1)) + ((((AWDy & (((0x00000000UL)) | ((0x00100000UL)) | ((0x00200000UL)))) >> ((20UL)))) << 2UL))));

  (((*preg)) = ((((((*preg))) & (~((0xFFFUL << (16U)) | (0xFFFUL << (0U))))) | ((AWDThresholdHighValue << (16UL)) | AWDThresholdLowValue))))

                                                                                         ;
}
# 5316 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_SetAnalogWDThresholds(ADC_TypeDef *ADCx, uint32_t AWDy, uint32_t AWDThresholdsHighLow,
                                                  uint32_t AWDThresholdValue)
{





  register volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->TR1)) + ((((AWDy & (((0x00000000UL)) | ((0x00100000UL)) | ((0x00200000UL)))) >> ((20UL)))) << 2UL))));

  (((*preg)) = ((((((*preg))) & (~(AWDThresholdsHighLow))) | (AWDThresholdValue << ((AWDThresholdsHighLow & (0x00010000UL)) >> ((16UL) - 4UL))))))

                                                                                                                      ;
}
# 5359 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetAnalogWDThresholds(ADC_TypeDef *ADCx, uint32_t AWDy, uint32_t AWDThresholdsHighLow)
{
  register const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->TR1)) + ((((AWDy & (((0x00000000UL)) | ((0x00100000UL)) | ((0x00200000UL)))) >> ((20UL)))) << 2UL))));

  return (uint32_t)(((*preg) & ((AWDThresholdsHighLow | (0xFFFUL << (0U)))))

                    >> (((AWDThresholdsHighLow & (0x00010000UL)) >> ((16UL) - 4UL)) & ~(AWDThresholdsHighLow & (0xFFFUL << (0U))))
                   );
}
# 5402 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_SetOverSamplingScope(ADC_TypeDef *ADCx, uint32_t OvsScope)
{
  (((ADCx->CFGR2)) = ((((((ADCx->CFGR2))) & (~((0x1UL << (0U)) | (0x1UL << (1U)) | (0x1UL << (10U))))) | (OvsScope))));
}
# 5427 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetOverSamplingScope(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR2) & ((0x1UL << (0U)) | (0x1UL << (1U)) | (0x1UL << (10U)))));
}
# 5454 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_SetOverSamplingDiscont(ADC_TypeDef *ADCx, uint32_t OverSamplingDiscont)
{
  (((ADCx->CFGR2)) = ((((((ADCx->CFGR2))) & (~((0x1UL << (9U))))) | (OverSamplingDiscont))));
}
# 5473 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetOverSamplingDiscont(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR2) & ((0x1UL << (9U)))));
}
# 5512 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_ConfigOverSamplingRatioShift(ADC_TypeDef *ADCx, uint32_t Ratio, uint32_t Shift)
{
  (((ADCx->CFGR2)) = ((((((ADCx->CFGR2))) & (~(((0xFUL << (5U)) | (0x7UL << (2U)))))) | ((Shift | Ratio)))));
}
# 5532 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetOverSamplingRatio(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR2) & ((0x7UL << (2U)))));
}
# 5553 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetOverSamplingShift(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR2) & ((0xFUL << (5U)))));
}
# 5796 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_REG_SetTrigSource(ADC_TypeDef *ADCx, uint32_t TriggerSource)
{
  LL_ADC_REG_SetTriggerSource(ADCx, TriggerSource);
}
static inline void LL_ADC_INJ_SetTrigSource(ADC_TypeDef *ADCx, uint32_t TriggerSource)
{
  LL_ADC_INJ_SetTriggerSource(ADCx, TriggerSource);
}
# 5826 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_EnableDeepPowerDown(ADC_TypeDef *ADCx)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~(((0x1UL << (31U)) | (0x1UL << (5U)) | (0x1UL << (4U)) | (0x1UL << (3U)) | (0x1UL << (2U)) | (0x1UL << (1U)) | (0x1UL << (0U)))))) | ((0x1UL << (29U))))))

                            ;
}
# 5849 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_DisableDeepPowerDown(ADC_TypeDef *ADCx)
{



  ((ADCx->CR) &= ~(((0x1UL << (29U)) | ((0x1UL << (31U)) | (0x1UL << (5U)) | (0x1UL << (4U)) | (0x1UL << (3U)) | (0x1UL << (2U)) | (0x1UL << (1U)) | (0x1UL << (0U))))));
}







static inline uint32_t LL_ADC_IsDeepPowerDownEnabled(ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (29U)))) == ((0x1UL << (29U)))) ? 1UL : 0UL);
}
# 5882 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_EnableInternalRegulator(ADC_TypeDef *ADCx)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~(((0x1UL << (31U)) | (0x1UL << (5U)) | (0x1UL << (4U)) | (0x1UL << (3U)) | (0x1UL << (2U)) | (0x1UL << (1U)) | (0x1UL << (0U)))))) | ((0x1UL << (28U))))))

                             ;
}
# 5901 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_DisableInternalRegulator(ADC_TypeDef *ADCx)
{
  ((ADCx->CR) &= ~(((0x1UL << (28U)) | ((0x1UL << (31U)) | (0x1UL << (5U)) | (0x1UL << (4U)) | (0x1UL << (3U)) | (0x1UL << (2U)) | (0x1UL << (1U)) | (0x1UL << (0U))))));
}







static inline uint32_t LL_ADC_IsInternalRegulatorEnabled(ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (28U)))) == ((0x1UL << (28U)))) ? 1UL : 0UL);
}
# 5933 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_Enable(ADC_TypeDef *ADCx)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~(((0x1UL << (31U)) | (0x1UL << (5U)) | (0x1UL << (4U)) | (0x1UL << (3U)) | (0x1UL << (2U)) | (0x1UL << (1U)) | (0x1UL << (0U)))))) | ((0x1UL << (0U))))))

                         ;
}
# 5953 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_Disable(ADC_TypeDef *ADCx)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~(((0x1UL << (31U)) | (0x1UL << (5U)) | (0x1UL << (4U)) | (0x1UL << (3U)) | (0x1UL << (2U)) | (0x1UL << (1U)) | (0x1UL << (0U)))))) | ((0x1UL << (1U))))))

                          ;
}
# 5972 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabled(ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (0U)))) == ((0x1UL << (0U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsDisableOngoing(ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (1U)))) == ((0x1UL << (1U)))) ? 1UL : 0UL);
}
# 6011 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_StartCalibration(ADC_TypeDef *ADCx, uint32_t SingleDiff)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~((0x1UL << (30U)) | ((0x1UL << (31U)) | (0x1UL << (5U)) | (0x1UL << (4U)) | (0x1UL << (3U)) | (0x1UL << (2U)) | (0x1UL << (1U)) | (0x1UL << (0U)))))) | ((0x1UL << (31U)) | (SingleDiff & ((0x1UL << (30U))))))))

                                                                           ;
}







static inline uint32_t LL_ADC_IsCalibrationOnGoing(ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (31U)))) == ((0x1UL << (31U)))) ? 1UL : 0UL);
}
# 6058 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_REG_StartConversion(ADC_TypeDef *ADCx)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~(((0x1UL << (31U)) | (0x1UL << (5U)) | (0x1UL << (4U)) | (0x1UL << (3U)) | (0x1UL << (2U)) | (0x1UL << (1U)) | (0x1UL << (0U)))))) | ((0x1UL << (2U))))))

                            ;
}
# 6078 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_REG_StopConversion(ADC_TypeDef *ADCx)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~(((0x1UL << (31U)) | (0x1UL << (5U)) | (0x1UL << (4U)) | (0x1UL << (3U)) | (0x1UL << (2U)) | (0x1UL << (1U)) | (0x1UL << (0U)))))) | ((0x1UL << (4U))))))

                          ;
}







static inline uint32_t LL_ADC_REG_IsConversionOngoing(ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (2U)))) == ((0x1UL << (2U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_REG_IsStopConversionOngoing(ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (4U)))) == ((0x1UL << (4U)))) ? 1UL : 0UL);
}
# 6119 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_ReadConversionData32(ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->DR) & ((0xFFFFUL << (0U)))));
}
# 6134 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint16_t LL_ADC_REG_ReadConversionData12(ADC_TypeDef *ADCx)
{
  return (uint16_t)(((ADCx->DR) & ((0xFFFFUL << (0U)))));
}
# 6149 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint16_t LL_ADC_REG_ReadConversionData10(ADC_TypeDef *ADCx)
{
  return (uint16_t)(((ADCx->DR) & ((0xFFFFUL << (0U)))));
}
# 6164 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint8_t LL_ADC_REG_ReadConversionData8(ADC_TypeDef *ADCx)
{
  return (uint8_t)(((ADCx->DR) & ((0xFFFFUL << (0U)))));
}
# 6179 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint8_t LL_ADC_REG_ReadConversionData6(ADC_TypeDef *ADCx)
{
  return (uint8_t)(((ADCx->DR) & ((0xFFFFUL << (0U)))));
}
# 6241 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_INJ_StartConversion(ADC_TypeDef *ADCx)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~(((0x1UL << (31U)) | (0x1UL << (5U)) | (0x1UL << (4U)) | (0x1UL << (3U)) | (0x1UL << (2U)) | (0x1UL << (1U)) | (0x1UL << (0U)))))) | ((0x1UL << (3U))))))

                             ;
}
# 6261 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_INJ_StopConversion(ADC_TypeDef *ADCx)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~(((0x1UL << (31U)) | (0x1UL << (5U)) | (0x1UL << (4U)) | (0x1UL << (3U)) | (0x1UL << (2U)) | (0x1UL << (1U)) | (0x1UL << (0U)))))) | ((0x1UL << (5U))))))

                           ;
}







static inline uint32_t LL_ADC_INJ_IsConversionOngoing(ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (3U)))) == ((0x1UL << (3U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_INJ_IsStopConversionOngoing(ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (5U)))) == ((0x1UL << (5U)))) ? 1UL : 0UL);
}
# 6310 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_ReadConversionData32(ADC_TypeDef *ADCx, uint32_t Rank)
{
  register const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->JDR1)) + ((((Rank & ((0x00000000UL) | (0x00000100UL) | (0x00000200UL) | (0x00000300UL))) >> (8UL))) << 2UL))));

  return (uint32_t)(((*preg) & ((0xFFFFUL << (0U))))

                   );
}
# 6337 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint16_t LL_ADC_INJ_ReadConversionData12(ADC_TypeDef *ADCx, uint32_t Rank)
{
  register const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->JDR1)) + ((((Rank & ((0x00000000UL) | (0x00000100UL) | (0x00000200UL) | (0x00000300UL))) >> (8UL))) << 2UL))));

  return (uint16_t)(((*preg) & ((0xFFFFUL << (0U))))

                   );
}
# 6364 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint16_t LL_ADC_INJ_ReadConversionData10(ADC_TypeDef *ADCx, uint32_t Rank)
{
  register const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->JDR1)) + ((((Rank & ((0x00000000UL) | (0x00000100UL) | (0x00000200UL) | (0x00000300UL))) >> (8UL))) << 2UL))));

  return (uint16_t)(((*preg) & ((0xFFFFUL << (0U))))

                   );
}
# 6391 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint8_t LL_ADC_INJ_ReadConversionData8(ADC_TypeDef *ADCx, uint32_t Rank)
{
  register const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->JDR1)) + ((((Rank & ((0x00000000UL) | (0x00000100UL) | (0x00000200UL) | (0x00000300UL))) >> (8UL))) << 2UL))));

  return (uint8_t)(((*preg) & ((0xFFFFUL << (0U))))

                  );
}
# 6418 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint8_t LL_ADC_INJ_ReadConversionData6(ADC_TypeDef *ADCx, uint32_t Rank)
{
  register const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->JDR1)) + ((((Rank & ((0x00000000UL) | (0x00000100UL) | (0x00000200UL) | (0x00000300UL))) >> (8UL))) << 2UL))));

  return (uint8_t)(((*preg) & ((0xFFFFUL << (0U))))

                  );
}
# 6444 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_ADRDY(ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (0U)))) == ((0x1UL << (0U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_EOC(ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (2U)))) == ((0x1UL << (2U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_EOS(ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (3U)))) == ((0x1UL << (3U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_OVR(ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (4U)))) == ((0x1UL << (4U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_EOSMP(ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (1U)))) == ((0x1UL << (1U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_JEOC(ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (5U)))) == ((0x1UL << (5U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_JEOS(ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (6U)))) == ((0x1UL << (6U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_JQOVF(ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (10U)))) == ((0x1UL << (10U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_AWD1(ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (7U)))) == ((0x1UL << (7U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_AWD2(ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (8U)))) == ((0x1UL << (8U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_AWD3(ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (9U)))) == ((0x1UL << (9U)))) ? 1UL : 0UL);
}
# 6568 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_ClearFlag_ADRDY(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (0U))));
}







static inline void LL_ADC_ClearFlag_EOC(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (2U))));
}







static inline void LL_ADC_ClearFlag_EOS(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (3U))));
}







static inline void LL_ADC_ClearFlag_OVR(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (4U))));
}







static inline void LL_ADC_ClearFlag_EOSMP(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (1U))));
}







static inline void LL_ADC_ClearFlag_JEOC(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (5U))));
}







static inline void LL_ADC_ClearFlag_JEOS(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (6U))));
}







static inline void LL_ADC_ClearFlag_JQOVF(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (10U))));
}







static inline void LL_ADC_ClearFlag_AWD1(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (7U))));
}







static inline void LL_ADC_ClearFlag_AWD2(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (8U))));
}







static inline void LL_ADC_ClearFlag_AWD3(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (9U))));
}
# 6963 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline void LL_ADC_EnableIT_ADRDY(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (0U))));
}







static inline void LL_ADC_EnableIT_EOC(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (2U))));
}







static inline void LL_ADC_EnableIT_EOS(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (3U))));
}







static inline void LL_ADC_EnableIT_OVR(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (4U))));
}







static inline void LL_ADC_EnableIT_EOSMP(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (1U))));
}







static inline void LL_ADC_EnableIT_JEOC(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (5U))));
}







static inline void LL_ADC_EnableIT_JEOS(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (6U))));
}







static inline void LL_ADC_EnableIT_JQOVF(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (10U))));
}







static inline void LL_ADC_EnableIT_AWD1(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (7U))));
}







static inline void LL_ADC_EnableIT_AWD2(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (8U))));
}







static inline void LL_ADC_EnableIT_AWD3(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (9U))));
}







static inline void LL_ADC_DisableIT_ADRDY(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (0U))));
}







static inline void LL_ADC_DisableIT_EOC(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (2U))));
}







static inline void LL_ADC_DisableIT_EOS(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (3U))));
}







static inline void LL_ADC_DisableIT_OVR(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (4U))));
}







static inline void LL_ADC_DisableIT_EOSMP(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (1U))));
}







static inline void LL_ADC_DisableIT_JEOC(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (5U))));
}







static inline void LL_ADC_DisableIT_JEOS(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (6U))));
}







static inline void LL_ADC_DisableIT_JQOVF(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (10U))));
}







static inline void LL_ADC_DisableIT_AWD1(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (7U))));
}







static inline void LL_ADC_DisableIT_AWD2(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (8U))));
}







static inline void LL_ADC_DisableIT_AWD3(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (9U))));
}
# 7206 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_ADRDY(ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (0U)))) == ((0x1UL << (0U)))) ? 1UL : 0UL);
}
# 7218 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_EOC(ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (2U)))) == ((0x1UL << (2U)))) ? 1UL : 0UL);
}
# 7230 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_EOS(ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (3U)))) == ((0x1UL << (3U)))) ? 1UL : 0UL);
}
# 7242 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_OVR(ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (4U)))) == ((0x1UL << (4U)))) ? 1UL : 0UL);
}
# 7254 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_EOSMP(ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (1U)))) == ((0x1UL << (1U)))) ? 1UL : 0UL);
}
# 7266 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_JEOC(ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (5U)))) == ((0x1UL << (5U)))) ? 1UL : 0UL);
}
# 7278 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_JEOS(ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (6U)))) == ((0x1UL << (6U)))) ? 1UL : 0UL);
}
# 7290 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_JQOVF(ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (10U)))) == ((0x1UL << (10U)))) ? 1UL : 0UL);
}
# 7302 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_AWD1(ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (7U)))) == ((0x1UL << (7U)))) ? 1UL : 0UL);
}
# 7314 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_AWD2(ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (8U)))) == ((0x1UL << (8U)))) ? 1UL : 0UL);
}
# 7326 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_AWD3(ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (9U)))) == ((0x1UL << (9U)))) ? 1UL : 0UL);
}
# 33 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h" 2
# 50 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
typedef struct
{
  uint32_t Ratio;


  uint32_t RightBitShift;


  uint32_t TriggeredMode;


  uint32_t OversamplingStopReset;







} ADC_OversamplingTypeDef;
# 87 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
typedef struct
{
  uint32_t ClockPrescaler;
# 100 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
  uint32_t Resolution;


  uint32_t DataAlign;



  uint32_t ScanConvMode;







  uint32_t EOCSelection;


  FunctionalState LowPowerAutoWait;
# 130 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
  FunctionalState ContinuousConvMode;



  uint32_t NbrOfConversion;





  FunctionalState DiscontinuousConvMode;





  uint32_t NbrOfDiscConversion;



  uint32_t ExternalTrigConv;




  uint32_t ExternalTrigConvEdge;



  FunctionalState DMAContinuousRequests;




  uint32_t Overrun;
# 175 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
  FunctionalState OversamplingMode;



  ADC_OversamplingTypeDef Oversampling;



  uint32_t DFSDMConfig;




} ADC_InitTypeDef;
# 201 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
typedef struct
{
  uint32_t Channel;



  uint32_t Rank;




  uint32_t SamplingTime;
# 223 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
  uint32_t SingleDiff;
# 235 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
  uint32_t OffsetNumber;



  uint32_t Offset;






} ADC_ChannelConfTypeDef;







typedef struct
{
  uint32_t WatchdogNumber;




  uint32_t WatchdogMode;




  uint32_t Channel;




  FunctionalState ITMode;


  uint32_t HighThreshold;
# 284 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
  uint32_t LowThreshold;
# 293 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
} ADC_AnalogWDGConfTypeDef;





typedef struct
{
  uint32_t ContextQueue;



  uint32_t ChannelCount;
} ADC_InjectionConfigTypeDef;
# 362 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
typedef struct

{
  ADC_TypeDef *Instance;
  ADC_InitTypeDef Init;
  DMA_HandleTypeDef *DMA_Handle;
  HAL_LockTypeDef Lock;
  volatile uint32_t State;
  volatile uint32_t ErrorCode;
  ADC_InjectionConfigTypeDef InjectionConfig ;
# 385 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
} ADC_HandleTypeDef;
# 1710 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc_ex.h" 1
# 47 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc_ex.h"
typedef struct
{
  uint32_t Ratio;


  uint32_t RightBitShift;

} ADC_InjOversamplingTypeDef;
# 72 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc_ex.h"
typedef struct
{
  uint32_t InjectedChannel;



  uint32_t InjectedRank;




  uint32_t InjectedSamplingTime;
# 94 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc_ex.h"
  uint32_t InjectedSingleDiff;
# 106 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc_ex.h"
  uint32_t InjectedOffsetNumber;



  uint32_t InjectedOffset;






  uint32_t InjectedNbrOfConversion;





  FunctionalState InjectedDiscontinuousConvMode;
# 133 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc_ex.h"
  FunctionalState AutoInjectedConv;
# 142 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc_ex.h"
  FunctionalState QueueInjectedContext;
# 153 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc_ex.h"
  uint32_t ExternalTrigInjecConv;





  uint32_t ExternalTrigInjecConvEdge;





  FunctionalState InjecOversamplingMode;



  ADC_InjOversamplingTypeDef InjecOversampling;


} ADC_InjectionConfTypeDef;
# 1146 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc_ex.h"
HAL_StatusTypeDef HAL_ADCEx_Calibration_Start(ADC_HandleTypeDef *hadc, uint32_t SingleDiff);
uint32_t HAL_ADCEx_Calibration_GetValue(ADC_HandleTypeDef *hadc, uint32_t SingleDiff);
HAL_StatusTypeDef HAL_ADCEx_Calibration_SetValue(ADC_HandleTypeDef *hadc, uint32_t SingleDiff,
                                                       uint32_t CalibrationFactor);


HAL_StatusTypeDef HAL_ADCEx_InjectedStart(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADCEx_InjectedStop(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADCEx_InjectedPollForConversion(ADC_HandleTypeDef *hadc, uint32_t Timeout);


HAL_StatusTypeDef HAL_ADCEx_InjectedStart_IT(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADCEx_InjectedStop_IT(ADC_HandleTypeDef *hadc);
# 1168 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc_ex.h"
uint32_t HAL_ADCEx_InjectedGetValue(ADC_HandleTypeDef *hadc, uint32_t InjectedRank);


void HAL_ADCEx_InjectedConvCpltCallback(ADC_HandleTypeDef *hadc);
void HAL_ADCEx_InjectedQueueOverflowCallback(ADC_HandleTypeDef *hadc);
void HAL_ADCEx_LevelOutOfWindow2Callback(ADC_HandleTypeDef *hadc);
void HAL_ADCEx_LevelOutOfWindow3Callback(ADC_HandleTypeDef *hadc);
void HAL_ADCEx_EndOfSamplingCallback(ADC_HandleTypeDef *hadc);


HAL_StatusTypeDef HAL_ADCEx_RegularStop(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADCEx_RegularStop_IT(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADCEx_RegularStop_DMA(ADC_HandleTypeDef *hadc);
# 1193 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc_ex.h"
HAL_StatusTypeDef HAL_ADCEx_InjectedConfigChannel(ADC_HandleTypeDef *hadc,ADC_InjectionConfTypeDef* sConfigInjected);



HAL_StatusTypeDef HAL_ADCEx_EnableInjectedQueue(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADCEx_DisableInjectedQueue(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADCEx_DisableVoltageRegulator(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADCEx_EnterADCDeepPowerDownMode(ADC_HandleTypeDef *hadc);
# 1711 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h" 2
# 1722 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
HAL_StatusTypeDef HAL_ADC_Init(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADC_DeInit(ADC_HandleTypeDef *hadc);
void HAL_ADC_MspInit(ADC_HandleTypeDef *hadc);
void HAL_ADC_MspDeInit(ADC_HandleTypeDef *hadc);
# 1744 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
HAL_StatusTypeDef HAL_ADC_Start(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADC_Stop(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADC_PollForConversion(ADC_HandleTypeDef *hadc, uint32_t Timeout);
HAL_StatusTypeDef HAL_ADC_PollForEvent(ADC_HandleTypeDef *hadc, uint32_t EventType, uint32_t Timeout);


HAL_StatusTypeDef HAL_ADC_Start_IT(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADC_Stop_IT(ADC_HandleTypeDef *hadc);


HAL_StatusTypeDef HAL_ADC_Start_DMA(ADC_HandleTypeDef *hadc, uint32_t *pData, uint32_t Length);
HAL_StatusTypeDef HAL_ADC_Stop_DMA(ADC_HandleTypeDef *hadc);


uint32_t HAL_ADC_GetValue(ADC_HandleTypeDef *hadc);


void HAL_ADC_IRQHandler(ADC_HandleTypeDef *hadc);
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef *hadc);
void HAL_ADC_ConvHalfCpltCallback(ADC_HandleTypeDef *hadc);
void HAL_ADC_LevelOutOfWindowCallback(ADC_HandleTypeDef *hadc);
void HAL_ADC_ErrorCallback(ADC_HandleTypeDef *hadc);
# 1775 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
HAL_StatusTypeDef HAL_ADC_ConfigChannel(ADC_HandleTypeDef *hadc, ADC_ChannelConfTypeDef *sConfig);
HAL_StatusTypeDef HAL_ADC_AnalogWDGConfig(ADC_HandleTypeDef *hadc, ADC_AnalogWDGConfTypeDef *AnalogWDGConfig);
# 1786 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
uint32_t HAL_ADC_GetState(ADC_HandleTypeDef *hadc);
uint32_t HAL_ADC_GetError(ADC_HandleTypeDef *hadc);
# 1801 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_adc.h"
HAL_StatusTypeDef ADC_ConversionStop(ADC_HandleTypeDef *hadc, uint32_t ConversionGroup);
HAL_StatusTypeDef ADC_Enable(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef ADC_Disable(ADC_HandleTypeDef *hadc);
void ADC_DMAConvCplt(DMA_HandleTypeDef *hdma);
void ADC_DMAHalfConvCplt(DMA_HandleTypeDef *hdma);
void ADC_DMAError(DMA_HandleTypeDef *hdma);
# 32 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_can.h" 1
# 47 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_can.h"
typedef enum
{
  HAL_CAN_STATE_RESET = 0x00U,
  HAL_CAN_STATE_READY = 0x01U,
  HAL_CAN_STATE_LISTENING = 0x02U,
  HAL_CAN_STATE_SLEEP_PENDING = 0x03U,
  HAL_CAN_STATE_SLEEP_ACTIVE = 0x04U,
  HAL_CAN_STATE_ERROR = 0x05U

} HAL_CAN_StateTypeDef;




typedef struct
{
  uint32_t Prescaler;


  uint32_t Mode;


  uint32_t SyncJumpWidth;



  uint32_t TimeSeg1;


  uint32_t TimeSeg2;


  FunctionalState TimeTriggeredMode;


  FunctionalState AutoBusOff;


  FunctionalState AutoWakeUp;


  FunctionalState AutoRetransmission;


  FunctionalState ReceiveFifoLocked;


  FunctionalState TransmitFifoPriority;


} CAN_InitTypeDef;




typedef struct
{
  uint32_t FilterIdHigh;



  uint32_t FilterIdLow;



  uint32_t FilterMaskIdHigh;




  uint32_t FilterMaskIdLow;




  uint32_t FilterFIFOAssignment;


  uint32_t FilterBank;





  uint32_t FilterMode;


  uint32_t FilterScale;


  uint32_t FilterActivation;


  uint32_t SlaveStartFilterBank;






} CAN_FilterTypeDef;




typedef struct
{
  uint32_t StdId;


  uint32_t ExtId;


  uint32_t IDE;


  uint32_t RTR;


  uint32_t DLC;


  FunctionalState TransmitGlobalTime;





} CAN_TxHeaderTypeDef;




typedef struct
{
  uint32_t StdId;


  uint32_t ExtId;


  uint32_t IDE;


  uint32_t RTR;


  uint32_t DLC;


  uint32_t Timestamp;



  uint32_t FilterMatchIndex;


} CAN_RxHeaderTypeDef;




typedef struct __CAN_HandleTypeDef
{
  CAN_TypeDef *Instance;

  CAN_InitTypeDef Init;

  volatile HAL_CAN_StateTypeDef State;

  volatile uint32_t ErrorCode;
# 239 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_can.h"
} CAN_HandleTypeDef;
# 641 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_can.h"
HAL_StatusTypeDef HAL_CAN_Init(CAN_HandleTypeDef *hcan);
HAL_StatusTypeDef HAL_CAN_DeInit(CAN_HandleTypeDef *hcan);
void HAL_CAN_MspInit(CAN_HandleTypeDef *hcan);
void HAL_CAN_MspDeInit(CAN_HandleTypeDef *hcan);
# 662 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_can.h"
HAL_StatusTypeDef HAL_CAN_ConfigFilter(CAN_HandleTypeDef *hcan, CAN_FilterTypeDef *sFilterConfig);
# 674 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_can.h"
HAL_StatusTypeDef HAL_CAN_Start(CAN_HandleTypeDef *hcan);
HAL_StatusTypeDef HAL_CAN_Stop(CAN_HandleTypeDef *hcan);
HAL_StatusTypeDef HAL_CAN_RequestSleep(CAN_HandleTypeDef *hcan);
HAL_StatusTypeDef HAL_CAN_WakeUp(CAN_HandleTypeDef *hcan);
uint32_t HAL_CAN_IsSleepActive(CAN_HandleTypeDef *hcan);
HAL_StatusTypeDef HAL_CAN_AddTxMessage(CAN_HandleTypeDef *hcan, CAN_TxHeaderTypeDef *pHeader, uint8_t aData[], uint32_t *pTxMailbox);
HAL_StatusTypeDef HAL_CAN_AbortTxRequest(CAN_HandleTypeDef *hcan, uint32_t TxMailboxes);
uint32_t HAL_CAN_GetTxMailboxesFreeLevel(CAN_HandleTypeDef *hcan);
uint32_t HAL_CAN_IsTxMessagePending(CAN_HandleTypeDef *hcan, uint32_t TxMailboxes);
uint32_t HAL_CAN_GetTxTimestamp(CAN_HandleTypeDef *hcan, uint32_t TxMailbox);
HAL_StatusTypeDef HAL_CAN_GetRxMessage(CAN_HandleTypeDef *hcan, uint32_t RxFifo, CAN_RxHeaderTypeDef *pHeader, uint8_t aData[]);
uint32_t HAL_CAN_GetRxFifoFillLevel(CAN_HandleTypeDef *hcan, uint32_t RxFifo);
# 696 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_can.h"
HAL_StatusTypeDef HAL_CAN_ActivateNotification(CAN_HandleTypeDef *hcan, uint32_t ActiveITs);
HAL_StatusTypeDef HAL_CAN_DeactivateNotification(CAN_HandleTypeDef *hcan, uint32_t InactiveITs);
void HAL_CAN_IRQHandler(CAN_HandleTypeDef *hcan);
# 710 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_can.h"
void HAL_CAN_TxMailbox0CompleteCallback(CAN_HandleTypeDef *hcan);
void HAL_CAN_TxMailbox1CompleteCallback(CAN_HandleTypeDef *hcan);
void HAL_CAN_TxMailbox2CompleteCallback(CAN_HandleTypeDef *hcan);
void HAL_CAN_TxMailbox0AbortCallback(CAN_HandleTypeDef *hcan);
void HAL_CAN_TxMailbox1AbortCallback(CAN_HandleTypeDef *hcan);
void HAL_CAN_TxMailbox2AbortCallback(CAN_HandleTypeDef *hcan);
void HAL_CAN_RxFifo0MsgPendingCallback(CAN_HandleTypeDef *hcan);
void HAL_CAN_RxFifo0FullCallback(CAN_HandleTypeDef *hcan);
void HAL_CAN_RxFifo1MsgPendingCallback(CAN_HandleTypeDef *hcan);
void HAL_CAN_RxFifo1FullCallback(CAN_HandleTypeDef *hcan);
void HAL_CAN_SleepCallback(CAN_HandleTypeDef *hcan);
void HAL_CAN_WakeUpFromRxMsgCallback(CAN_HandleTypeDef *hcan);
void HAL_CAN_ErrorCallback(CAN_HandleTypeDef *hcan);
# 733 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_can.h"
HAL_CAN_StateTypeDef HAL_CAN_GetState(CAN_HandleTypeDef *hcan);
uint32_t HAL_CAN_GetError(CAN_HandleTypeDef *hcan);
HAL_StatusTypeDef HAL_CAN_ResetError(CAN_HandleTypeDef *hcan);
# 33 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_cortex.h" 1
# 48 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_cortex.h"
typedef struct
{
  uint8_t Enable;

  uint8_t Number;

  uint32_t BaseAddress;
  uint8_t Size;

  uint8_t SubRegionDisable;

  uint8_t TypeExtField;

  uint8_t AccessPermission;

  uint8_t DisableExec;

  uint8_t IsShareable;

  uint8_t IsCacheable;

  uint8_t IsBufferable;

}MPU_Region_InitTypeDef;
# 267 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_cortex.h"
void HAL_NVIC_SetPriorityGrouping(uint32_t PriorityGroup);
void HAL_NVIC_SetPriority(IRQn_Type IRQn, uint32_t PreemptPriority, uint32_t SubPriority);
void HAL_NVIC_EnableIRQ(IRQn_Type IRQn);
void HAL_NVIC_DisableIRQ(IRQn_Type IRQn);
void HAL_NVIC_SystemReset(void);
uint32_t HAL_SYSTICK_Config(uint32_t TicksNumb);
# 283 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_cortex.h"
uint32_t HAL_NVIC_GetPriorityGrouping(void);
void HAL_NVIC_GetPriority(IRQn_Type IRQn, uint32_t PriorityGroup, uint32_t* pPreemptPriority, uint32_t* pSubPriority);
uint32_t HAL_NVIC_GetPendingIRQ(IRQn_Type IRQn);
void HAL_NVIC_SetPendingIRQ(IRQn_Type IRQn);
void HAL_NVIC_ClearPendingIRQ(IRQn_Type IRQn);
uint32_t HAL_NVIC_GetActive(IRQn_Type IRQn);
void HAL_SYSTICK_CLKSourceConfig(uint32_t CLKSource);
void HAL_SYSTICK_IRQHandler(void);
void HAL_SYSTICK_Callback(void);


void HAL_MPU_Enable(uint32_t MPU_Control);
void HAL_MPU_Disable(void);
void HAL_MPU_ConfigRegion(MPU_Region_InitTypeDef *MPU_Init);
# 34 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_crc.h" 1
# 47 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_crc.h"
typedef enum
{
  HAL_CRC_STATE_RESET = 0x00U,
  HAL_CRC_STATE_READY = 0x01U,
  HAL_CRC_STATE_BUSY = 0x02U,
  HAL_CRC_STATE_TIMEOUT = 0x03U,
  HAL_CRC_STATE_ERROR = 0x04U
} HAL_CRC_StateTypeDef;




typedef struct
{
  uint8_t DefaultPolynomialUse;





  uint8_t DefaultInitValueUse;




  uint32_t GeneratingPolynomial;




  uint32_t CRCLength;






  uint32_t InitValue;


  uint32_t InputDataInversionMode;






  uint32_t OutputDataInversionMode;



} CRC_InitTypeDef;




typedef struct
{
  CRC_TypeDef *Instance;

  CRC_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  volatile HAL_CRC_StateTypeDef State;

  uint32_t InputDataFormat;







} CRC_HandleTypeDef;
# 288 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_crc.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_crc_ex.h" 1
# 127 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_crc_ex.h"
HAL_StatusTypeDef HAL_CRCEx_Polynomial_Set(CRC_HandleTypeDef *hcrc, uint32_t Pol, uint32_t PolyLength);
HAL_StatusTypeDef HAL_CRCEx_Input_Data_Reverse(CRC_HandleTypeDef *hcrc, uint32_t InputReverseMode);
HAL_StatusTypeDef HAL_CRCEx_Output_Data_Reverse(CRC_HandleTypeDef *hcrc, uint32_t OutputReverseMode);
# 289 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_crc.h" 2
# 299 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_crc.h"
HAL_StatusTypeDef HAL_CRC_Init(CRC_HandleTypeDef *hcrc);
HAL_StatusTypeDef HAL_CRC_DeInit(CRC_HandleTypeDef *hcrc);
void HAL_CRC_MspInit(CRC_HandleTypeDef *hcrc);
void HAL_CRC_MspDeInit(CRC_HandleTypeDef *hcrc);
# 311 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_crc.h"
uint32_t HAL_CRC_Accumulate(CRC_HandleTypeDef *hcrc, uint32_t pBuffer[], uint32_t BufferLength);
uint32_t HAL_CRC_Calculate(CRC_HandleTypeDef *hcrc, uint32_t pBuffer[], uint32_t BufferLength);
# 321 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_crc.h"
HAL_CRC_StateTypeDef HAL_CRC_GetState(CRC_HandleTypeDef *hcrc);
# 35 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dac.h" 1
# 50 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dac.h"
typedef enum
{
  HAL_DAC_STATE_RESET = 0x00U,
  HAL_DAC_STATE_READY = 0x01U,
  HAL_DAC_STATE_BUSY = 0x02U,
  HAL_DAC_STATE_TIMEOUT = 0x03U,
  HAL_DAC_STATE_ERROR = 0x04U

} HAL_DAC_StateTypeDef;







typedef struct

{
  DAC_TypeDef *Instance;

  volatile HAL_DAC_StateTypeDef State;

  HAL_LockTypeDef Lock;

  DMA_HandleTypeDef *DMA_Handle1;

  DMA_HandleTypeDef *DMA_Handle2;

  volatile uint32_t ErrorCode;
# 95 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dac.h"
} DAC_HandleTypeDef;




typedef struct
{
  uint32_t DAC_SampleTime ;



  uint32_t DAC_HoldTime ;



  uint32_t DAC_RefreshTime ;


} DAC_SampleAndHoldConfTypeDef;




typedef struct
{

  uint32_t DAC_HighFrequency;



  uint32_t DAC_SampleAndHold;


  uint32_t DAC_Trigger;


  uint32_t DAC_OutputBuffer;


  uint32_t DAC_ConnectOnChipPeripheral ;


  uint32_t DAC_UserTrimming;



  uint32_t DAC_TrimmingValue;



  DAC_SampleAndHoldConfTypeDef DAC_SampleAndHoldConfig;

} DAC_ChannelConfTypeDef;
# 504 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dac.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dac_ex.h" 1
# 204 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dac_ex.h"
HAL_StatusTypeDef HAL_DACEx_TriangleWaveGenerate(DAC_HandleTypeDef* hdac, uint32_t Channel, uint32_t Amplitude);
HAL_StatusTypeDef HAL_DACEx_NoiseWaveGenerate(DAC_HandleTypeDef* hdac, uint32_t Channel, uint32_t Amplitude);




HAL_StatusTypeDef HAL_DACEx_DualSetValue(DAC_HandleTypeDef* hdac, uint32_t Alignment, uint32_t Data1, uint32_t Data2);
uint32_t HAL_DACEx_DualGetValue(DAC_HandleTypeDef* hdac);






void HAL_DACEx_ConvCpltCallbackCh2(DAC_HandleTypeDef* hdac);
void HAL_DACEx_ConvHalfCpltCallbackCh2(DAC_HandleTypeDef* hdac);
void HAL_DACEx_ErrorCallbackCh2(DAC_HandleTypeDef* hdac);
void HAL_DACEx_DMAUnderrunCallbackCh2(DAC_HandleTypeDef* hdac);
# 236 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dac_ex.h"
HAL_StatusTypeDef HAL_DACEx_SelfCalibrate(DAC_HandleTypeDef *hdac, DAC_ChannelConfTypeDef *sConfig, uint32_t Channel);
HAL_StatusTypeDef HAL_DACEx_SetUserTrimming(DAC_HandleTypeDef *hdac, DAC_ChannelConfTypeDef *sConfig, uint32_t Channel, uint32_t NewTrimmingValue);
uint32_t HAL_DACEx_GetTrimOffset (DAC_HandleTypeDef *hdac, uint32_t Channel);
# 258 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dac_ex.h"
void DAC_DMAConvCpltCh2(DMA_HandleTypeDef *hdma);
void DAC_DMAErrorCh2(DMA_HandleTypeDef *hdma);
void DAC_DMAHalfConvCpltCh2(DMA_HandleTypeDef *hdma);
# 505 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dac.h" 2
# 516 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dac.h"
HAL_StatusTypeDef HAL_DAC_Init(DAC_HandleTypeDef *hdac);
HAL_StatusTypeDef HAL_DAC_DeInit(DAC_HandleTypeDef *hdac);
void HAL_DAC_MspInit(DAC_HandleTypeDef *hdac);
void HAL_DAC_MspDeInit(DAC_HandleTypeDef *hdac);
# 529 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dac.h"
HAL_StatusTypeDef HAL_DAC_Start(DAC_HandleTypeDef *hdac, uint32_t Channel);
HAL_StatusTypeDef HAL_DAC_Stop(DAC_HandleTypeDef *hdac, uint32_t Channel);
HAL_StatusTypeDef HAL_DAC_Start_DMA(DAC_HandleTypeDef *hdac, uint32_t Channel, uint32_t *pData, uint32_t Length,
                                    uint32_t Alignment);
HAL_StatusTypeDef HAL_DAC_Stop_DMA(DAC_HandleTypeDef *hdac, uint32_t Channel);

void HAL_DAC_IRQHandler(DAC_HandleTypeDef *hdac);

HAL_StatusTypeDef HAL_DAC_SetValue(DAC_HandleTypeDef *hdac, uint32_t Channel, uint32_t Alignment, uint32_t Data);

void HAL_DAC_ConvCpltCallbackCh1(DAC_HandleTypeDef *hdac);
void HAL_DAC_ConvHalfCpltCallbackCh1(DAC_HandleTypeDef *hdac);
void HAL_DAC_ErrorCallbackCh1(DAC_HandleTypeDef *hdac);
void HAL_DAC_DMAUnderrunCallbackCh1(DAC_HandleTypeDef *hdac);
# 559 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dac.h"
uint32_t HAL_DAC_GetValue(DAC_HandleTypeDef *hdac, uint32_t Channel);

HAL_StatusTypeDef HAL_DAC_ConfigChannel(DAC_HandleTypeDef *hdac, DAC_ChannelConfTypeDef *sConfig, uint32_t Channel);
# 570 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dac.h"
HAL_DAC_StateTypeDef HAL_DAC_GetState(DAC_HandleTypeDef *hdac);
uint32_t HAL_DAC_GetError(DAC_HandleTypeDef *hdac);
# 584 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dac.h"
void DAC_DMAConvCpltCh1(DMA_HandleTypeDef *hdma);
void DAC_DMAErrorCh1(DMA_HandleTypeDef *hdma);
void DAC_DMAHalfConvCpltCh1(DMA_HandleTypeDef *hdma);
# 36 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dcmi.h" 1
# 50 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dcmi.h"
typedef struct
{
  uint8_t FrameStartCode;
  uint8_t LineStartCode;
  uint8_t LineEndCode;
  uint8_t FrameEndCode;
}DCMI_CodesInitTypeDef;





typedef struct
{
  uint8_t FrameStartUnmask;
  uint8_t LineStartUnmask;
  uint8_t LineEndUnmask;
  uint8_t FrameEndUnmask;
}DCMI_SyncUnmaskTypeDef;





typedef struct
{
  uint32_t SynchroMode;


  uint32_t PCKPolarity;


  uint32_t VSPolarity;


  uint32_t HSPolarity;


  uint32_t CaptureRate;


  uint32_t ExtendedDataMode;


  DCMI_CodesInitTypeDef SynchroCode;

  uint32_t JPEGMode;


  uint32_t ByteSelectMode;


  uint32_t ByteSelectStart;


  uint32_t LineSelectMode;


  uint32_t LineSelectStart;

}DCMI_InitTypeDef;





typedef enum
{
  HAL_DCMI_STATE_RESET = 0x00U,
  HAL_DCMI_STATE_READY = 0x01U,
  HAL_DCMI_STATE_BUSY = 0x02U,
  HAL_DCMI_STATE_TIMEOUT = 0x03U,
  HAL_DCMI_STATE_ERROR = 0x04U,
  HAL_DCMI_STATE_SUSPENDED = 0x05U
}HAL_DCMI_StateTypeDef;





typedef struct __DCMI_HandleTypeDef
{
  DCMI_TypeDef *Instance;

  DCMI_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  volatile HAL_DCMI_StateTypeDef State;

  volatile uint32_t XferCount;

  volatile uint32_t XferSize;

  uint32_t pBuffPtr;

  DMA_HandleTypeDef *DMA_Handle;

  DMA_HandleTypeDef *DMAM2M_Handle;


  volatile uint32_t ErrorCode;

  uint32_t pCircularBuffer;


  uint32_t HalfCopyLength;
# 168 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dcmi.h"
}DCMI_HandleTypeDef;
# 514 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dcmi.h"
HAL_StatusTypeDef HAL_DCMI_Init(DCMI_HandleTypeDef *hdcmi);
HAL_StatusTypeDef HAL_DCMI_DeInit(DCMI_HandleTypeDef *hdcmi);
void HAL_DCMI_MspInit(DCMI_HandleTypeDef* hdcmi);
void HAL_DCMI_MspDeInit(DCMI_HandleTypeDef* hdcmi);
# 533 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dcmi.h"
HAL_StatusTypeDef HAL_DCMI_Start_DMA(DCMI_HandleTypeDef* hdcmi, uint32_t DCMI_Mode, uint32_t pData, uint32_t Length);
HAL_StatusTypeDef HAL_DCMI_Stop(DCMI_HandleTypeDef* hdcmi);
HAL_StatusTypeDef HAL_DCMI_Suspend(DCMI_HandleTypeDef* hdcmi);
HAL_StatusTypeDef HAL_DCMI_Resume(DCMI_HandleTypeDef* hdcmi);
void HAL_DCMI_ErrorCallback(DCMI_HandleTypeDef *hdcmi);
void HAL_DCMI_LineEventCallback(DCMI_HandleTypeDef *hdcmi);
void HAL_DCMI_FrameEventCallback(DCMI_HandleTypeDef *hdcmi);
void HAL_DCMI_VsyncEventCallback(DCMI_HandleTypeDef *hdcmi);
void HAL_DCMI_IRQHandler(DCMI_HandleTypeDef *hdcmi);
# 550 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dcmi.h"
HAL_StatusTypeDef HAL_DCMI_ConfigCrop(DCMI_HandleTypeDef *hdcmi, uint32_t X0, uint32_t Y0, uint32_t XSize, uint32_t YSize);
HAL_StatusTypeDef HAL_DCMI_EnableCrop(DCMI_HandleTypeDef *hdcmi);
HAL_StatusTypeDef HAL_DCMI_DisableCrop(DCMI_HandleTypeDef *hdcmi);
HAL_StatusTypeDef HAL_DCMI_ConfigSyncUnmask(DCMI_HandleTypeDef *hdcmi, DCMI_SyncUnmaskTypeDef *SyncUnmask);
# 562 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dcmi.h"
HAL_DCMI_StateTypeDef HAL_DCMI_GetState(DCMI_HandleTypeDef *hdcmi);
uint32_t HAL_DCMI_GetError(DCMI_HandleTypeDef *hdcmi);
# 37 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_flash.h" 1
# 47 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_flash.h"
typedef struct
{
  uint32_t TypeErase;

  uint32_t Banks;


  uint32_t Page;


  uint32_t NbPages;

} FLASH_EraseInitTypeDef;




typedef struct
{
  uint32_t OptionType;

  uint32_t WRPArea;


  uint32_t WRPStartOffset;


  uint32_t WRPEndOffset;

  uint32_t RDPLevel;

  uint32_t USERType;

  uint32_t USERConfig;







  uint32_t PCROPConfig;


  uint32_t PCROPStartAddr;


  uint32_t PCROPEndAddr;

} FLASH_OBProgramInitTypeDef;




typedef enum
{
  FLASH_PROC_NONE = 0,
  FLASH_PROC_PAGE_ERASE,
  FLASH_PROC_MASS_ERASE,
  FLASH_PROC_PROGRAM,
  FLASH_PROC_PROGRAM_LAST
} FLASH_ProcedureTypeDef;




typedef enum
{
  FLASH_CACHE_DISABLED = 0,
  FLASH_CACHE_ICACHE_ENABLED,
  FLASH_CACHE_DCACHE_ENABLED,
  FLASH_CACHE_ICACHE_DCACHE_ENABLED
} FLASH_CacheTypeDef;




typedef struct
{
  HAL_LockTypeDef Lock;
  volatile uint32_t ErrorCode;
  volatile FLASH_ProcedureTypeDef ProcedureOnGoing;
  volatile uint32_t Address;
  volatile uint32_t Bank;
  volatile uint32_t Page;
  volatile uint32_t NbPagesToErase;
  volatile FLASH_CacheTypeDef CacheToReactivate;
}FLASH_ProcessTypeDef;
# 764 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_flash.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_flash_ex.h" 1
# 71 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_flash_ex.h"
HAL_StatusTypeDef HAL_FLASHEx_Erase(FLASH_EraseInitTypeDef *pEraseInit, uint32_t *PageError);
HAL_StatusTypeDef HAL_FLASHEx_Erase_IT(FLASH_EraseInitTypeDef *pEraseInit);
HAL_StatusTypeDef HAL_FLASHEx_OBProgram(FLASH_OBProgramInitTypeDef *pOBInit);
void HAL_FLASHEx_OBGetConfig(FLASH_OBProgramInitTypeDef *pOBInit);
# 83 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_flash_ex.h"
HAL_StatusTypeDef HAL_FLASHEx_ConfigLVEPin(uint32_t ConfigLVE);
# 97 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_flash_ex.h"
void FLASH_PageErase(uint32_t Page, uint32_t Banks);
void FLASH_FlushCaches(void);
# 765 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_flash.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_flash_ramfunc.h" 1
# 50 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_flash_ramfunc.h"
HAL_StatusTypeDef __attribute__((section(".RamFunc"))) HAL_FLASHEx_EnableRunPowerDown(void);
HAL_StatusTypeDef __attribute__((section(".RamFunc"))) HAL_FLASHEx_DisableRunPowerDown(void);

HAL_StatusTypeDef __attribute__((section(".RamFunc"))) HAL_FLASHEx_OB_DBankConfig(uint32_t DBankConfig);
# 766 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_flash.h" 2
# 776 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_flash.h"
HAL_StatusTypeDef HAL_FLASH_Program(uint32_t TypeProgram, uint32_t Address, uint64_t Data);
HAL_StatusTypeDef HAL_FLASH_Program_IT(uint32_t TypeProgram, uint32_t Address, uint64_t Data);

void HAL_FLASH_IRQHandler(void);

void HAL_FLASH_EndOfOperationCallback(uint32_t ReturnValue);
void HAL_FLASH_OperationErrorCallback(uint32_t ReturnValue);
# 791 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_flash.h"
HAL_StatusTypeDef HAL_FLASH_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_Lock(void);

HAL_StatusTypeDef HAL_FLASH_OB_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Lock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Launch(void);
# 805 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_flash.h"
uint32_t HAL_FLASH_GetError(void);
# 818 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_flash.h"
extern FLASH_ProcessTypeDef pFlash;
# 827 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_flash.h"
HAL_StatusTypeDef FLASH_WaitForLastOperation(uint32_t Timeout);
# 38 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_gpio.h" 1
# 47 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_gpio.h"
typedef struct
{
  uint32_t Pin;


  uint32_t Mode;


  uint32_t Pull;


  uint32_t Speed;


  uint32_t Alternate;

}GPIO_InitTypeDef;




typedef enum
{
  GPIO_PIN_RESET = 0U,
  GPIO_PIN_SET
}GPIO_PinState;
# 246 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_gpio.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_gpio_ex.h" 1
# 247 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_gpio.h" 2
# 259 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_gpio.h"
void HAL_GPIO_Init(GPIO_TypeDef *GPIOx, GPIO_InitTypeDef *GPIO_Init);
void HAL_GPIO_DeInit(GPIO_TypeDef *GPIOx, uint32_t GPIO_Pin);
# 271 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_gpio.h"
GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void HAL_GPIO_WritePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState);
void HAL_GPIO_TogglePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
HAL_StatusTypeDef HAL_GPIO_LockPin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void HAL_GPIO_EXTI_IRQHandler(uint16_t GPIO_Pin);
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
# 39 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_hash.h" 1
# 40 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_hcd.h" 1
# 29 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_hcd.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_usb.h" 1
# 47 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_usb.h"
typedef enum
{
  USB_DEVICE_MODE = 0,
  USB_HOST_MODE = 1,
  USB_DRD_MODE = 2
} USB_ModeTypeDef;




typedef enum
{
  URB_IDLE = 0,
  URB_DONE,
  URB_NOTREADY,
  URB_NYET,
  URB_ERROR,
  URB_STALL
} USB_OTG_URBStateTypeDef;




typedef enum
{
  HC_IDLE = 0,
  HC_XFRC,
  HC_HALTED,
  HC_NAK,
  HC_NYET,
  HC_STALL,
  HC_XACTERR,
  HC_BBLERR,
  HC_DATATGLERR
} USB_OTG_HCStateTypeDef;




typedef struct
{
  uint32_t dev_endpoints;



  uint32_t Host_channels;



  uint32_t speed;


  uint32_t dma_enable;

  uint32_t ep0_mps;

  uint32_t phy_itface;


  uint32_t Sof_enable;

  uint32_t low_power_enable;

  uint32_t lpm_enable;

  uint32_t battery_charging_enable;

  uint32_t vbus_sensing_enable;

  uint32_t use_dedicated_ep1;

  uint32_t use_external_vbus;
} USB_OTG_CfgTypeDef;

typedef struct
{
  uint8_t num;


  uint8_t is_in;


  uint8_t is_stall;


  uint8_t type;


  uint8_t data_pid_start;


  uint8_t even_odd_frame;


  uint16_t tx_fifo_num;


  uint32_t maxpacket;


  uint8_t *xfer_buff;

  uint32_t dma_addr;

  uint32_t xfer_len;

  uint32_t xfer_count;
} USB_OTG_EPTypeDef;

typedef struct
{
  uint8_t dev_addr ;


  uint8_t ch_num;


  uint8_t ep_num;


  uint8_t ep_is_in;


  uint8_t speed;


  uint8_t do_ping;

  uint8_t process_ping;

  uint8_t ep_type;


  uint16_t max_packet;


  uint8_t data_pid;


  uint8_t *xfer_buff;

  uint32_t xfer_len;

  uint32_t xfer_count;

  uint8_t toggle_in;


  uint8_t toggle_out;


  uint32_t dma_addr;

  uint32_t ErrCnt;

  USB_OTG_URBStateTypeDef urb_state;


  USB_OTG_HCStateTypeDef state;

} USB_OTG_HCTypeDef;
# 539 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_usb.h"
HAL_StatusTypeDef USB_CoreInit(USB_OTG_GlobalTypeDef *USBx, USB_OTG_CfgTypeDef cfg);
HAL_StatusTypeDef USB_DevInit(USB_OTG_GlobalTypeDef *USBx, USB_OTG_CfgTypeDef cfg);
HAL_StatusTypeDef USB_EnableGlobalInt(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_DisableGlobalInt(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_SetTurnaroundTime(USB_OTG_GlobalTypeDef *USBx, uint32_t hclk, uint8_t speed);
HAL_StatusTypeDef USB_SetCurrentMode(USB_OTG_GlobalTypeDef *USBx, USB_ModeTypeDef mode);
HAL_StatusTypeDef USB_SetDevSpeed(USB_OTG_GlobalTypeDef *USBx, uint8_t speed);
HAL_StatusTypeDef USB_FlushRxFifo(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_FlushTxFifo(USB_OTG_GlobalTypeDef *USBx, uint32_t num);
HAL_StatusTypeDef USB_ActivateEndpoint(USB_OTG_GlobalTypeDef *USBx, USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_DeactivateEndpoint(USB_OTG_GlobalTypeDef *USBx, USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_ActivateDedicatedEndpoint(USB_OTG_GlobalTypeDef *USBx, USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_DeactivateDedicatedEndpoint(USB_OTG_GlobalTypeDef *USBx, USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_EPStartXfer(USB_OTG_GlobalTypeDef *USBx, USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_EP0StartXfer(USB_OTG_GlobalTypeDef *USBx, USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_WritePacket(USB_OTG_GlobalTypeDef *USBx, uint8_t *src, uint8_t ch_ep_num, uint16_t len);
void *USB_ReadPacket(USB_OTG_GlobalTypeDef *USBx, uint8_t *dest, uint16_t len);
HAL_StatusTypeDef USB_EPSetStall(USB_OTG_GlobalTypeDef *USBx, USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_EPClearStall(USB_OTG_GlobalTypeDef *USBx, USB_OTG_EPTypeDef *ep);
HAL_StatusTypeDef USB_SetDevAddress(USB_OTG_GlobalTypeDef *USBx, uint8_t address);
HAL_StatusTypeDef USB_DevConnect(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_DevDisconnect(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_StopDevice(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_ActivateSetup(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_EP0_OutStart(USB_OTG_GlobalTypeDef *USBx, uint8_t *psetup);
uint8_t USB_GetDevSpeed(USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_GetMode(USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_ReadInterrupts(USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_ReadDevAllOutEpInterrupt(USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_ReadDevOutEPInterrupt(USB_OTG_GlobalTypeDef *USBx, uint8_t epnum);
uint32_t USB_ReadDevAllInEpInterrupt(USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_ReadDevInEPInterrupt(USB_OTG_GlobalTypeDef *USBx, uint8_t epnum);
void USB_ClearInterrupts(USB_OTG_GlobalTypeDef *USBx, uint32_t interrupt);

HAL_StatusTypeDef USB_HostInit(USB_OTG_GlobalTypeDef *USBx, USB_OTG_CfgTypeDef cfg);
HAL_StatusTypeDef USB_InitFSLSPClkSel(USB_OTG_GlobalTypeDef *USBx, uint8_t freq);
HAL_StatusTypeDef USB_ResetPort(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_DriveVbus(USB_OTG_GlobalTypeDef *USBx, uint8_t state);
uint32_t USB_GetHostSpeed(USB_OTG_GlobalTypeDef *USBx);
uint32_t USB_GetCurrentFrame(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_HC_Init(USB_OTG_GlobalTypeDef *USBx,
                              uint8_t ch_num,
                              uint8_t epnum,
                              uint8_t dev_address,
                              uint8_t speed,
                              uint8_t ep_type,
                              uint16_t mps);
HAL_StatusTypeDef USB_HC_StartXfer(USB_OTG_GlobalTypeDef *USBx, USB_OTG_HCTypeDef *hc);
uint32_t USB_HC_ReadInterrupt(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_HC_Halt(USB_OTG_GlobalTypeDef *USBx, uint8_t hc_num);
HAL_StatusTypeDef USB_DoPing(USB_OTG_GlobalTypeDef *USBx, uint8_t ch_num);
HAL_StatusTypeDef USB_StopHost(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_ActivateRemoteWakeup(USB_OTG_GlobalTypeDef *USBx);
HAL_StatusTypeDef USB_DeActivateRemoteWakeup(USB_OTG_GlobalTypeDef *USBx);
# 30 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_hcd.h" 2
# 48 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_hcd.h"
typedef enum
{
  HAL_HCD_STATE_RESET = 0x00,
  HAL_HCD_STATE_READY = 0x01,
  HAL_HCD_STATE_ERROR = 0x02,
  HAL_HCD_STATE_BUSY = 0x03,
  HAL_HCD_STATE_TIMEOUT = 0x04
} HCD_StateTypeDef;

typedef USB_OTG_GlobalTypeDef HCD_TypeDef;
typedef USB_OTG_CfgTypeDef HCD_InitTypeDef;
typedef USB_OTG_HCTypeDef HCD_HCTypeDef;
typedef USB_OTG_URBStateTypeDef HCD_URBStateTypeDef;
typedef USB_OTG_HCStateTypeDef HCD_HCStateTypeDef;
# 72 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_hcd.h"
typedef struct

{
  HCD_TypeDef *Instance;
  HCD_InitTypeDef Init;
  HCD_HCTypeDef hc[16];
  HAL_LockTypeDef Lock;
  volatile HCD_StateTypeDef State;
  volatile uint32_t ErrorCode;
  void *pData;
# 94 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_hcd.h"
} HCD_HandleTypeDef;
# 172 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_hcd.h"
HAL_StatusTypeDef HAL_HCD_Init(HCD_HandleTypeDef *hhcd);
HAL_StatusTypeDef HAL_HCD_DeInit(HCD_HandleTypeDef *hhcd);
HAL_StatusTypeDef HAL_HCD_HC_Init(HCD_HandleTypeDef *hhcd,
                                       uint8_t ch_num,
                                       uint8_t epnum,
                                       uint8_t dev_address,
                                       uint8_t speed,
                                       uint8_t ep_type,
                                       uint16_t mps);

HAL_StatusTypeDef HAL_HCD_HC_Halt(HCD_HandleTypeDef *hhcd, uint8_t ch_num);
void HAL_HCD_MspInit(HCD_HandleTypeDef *hhcd);
void HAL_HCD_MspDeInit(HCD_HandleTypeDef *hhcd);
# 234 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_hcd.h"
HAL_StatusTypeDef HAL_HCD_HC_SubmitRequest(HCD_HandleTypeDef *hhcd,
                                                 uint8_t ch_num,
                                                 uint8_t direction,
                                                 uint8_t ep_type,
                                                 uint8_t token,
                                                 uint8_t *pbuff,
                                                 uint16_t length,
                                                 uint8_t do_ping);


void HAL_HCD_IRQHandler(HCD_HandleTypeDef *hhcd);
void HAL_HCD_SOF_Callback(HCD_HandleTypeDef *hhcd);
void HAL_HCD_Connect_Callback(HCD_HandleTypeDef *hhcd);
void HAL_HCD_Disconnect_Callback(HCD_HandleTypeDef *hhcd);
void HAL_HCD_PortEnabled_Callback(HCD_HandleTypeDef *hhcd);
void HAL_HCD_PortDisabled_Callback(HCD_HandleTypeDef *hhcd);
void HAL_HCD_HC_NotifyURBChange_Callback(HCD_HandleTypeDef *hhcd,
                                                     uint8_t chnum,
                                                     HCD_URBStateTypeDef urb_state);
# 261 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_hcd.h"
HAL_StatusTypeDef HAL_HCD_ResetPort(HCD_HandleTypeDef *hhcd);
HAL_StatusTypeDef HAL_HCD_Start(HCD_HandleTypeDef *hhcd);
HAL_StatusTypeDef HAL_HCD_Stop(HCD_HandleTypeDef *hhcd);
# 272 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_hcd.h"
HCD_StateTypeDef HAL_HCD_GetState(HCD_HandleTypeDef *hhcd);
HCD_URBStateTypeDef HAL_HCD_HC_GetURBState(HCD_HandleTypeDef *hhcd, uint8_t chnum);
uint32_t HAL_HCD_HC_GetXferCount(HCD_HandleTypeDef *hhcd, uint8_t chnum);
HCD_HCStateTypeDef HAL_HCD_HC_GetState(HCD_HandleTypeDef *hhcd, uint8_t chnum);
uint32_t HAL_HCD_GetCurrentFrame(HCD_HandleTypeDef *hhcd);
uint32_t HAL_HCD_GetCurrentSpeed(HCD_HandleTypeDef *hhcd);
# 41 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_i2c.h" 1
# 48 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_i2c.h"
typedef struct
{
  uint32_t Timing;



  uint32_t OwnAddress1;


  uint32_t AddressingMode;


  uint32_t DualAddressMode;


  uint32_t OwnAddress2;


  uint32_t OwnAddress2Masks;


  uint32_t GeneralCallMode;


  uint32_t NoStretchMode;


} I2C_InitTypeDef;
# 108 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_i2c.h"
typedef enum
{
  HAL_I2C_STATE_RESET = 0x00U,
  HAL_I2C_STATE_READY = 0x20U,
  HAL_I2C_STATE_BUSY = 0x24U,
  HAL_I2C_STATE_BUSY_TX = 0x21U,
  HAL_I2C_STATE_BUSY_RX = 0x22U,
  HAL_I2C_STATE_LISTEN = 0x28U,
  HAL_I2C_STATE_BUSY_TX_LISTEN = 0x29U,

  HAL_I2C_STATE_BUSY_RX_LISTEN = 0x2AU,

  HAL_I2C_STATE_ABORT = 0x60U,
  HAL_I2C_STATE_TIMEOUT = 0xA0U,
  HAL_I2C_STATE_ERROR = 0xE0U

} HAL_I2C_StateTypeDef;
# 148 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_i2c.h"
typedef enum
{
  HAL_I2C_MODE_NONE = 0x00U,
  HAL_I2C_MODE_MASTER = 0x10U,
  HAL_I2C_MODE_SLAVE = 0x20U,
  HAL_I2C_MODE_MEM = 0x40U

} HAL_I2C_ModeTypeDef;
# 186 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_i2c.h"
typedef struct __I2C_HandleTypeDef
{
  I2C_TypeDef *Instance;

  I2C_InitTypeDef Init;

  uint8_t *pBuffPtr;

  uint16_t XferSize;

  volatile uint16_t XferCount;

  volatile uint32_t XferOptions;


  volatile uint32_t PreviousState;

  HAL_StatusTypeDef(*XferISR)(struct __I2C_HandleTypeDef *hi2c, uint32_t ITFlags, uint32_t ITSources);

  DMA_HandleTypeDef *hdmatx;

  DMA_HandleTypeDef *hdmarx;

  HAL_LockTypeDef Lock;

  volatile HAL_I2C_StateTypeDef State;

  volatile HAL_I2C_ModeTypeDef Mode;

  volatile uint32_t ErrorCode;

  volatile uint32_t AddrEventCount;
# 236 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_i2c.h"
} I2C_HandleTypeDef;
# 568 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_i2c.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_i2c_ex.h" 1
# 101 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_i2c_ex.h"
HAL_StatusTypeDef HAL_I2CEx_ConfigAnalogFilter(I2C_HandleTypeDef *hi2c, uint32_t AnalogFilter);
HAL_StatusTypeDef HAL_I2CEx_ConfigDigitalFilter(I2C_HandleTypeDef *hi2c, uint32_t DigitalFilter);
HAL_StatusTypeDef HAL_I2CEx_EnableWakeUp(I2C_HandleTypeDef *hi2c);
HAL_StatusTypeDef HAL_I2CEx_DisableWakeUp(I2C_HandleTypeDef *hi2c);
void HAL_I2CEx_EnableFastModePlus(uint32_t ConfigFastModePlus);
void HAL_I2CEx_DisableFastModePlus(uint32_t ConfigFastModePlus);
# 569 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_i2c.h" 2
# 579 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_i2c.h"
HAL_StatusTypeDef HAL_I2C_Init(I2C_HandleTypeDef *hi2c);
HAL_StatusTypeDef HAL_I2C_DeInit(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MspInit(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MspDeInit(I2C_HandleTypeDef *hi2c);
# 601 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_i2c.h"
HAL_StatusTypeDef HAL_I2C_Master_Transmit(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Master_Receive(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Slave_Transmit(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Slave_Receive(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Mem_Write(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Mem_Read(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_IsDeviceReady(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint32_t Trials, uint32_t Timeout);


HAL_StatusTypeDef HAL_I2C_Master_Transmit_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Master_Receive_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Slave_Transmit_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Slave_Receive_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Mem_Write_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Mem_Read_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);

HAL_StatusTypeDef HAL_I2C_Master_Seq_Transmit_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_Master_Seq_Receive_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_Slave_Seq_Transmit_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_Slave_Seq_Receive_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_EnableListen_IT(I2C_HandleTypeDef *hi2c);
HAL_StatusTypeDef HAL_I2C_DisableListen_IT(I2C_HandleTypeDef *hi2c);
HAL_StatusTypeDef HAL_I2C_Master_Abort_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress);


HAL_StatusTypeDef HAL_I2C_Master_Transmit_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Master_Receive_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Slave_Transmit_DMA(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Slave_Receive_DMA(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Mem_Write_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Mem_Read_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);

HAL_StatusTypeDef HAL_I2C_Master_Seq_Transmit_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_Master_Seq_Receive_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_Slave_Seq_Transmit_DMA(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_Slave_Seq_Receive_DMA(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
# 645 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_i2c.h"
void HAL_I2C_EV_IRQHandler(I2C_HandleTypeDef *hi2c);
void HAL_I2C_ER_IRQHandler(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MasterTxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MasterRxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_SlaveTxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_SlaveRxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_AddrCallback(I2C_HandleTypeDef *hi2c, uint8_t TransferDirection, uint16_t AddrMatchCode);
void HAL_I2C_ListenCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MemTxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MemRxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_ErrorCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_AbortCpltCallback(I2C_HandleTypeDef *hi2c);
# 665 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_i2c.h"
HAL_I2C_StateTypeDef HAL_I2C_GetState(I2C_HandleTypeDef *hi2c);
HAL_I2C_ModeTypeDef HAL_I2C_GetMode(I2C_HandleTypeDef *hi2c);
uint32_t HAL_I2C_GetError(I2C_HandleTypeDef *hi2c);
# 42 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_iwdg.h" 1
# 47 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_iwdg.h"
typedef struct
{
  uint32_t Prescaler;


  uint32_t Reload;


  uint32_t Window;


} IWDG_InitTypeDef;




typedef struct
{
  IWDG_TypeDef *Instance;

  IWDG_InitTypeDef Init;
} IWDG_HandleTypeDef;
# 141 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_iwdg.h"
HAL_StatusTypeDef HAL_IWDG_Init(IWDG_HandleTypeDef *hiwdg);
# 150 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_iwdg.h"
HAL_StatusTypeDef HAL_IWDG_Refresh(IWDG_HandleTypeDef *hiwdg);
# 43 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pcd.h" 1
# 49 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pcd.h"
typedef enum
{
  HAL_PCD_STATE_RESET = 0x00,
  HAL_PCD_STATE_READY = 0x01,
  HAL_PCD_STATE_ERROR = 0x02,
  HAL_PCD_STATE_BUSY = 0x03,
  HAL_PCD_STATE_TIMEOUT = 0x04
} PCD_StateTypeDef;


typedef enum
{
  LPM_L0 = 0x00,
  LPM_L1 = 0x01,
  LPM_L2 = 0x02,
  LPM_L3 = 0x03,
} PCD_LPM_StateTypeDef;

typedef enum
{
  PCD_LPM_L0_ACTIVE = 0x00,
  PCD_LPM_L1_ACTIVE = 0x01,
} PCD_LPM_MsgTypeDef;

typedef enum
{
  PCD_BCD_ERROR = 0xFF,
  PCD_BCD_CONTACT_DETECTION = 0xFE,
  PCD_BCD_STD_DOWNSTREAM_PORT = 0xFD,
  PCD_BCD_CHARGING_DOWNSTREAM_PORT = 0xFC,
  PCD_BCD_DEDICATED_CHARGING_PORT = 0xFB,
  PCD_BCD_DISCOVERY_COMPLETED = 0x00,

} PCD_BCD_MsgTypeDef;





typedef USB_OTG_GlobalTypeDef PCD_TypeDef;
typedef USB_OTG_CfgTypeDef PCD_InitTypeDef;
typedef USB_OTG_EPTypeDef PCD_EPTypeDef;
# 104 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pcd.h"
typedef struct

{
  PCD_TypeDef *Instance;
  PCD_InitTypeDef Init;
  volatile uint8_t USB_Address;

  PCD_EPTypeDef IN_ep[16];
  PCD_EPTypeDef OUT_ep[16];





  HAL_LockTypeDef Lock;
  volatile PCD_StateTypeDef State;
  volatile uint32_t ErrorCode;
  uint32_t Setup[12];
  PCD_LPM_StateTypeDef LPM_State;
  uint32_t BESL;


  uint32_t lpm_active;


  uint32_t battery_charging_active;

  void *pData;
# 152 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pcd.h"
} PCD_HandleTypeDef;






# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pcd_ex.h" 1
# 51 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pcd_ex.h"
HAL_StatusTypeDef HAL_PCDEx_SetTxFiFo(PCD_HandleTypeDef *hpcd, uint8_t fifo, uint16_t size);
HAL_StatusTypeDef HAL_PCDEx_SetRxFiFo(PCD_HandleTypeDef *hpcd, uint16_t size);
# 62 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pcd_ex.h"
HAL_StatusTypeDef HAL_PCDEx_ActivateLPM(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCDEx_DeActivateLPM(PCD_HandleTypeDef *hpcd);


HAL_StatusTypeDef HAL_PCDEx_ActivateBCD(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCDEx_DeActivateBCD(PCD_HandleTypeDef *hpcd);
void HAL_PCDEx_BCD_VBUSDetect(PCD_HandleTypeDef *hpcd);

void HAL_PCDEx_LPM_Callback(PCD_HandleTypeDef *hpcd, PCD_LPM_MsgTypeDef msg);
void HAL_PCDEx_BCD_Callback(PCD_HandleTypeDef *hpcd, PCD_BCD_MsgTypeDef msg);
# 160 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pcd.h" 2
# 248 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pcd.h"
HAL_StatusTypeDef HAL_PCD_Init(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_DeInit(PCD_HandleTypeDef *hpcd);
void HAL_PCD_MspInit(PCD_HandleTypeDef *hpcd);
void HAL_PCD_MspDeInit(PCD_HandleTypeDef *hpcd);
# 323 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pcd.h"
HAL_StatusTypeDef HAL_PCD_Start(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_Stop(PCD_HandleTypeDef *hpcd);
void HAL_PCD_IRQHandler(PCD_HandleTypeDef *hpcd);

void HAL_PCD_SOFCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_SetupStageCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_ResetCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_SuspendCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_ResumeCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_ConnectCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_DisconnectCallback(PCD_HandleTypeDef *hpcd);

void HAL_PCD_DataOutStageCallback(PCD_HandleTypeDef *hpcd, uint8_t epnum);
void HAL_PCD_DataInStageCallback(PCD_HandleTypeDef *hpcd, uint8_t epnum);
void HAL_PCD_ISOOUTIncompleteCallback(PCD_HandleTypeDef *hpcd, uint8_t epnum);
void HAL_PCD_ISOINIncompleteCallback(PCD_HandleTypeDef *hpcd, uint8_t epnum);
# 347 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pcd.h"
HAL_StatusTypeDef HAL_PCD_DevConnect(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_DevDisconnect(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_SetAddress(PCD_HandleTypeDef *hpcd, uint8_t address);
HAL_StatusTypeDef HAL_PCD_EP_Open(PCD_HandleTypeDef *hpcd, uint8_t ep_addr, uint16_t ep_mps, uint8_t ep_type);
HAL_StatusTypeDef HAL_PCD_EP_Close(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_EP_Receive(PCD_HandleTypeDef *hpcd, uint8_t ep_addr, uint8_t *pBuf, uint32_t len);
HAL_StatusTypeDef HAL_PCD_EP_Transmit(PCD_HandleTypeDef *hpcd, uint8_t ep_addr, uint8_t *pBuf, uint32_t len);
uint32_t HAL_PCD_EP_GetRxCount(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_EP_SetStall(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_EP_ClrStall(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_EP_Flush(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_ActivateRemoteWakeup(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_DeActivateRemoteWakeup(PCD_HandleTypeDef *hpcd);
# 368 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pcd.h"
PCD_StateTypeDef HAL_PCD_GetState(PCD_HandleTypeDef *hpcd);
# 44 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pwr.h" 1
# 48 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pwr.h"
typedef struct
{
  uint32_t PVDLevel;


  uint32_t Mode;

}PWR_PVDTypeDef;
# 343 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pwr.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pwr_ex.h" 1
# 50 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pwr_ex.h"
typedef struct
{
  uint32_t PVMType;
# 61 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pwr_ex.h"
  uint32_t Mode;

}PWR_PVMTypeDef;
# 813 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pwr_ex.h"
uint32_t HAL_PWREx_GetVoltageRange(void);
HAL_StatusTypeDef HAL_PWREx_ControlVoltageScaling(uint32_t VoltageScaling);
void HAL_PWREx_EnableBatteryCharging(uint32_t ResistorSelection);
void HAL_PWREx_DisableBatteryCharging(void);

void HAL_PWREx_EnableVddUSB(void);
void HAL_PWREx_DisableVddUSB(void);


void HAL_PWREx_EnableVddIO2(void);
void HAL_PWREx_DisableVddIO2(void);

void HAL_PWREx_EnableInternalWakeUpLine(void);
void HAL_PWREx_DisableInternalWakeUpLine(void);
HAL_StatusTypeDef HAL_PWREx_EnableGPIOPullUp(uint32_t GPIO, uint32_t GPIONumber);
HAL_StatusTypeDef HAL_PWREx_DisableGPIOPullUp(uint32_t GPIO, uint32_t GPIONumber);
HAL_StatusTypeDef HAL_PWREx_EnableGPIOPullDown(uint32_t GPIO, uint32_t GPIONumber);
HAL_StatusTypeDef HAL_PWREx_DisableGPIOPullDown(uint32_t GPIO, uint32_t GPIONumber);
void HAL_PWREx_EnablePullUpPullDownConfig(void);
void HAL_PWREx_DisablePullUpPullDownConfig(void);
void HAL_PWREx_EnableSRAM2ContentRetention(void);
void HAL_PWREx_DisableSRAM2ContentRetention(void);

void HAL_PWREx_EnableSRAM3ContentRetention(void);
void HAL_PWREx_DisableSRAM3ContentRetention(void);


void HAL_PWREx_EnableDSIPinsPDActivation(void);
void HAL_PWREx_DisableDSIPinsPDActivation(void);


void HAL_PWREx_EnablePVM1(void);
void HAL_PWREx_DisablePVM1(void);


void HAL_PWREx_EnablePVM2(void);
void HAL_PWREx_DisablePVM2(void);

void HAL_PWREx_EnablePVM3(void);
void HAL_PWREx_DisablePVM3(void);
void HAL_PWREx_EnablePVM4(void);
void HAL_PWREx_DisablePVM4(void);
HAL_StatusTypeDef HAL_PWREx_ConfigPVM(PWR_PVMTypeDef *sConfigPVM);
# 867 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pwr_ex.h"
void HAL_PWREx_EnableLowPowerRunMode(void);
HAL_StatusTypeDef HAL_PWREx_DisableLowPowerRunMode(void);
void HAL_PWREx_EnterSTOP0Mode(uint8_t STOPEntry);
void HAL_PWREx_EnterSTOP1Mode(uint8_t STOPEntry);
void HAL_PWREx_EnterSTOP2Mode(uint8_t STOPEntry);
void HAL_PWREx_EnterSHUTDOWNMode(void);

void HAL_PWREx_PVD_PVM_IRQHandler(void);

void HAL_PWREx_PVM1Callback(void);


void HAL_PWREx_PVM2Callback(void);

void HAL_PWREx_PVM3Callback(void);
void HAL_PWREx_PVM4Callback(void);
# 344 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pwr.h" 2
# 356 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pwr.h"
void HAL_PWR_DeInit(void);
void HAL_PWR_EnableBkUpAccess(void);
void HAL_PWR_DisableBkUpAccess(void);
# 369 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_pwr.h"
HAL_StatusTypeDef HAL_PWR_ConfigPVD(PWR_PVDTypeDef *sConfigPVD);
void HAL_PWR_EnablePVD(void);
void HAL_PWR_DisablePVD(void);



void HAL_PWR_EnableWakeUpPin(uint32_t WakeUpPinPolarity);
void HAL_PWR_DisableWakeUpPin(uint32_t WakeUpPinx);


void HAL_PWR_EnterSLEEPMode(uint32_t Regulator, uint8_t SLEEPEntry);
void HAL_PWR_EnterSTOPMode(uint32_t Regulator, uint8_t STOPEntry);
void HAL_PWR_EnterSTANDBYMode(void);

void HAL_PWR_EnableSleepOnExit(void);
void HAL_PWR_DisableSleepOnExit(void);
void HAL_PWR_EnableSEVOnPend(void);
void HAL_PWR_DisableSEVOnPend(void);

void HAL_PWR_PVDCallback(void);
# 45 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rcc.h" 1
# 47 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rcc.h"
typedef struct
{
  uint32_t PLLState;


  uint32_t PLLSource;


  uint32_t PLLM;



  uint32_t PLLN;



  uint32_t PLLP;



  uint32_t PLLQ;


  uint32_t PLLR;




}RCC_PLLInitTypeDef;




typedef struct
{
  uint32_t OscillatorType;


  uint32_t HSEState;


  uint32_t LSEState;


  uint32_t HSIState;


  uint32_t HSICalibrationValue;



  uint32_t LSIState;







  uint32_t MSIState;


  uint32_t MSICalibrationValue;


  uint32_t MSIClockRange;


  uint32_t HSI48State;


  RCC_PLLInitTypeDef PLL;

}RCC_OscInitTypeDef;




typedef struct
{
  uint32_t ClockType;


  uint32_t SYSCLKSource;


  uint32_t AHBCLKDivider;


  uint32_t APB1CLKDivider;


  uint32_t APB2CLKDivider;


}RCC_ClkInitTypeDef;
# 4682 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rcc.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rcc_ex.h" 1
# 49 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rcc_ex.h"
typedef struct
{

  uint32_t PLLSAI1Source;



  uint32_t PLLSAI1M;






  uint32_t PLLSAI1N;


  uint32_t PLLSAI1P;


  uint32_t PLLSAI1Q;


  uint32_t PLLSAI1R;


  uint32_t PLLSAI1ClockOut;

}RCC_PLLSAI1InitTypeDef;






typedef struct
{

  uint32_t PLLSAI2Source;



  uint32_t PLLSAI2M;






  uint32_t PLLSAI2N;


  uint32_t PLLSAI2P;



  uint32_t PLLSAI2Q;



  uint32_t PLLSAI2R;


  uint32_t PLLSAI2ClockOut;

}RCC_PLLSAI2InitTypeDef;






typedef struct
{
  uint32_t PeriphClockSelection;



  RCC_PLLSAI1InitTypeDef PLLSAI1;




  RCC_PLLSAI2InitTypeDef PLLSAI2;




  uint32_t Usart1ClockSelection;


  uint32_t Usart2ClockSelection;




  uint32_t Usart3ClockSelection;






  uint32_t Uart4ClockSelection;






  uint32_t Uart5ClockSelection;




  uint32_t Lpuart1ClockSelection;


  uint32_t I2c1ClockSelection;




  uint32_t I2c2ClockSelection;




  uint32_t I2c3ClockSelection;




  uint32_t I2c4ClockSelection;




  uint32_t Lptim1ClockSelection;


  uint32_t Lptim2ClockSelection;



  uint32_t Sai1ClockSelection;





  uint32_t Sai2ClockSelection;






  uint32_t UsbClockSelection;






  uint32_t Sdmmc1ClockSelection;




  uint32_t RngClockSelection;



  uint32_t AdcClockSelection;
# 236 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rcc_ex.h"
  uint32_t Dfsdm1ClockSelection;



  uint32_t Dfsdm1AudioClockSelection;
# 249 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rcc_ex.h"
  uint32_t LtdcClockSelection;






  uint32_t DsiClockSelection;






  uint32_t OspiClockSelection;




  uint32_t RTCClockSelection;

}RCC_PeriphCLKInitTypeDef;






typedef struct
{
  uint32_t Prescaler;


  uint32_t Source;


  uint32_t Polarity;


  uint32_t ReloadValue;



  uint32_t ErrorLimitValue;


  uint32_t HSI48CalibrationValue;



}RCC_CRSInitTypeDef;




typedef struct
{
  uint32_t ReloadValue;


  uint32_t HSI48CalibrationValue;


  uint32_t FreqErrorCapture;



  uint32_t FreqErrorDirection;




}RCC_CRSSynchroInfoTypeDef;
# 2394 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rcc_ex.h"
HAL_StatusTypeDef HAL_RCCEx_PeriphCLKConfig(RCC_PeriphCLKInitTypeDef *PeriphClkInit);
void HAL_RCCEx_GetPeriphCLKConfig(RCC_PeriphCLKInitTypeDef *PeriphClkInit);
uint32_t HAL_RCCEx_GetPeriphCLKFreq(uint32_t PeriphClk);
# 2407 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rcc_ex.h"
HAL_StatusTypeDef HAL_RCCEx_EnablePLLSAI1(RCC_PLLSAI1InitTypeDef *PLLSAI1Init);
HAL_StatusTypeDef HAL_RCCEx_DisablePLLSAI1(void);





HAL_StatusTypeDef HAL_RCCEx_EnablePLLSAI2(RCC_PLLSAI2InitTypeDef *PLLSAI2Init);
HAL_StatusTypeDef HAL_RCCEx_DisablePLLSAI2(void);



void HAL_RCCEx_WakeUpStopCLKConfig(uint32_t WakeUpClk);
void HAL_RCCEx_StandbyMSIRangeConfig(uint32_t MSIRange);
void HAL_RCCEx_EnableLSECSS(void);
void HAL_RCCEx_DisableLSECSS(void);
void HAL_RCCEx_EnableLSECSS_IT(void);
void HAL_RCCEx_LSECSS_IRQHandler(void);
void HAL_RCCEx_LSECSS_Callback(void);
void HAL_RCCEx_EnableLSCO(uint32_t LSCOSource);
void HAL_RCCEx_DisableLSCO(void);
void HAL_RCCEx_EnableMSIPLLMode(void);
void HAL_RCCEx_DisableMSIPLLMode(void);
# 2441 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rcc_ex.h"
void HAL_RCCEx_CRSConfig(RCC_CRSInitTypeDef *pInit);
void HAL_RCCEx_CRSSoftwareSynchronizationGenerate(void);
void HAL_RCCEx_CRSGetSynchronizationInfo(RCC_CRSSynchroInfoTypeDef *pSynchroInfo);
uint32_t HAL_RCCEx_CRSWaitSynchronization(uint32_t Timeout);
void HAL_RCCEx_CRS_IRQHandler(void);
void HAL_RCCEx_CRS_SyncOkCallback(void);
void HAL_RCCEx_CRS_SyncWarnCallback(void);
void HAL_RCCEx_CRS_ExpectedSyncCallback(void);
void HAL_RCCEx_CRS_ErrorCallback(uint32_t Error);
# 4683 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rcc.h" 2
# 4695 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rcc.h"
HAL_StatusTypeDef HAL_RCC_DeInit(void);
HAL_StatusTypeDef HAL_RCC_OscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct);
HAL_StatusTypeDef HAL_RCC_ClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t FLatency);
# 4708 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rcc.h"
void HAL_RCC_MCOConfig(uint32_t RCC_MCOx, uint32_t RCC_MCOSource, uint32_t RCC_MCODiv);
void HAL_RCC_EnableCSS(void);
uint32_t HAL_RCC_GetSysClockFreq(void);
uint32_t HAL_RCC_GetHCLKFreq(void);
uint32_t HAL_RCC_GetPCLK1Freq(void);
uint32_t HAL_RCC_GetPCLK2Freq(void);
void HAL_RCC_GetOscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct);
void HAL_RCC_GetClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t *pFLatency);

void HAL_RCC_NMI_IRQHandler(void);

void HAL_RCC_CSSCallback(void);
# 46 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc.h" 1
# 47 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc.h"
typedef enum
{
  HAL_RTC_STATE_RESET = 0x00U,
  HAL_RTC_STATE_READY = 0x01U,
  HAL_RTC_STATE_BUSY = 0x02U,
  HAL_RTC_STATE_TIMEOUT = 0x03U,
  HAL_RTC_STATE_ERROR = 0x04U

} HAL_RTCStateTypeDef;




typedef struct
{
  uint32_t HourFormat;


  uint32_t AsynchPrediv;


  uint32_t SynchPrediv;


  uint32_t OutPut;


  uint32_t OutPutRemap;


  uint32_t OutPutPolarity;


  uint32_t OutPutType;





} RTC_InitTypeDef;




typedef struct
{
  uint8_t Hours;



  uint8_t Minutes;


  uint8_t Seconds;


  uint8_t TimeFormat;


  uint32_t SubSeconds;



  uint32_t SecondFraction;





  uint32_t DayLightSaving;


  uint32_t StoreOperation;


} RTC_TimeTypeDef;




typedef struct
{
  uint8_t WeekDay;


  uint8_t Month;


  uint8_t Date;


  uint8_t Year;


} RTC_DateTypeDef;




typedef struct
{
  RTC_TimeTypeDef AlarmTime;

  uint32_t AlarmMask;


  uint32_t AlarmSubSecondMask;


  uint32_t AlarmDateWeekDaySel;


  uint8_t AlarmDateWeekDay;



  uint32_t Alarm;

} RTC_AlarmTypeDef;




typedef struct __RTC_HandleTypeDef
{
  RTC_TypeDef *Instance;




  RTC_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  volatile HAL_RTCStateTypeDef State;
# 199 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc.h"
} RTC_HandleTypeDef;
# 825 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc_ex.h" 1
# 47 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc_ex.h"
typedef struct
{
  uint32_t Tamper;


  uint32_t Interrupt;


  uint32_t Trigger;


  uint32_t NoErase;


  uint32_t MaskFlag;


  uint32_t Filter;


  uint32_t SamplingFrequency;


  uint32_t PrechargeDuration;


  uint32_t TamperPullUp;


  uint32_t TimeStampOnTamperDetection;

} RTC_TamperTypeDef;
# 1245 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc_ex.h"
HAL_StatusTypeDef HAL_RTCEx_SetTimeStamp(RTC_HandleTypeDef *hrtc, uint32_t TimeStampEdge, uint32_t RTC_TimeStampPin);
HAL_StatusTypeDef HAL_RTCEx_SetTimeStamp_IT(RTC_HandleTypeDef *hrtc, uint32_t TimeStampEdge, uint32_t RTC_TimeStampPin);
HAL_StatusTypeDef HAL_RTCEx_DeactivateTimeStamp(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_SetInternalTimeStamp(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_DeactivateInternalTimeStamp(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_GetTimeStamp(RTC_HandleTypeDef *hrtc, RTC_TimeTypeDef *sTimeStamp, RTC_DateTypeDef *sTimeStampDate, uint32_t Format);
void HAL_RTCEx_TamperTimeStampIRQHandler(RTC_HandleTypeDef *hrtc);
void HAL_RTCEx_TimeStampEventCallback(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_PollForTimeStampEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
# 1267 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc_ex.h"
HAL_StatusTypeDef HAL_RTCEx_SetWakeUpTimer(RTC_HandleTypeDef *hrtc, uint32_t WakeUpCounter, uint32_t WakeUpClock);



HAL_StatusTypeDef HAL_RTCEx_SetWakeUpTimer_IT(RTC_HandleTypeDef *hrtc, uint32_t WakeUpCounter, uint32_t WakeUpClock);

HAL_StatusTypeDef HAL_RTCEx_DeactivateWakeUpTimer(RTC_HandleTypeDef *hrtc);
uint32_t HAL_RTCEx_GetWakeUpTimer(RTC_HandleTypeDef *hrtc);
void HAL_RTCEx_WakeUpTimerIRQHandler(RTC_HandleTypeDef *hrtc);
void HAL_RTCEx_WakeUpTimerEventCallback(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_PollForWakeUpTimerEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
# 1291 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc_ex.h"
HAL_StatusTypeDef HAL_RTCEx_SetSmoothCalib(RTC_HandleTypeDef *hrtc, uint32_t SmoothCalibPeriod, uint32_t SmoothCalibPlusPulses, uint32_t SmoothCalibMinusPulsesValue);



HAL_StatusTypeDef HAL_RTCEx_SetSynchroShift(RTC_HandleTypeDef *hrtc, uint32_t ShiftAdd1S, uint32_t ShiftSubFS);
HAL_StatusTypeDef HAL_RTCEx_SetCalibrationOutPut(RTC_HandleTypeDef *hrtc, uint32_t CalibOutput);
HAL_StatusTypeDef HAL_RTCEx_DeactivateCalibrationOutPut(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_SetRefClock(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_DeactivateRefClock(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_EnableBypassShadow(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_DisableBypassShadow(RTC_HandleTypeDef *hrtc);
# 1311 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc_ex.h"
void HAL_RTCEx_AlarmBEventCallback(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_PollForAlarmBEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout);







HAL_StatusTypeDef HAL_RTCEx_SetTamper(RTC_HandleTypeDef *hrtc, RTC_TamperTypeDef *sTamper);
HAL_StatusTypeDef HAL_RTCEx_SetTamper_IT(RTC_HandleTypeDef *hrtc, RTC_TamperTypeDef *sTamper);
HAL_StatusTypeDef HAL_RTCEx_DeactivateTamper(RTC_HandleTypeDef *hrtc, uint32_t Tamper);


HAL_StatusTypeDef HAL_RTCEx_PollForTamper1Event(RTC_HandleTypeDef *hrtc, uint32_t Timeout);

HAL_StatusTypeDef HAL_RTCEx_PollForTamper2Event(RTC_HandleTypeDef *hrtc, uint32_t Timeout);

HAL_StatusTypeDef HAL_RTCEx_PollForTamper3Event(RTC_HandleTypeDef *hrtc, uint32_t Timeout);



void HAL_RTCEx_Tamper1EventCallback(RTC_HandleTypeDef *hrtc);

void HAL_RTCEx_Tamper2EventCallback(RTC_HandleTypeDef *hrtc);

void HAL_RTCEx_Tamper3EventCallback(RTC_HandleTypeDef *hrtc);
# 1348 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc_ex.h"
void HAL_RTCEx_BKUPWrite(RTC_HandleTypeDef *hrtc, uint32_t BackupRegister, uint32_t Data);
uint32_t HAL_RTCEx_BKUPRead(RTC_HandleTypeDef *hrtc, uint32_t BackupRegister);
# 826 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc.h" 2
# 836 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc.h"
HAL_StatusTypeDef HAL_RTC_Init(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTC_DeInit(RTC_HandleTypeDef *hrtc);

void HAL_RTC_MspInit(RTC_HandleTypeDef *hrtc);
void HAL_RTC_MspDeInit(RTC_HandleTypeDef *hrtc);
# 855 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc.h"
HAL_StatusTypeDef HAL_RTC_SetTime(RTC_HandleTypeDef *hrtc, RTC_TimeTypeDef *sTime, uint32_t Format);
HAL_StatusTypeDef HAL_RTC_GetTime(RTC_HandleTypeDef *hrtc, RTC_TimeTypeDef *sTime, uint32_t Format);
HAL_StatusTypeDef HAL_RTC_SetDate(RTC_HandleTypeDef *hrtc, RTC_DateTypeDef *sDate, uint32_t Format);
HAL_StatusTypeDef HAL_RTC_GetDate(RTC_HandleTypeDef *hrtc, RTC_DateTypeDef *sDate, uint32_t Format);
# 867 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc.h"
HAL_StatusTypeDef HAL_RTC_SetAlarm(RTC_HandleTypeDef *hrtc, RTC_AlarmTypeDef *sAlarm, uint32_t Format);
HAL_StatusTypeDef HAL_RTC_SetAlarm_IT(RTC_HandleTypeDef *hrtc, RTC_AlarmTypeDef *sAlarm, uint32_t Format);
HAL_StatusTypeDef HAL_RTC_DeactivateAlarm(RTC_HandleTypeDef *hrtc, uint32_t Alarm);
HAL_StatusTypeDef HAL_RTC_GetAlarm(RTC_HandleTypeDef *hrtc, RTC_AlarmTypeDef *sAlarm, uint32_t Alarm, uint32_t Format);
void HAL_RTC_AlarmIRQHandler(RTC_HandleTypeDef *hrtc);
void HAL_RTC_AlarmAEventCallback(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTC_PollForAlarmAEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
# 882 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc.h"
HAL_StatusTypeDef HAL_RTC_WaitForSynchro(RTC_HandleTypeDef *hrtc);
# 891 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc.h"
HAL_RTCStateTypeDef HAL_RTC_GetState(RTC_HandleTypeDef *hrtc);
# 1042 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_rtc.h"
HAL_StatusTypeDef RTC_EnterInitMode(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef RTC_ExitInitMode(RTC_HandleTypeDef *hrtc);
uint8_t RTC_ByteToBcd2(uint8_t Value);
uint8_t RTC_Bcd2ToByte(uint8_t Value);
# 47 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sd.h" 1
# 31 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sd.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_sdmmc.h" 1
# 49 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_sdmmc.h"
typedef struct
{
  uint32_t ClockEdge;
# 60 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_sdmmc.h"
  uint32_t ClockPowerSave;



  uint32_t BusWide;


  uint32_t HardwareFlowControl;


  uint32_t ClockDiv;



  uint32_t Transceiver;



}SDMMC_InitTypeDef;





typedef struct
{
  uint32_t Argument;




  uint32_t CmdIndex;


  uint32_t Response;


  uint32_t WaitForInterrupt;



  uint32_t CPSM;


}SDMMC_CmdInitTypeDef;





typedef struct
{
  uint32_t DataTimeOut;

  uint32_t DataLength;

  uint32_t DataBlockSize;


  uint32_t TransferDir;



  uint32_t TransferMode;


  uint32_t DPSM;


}SDMMC_DataInitTypeDef;
# 1190 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_sdmmc.h"
HAL_StatusTypeDef SDMMC_Init(SDMMC_TypeDef *SDMMCx, SDMMC_InitTypeDef Init);
# 1199 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_sdmmc.h"
uint32_t SDMMC_ReadFIFO(SDMMC_TypeDef *SDMMCx);
HAL_StatusTypeDef SDMMC_WriteFIFO(SDMMC_TypeDef *SDMMCx, uint32_t *pWriteData);
# 1209 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_sdmmc.h"
HAL_StatusTypeDef SDMMC_PowerState_ON(SDMMC_TypeDef *SDMMCx);

HAL_StatusTypeDef SDMMC_PowerState_Cycle(SDMMC_TypeDef *SDMMCx);

HAL_StatusTypeDef SDMMC_PowerState_OFF(SDMMC_TypeDef *SDMMCx);
uint32_t SDMMC_GetPowerState(SDMMC_TypeDef *SDMMCx);


HAL_StatusTypeDef SDMMC_SendCommand(SDMMC_TypeDef *SDMMCx, SDMMC_CmdInitTypeDef *Command);
uint8_t SDMMC_GetCommandResponse(SDMMC_TypeDef *SDMMCx);
uint32_t SDMMC_GetResponse(SDMMC_TypeDef *SDMMCx, uint32_t Response);


HAL_StatusTypeDef SDMMC_ConfigData(SDMMC_TypeDef *SDMMCx, SDMMC_DataInitTypeDef* Data);
uint32_t SDMMC_GetDataCounter(SDMMC_TypeDef *SDMMCx);
uint32_t SDMMC_GetFIFOCount(SDMMC_TypeDef *SDMMCx);


HAL_StatusTypeDef SDMMC_SetSDMMCReadWaitMode(SDMMC_TypeDef *SDMMCx, uint32_t SDMMC_ReadWaitMode);


uint32_t SDMMC_CmdBlockLength(SDMMC_TypeDef *SDMMCx, uint32_t BlockSize);
uint32_t SDMMC_CmdReadSingleBlock(SDMMC_TypeDef *SDMMCx, uint32_t ReadAdd);
uint32_t SDMMC_CmdReadMultiBlock(SDMMC_TypeDef *SDMMCx, uint32_t ReadAdd);
uint32_t SDMMC_CmdWriteSingleBlock(SDMMC_TypeDef *SDMMCx, uint32_t WriteAdd);
uint32_t SDMMC_CmdWriteMultiBlock(SDMMC_TypeDef *SDMMCx, uint32_t WriteAdd);
uint32_t SDMMC_CmdEraseStartAdd(SDMMC_TypeDef *SDMMCx, uint32_t StartAdd);
uint32_t SDMMC_CmdSDEraseStartAdd(SDMMC_TypeDef *SDMMCx, uint32_t StartAdd);
uint32_t SDMMC_CmdEraseEndAdd(SDMMC_TypeDef *SDMMCx, uint32_t EndAdd);
uint32_t SDMMC_CmdSDEraseEndAdd(SDMMC_TypeDef *SDMMCx, uint32_t EndAdd);
uint32_t SDMMC_CmdErase(SDMMC_TypeDef *SDMMCx);
uint32_t SDMMC_CmdStopTransfer(SDMMC_TypeDef *SDMMCx);
uint32_t SDMMC_CmdSelDesel(SDMMC_TypeDef *SDMMCx, uint64_t Addr);
uint32_t SDMMC_CmdGoIdleState(SDMMC_TypeDef *SDMMCx);
uint32_t SDMMC_CmdOperCond(SDMMC_TypeDef *SDMMCx);
uint32_t SDMMC_CmdAppCommand(SDMMC_TypeDef *SDMMCx, uint32_t Argument);
uint32_t SDMMC_CmdAppOperCommand(SDMMC_TypeDef *SDMMCx, uint32_t Argument);
uint32_t SDMMC_CmdBusWidth(SDMMC_TypeDef *SDMMCx, uint32_t BusWidth);
uint32_t SDMMC_CmdSendSCR(SDMMC_TypeDef *SDMMCx);
uint32_t SDMMC_CmdSendCID(SDMMC_TypeDef *SDMMCx);
uint32_t SDMMC_CmdSendCSD(SDMMC_TypeDef *SDMMCx, uint32_t Argument);
uint32_t SDMMC_CmdSetRelAdd(SDMMC_TypeDef *SDMMCx, uint16_t *pRCA);
uint32_t SDMMC_CmdSendStatus(SDMMC_TypeDef *SDMMCx, uint32_t Argument);
uint32_t SDMMC_CmdStatusRegister(SDMMC_TypeDef *SDMMCx);

uint32_t SDMMC_CmdVoltageSwitch(SDMMC_TypeDef *SDMMCx);

uint32_t SDMMC_CmdOpCondition(SDMMC_TypeDef *SDMMCx, uint32_t Argument);
uint32_t SDMMC_CmdSwitch(SDMMC_TypeDef *SDMMCx, uint32_t Argument);

uint32_t SDMMC_CmdSendEXTCSD(SDMMC_TypeDef *SDMMCx, uint32_t Argument);
# 32 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sd.h" 2
# 50 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sd.h"
typedef enum
{
  HAL_SD_STATE_RESET = ((uint32_t)0x00000000U),
  HAL_SD_STATE_READY = ((uint32_t)0x00000001U),
  HAL_SD_STATE_TIMEOUT = ((uint32_t)0x00000002U),
  HAL_SD_STATE_BUSY = ((uint32_t)0x00000003U),
  HAL_SD_STATE_PROGRAMMING = ((uint32_t)0x00000004U),
  HAL_SD_STATE_RECEIVING = ((uint32_t)0x00000005U),
  HAL_SD_STATE_TRANSFER = ((uint32_t)0x00000006U),
  HAL_SD_STATE_ERROR = ((uint32_t)0x0000000FU)
}HAL_SD_StateTypeDef;







typedef uint32_t HAL_SD_CardStateTypeDef;
# 92 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sd.h"
typedef struct
{
  uint32_t CardType;

  uint32_t CardVersion;

  uint32_t Class;

  uint32_t RelCardAdd;

  uint32_t BlockNbr;

  uint32_t BlockSize;

  uint32_t LogBlockNbr;

  uint32_t LogBlockSize;



  uint32_t CardSpeed;


}HAL_SD_CardInfoTypeDef;







typedef struct

{
  SDMMC_TypeDef *Instance;

  SDMMC_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  uint8_t *pTxBuffPtr;

  uint32_t TxXferSize;

  uint8_t *pRxBuffPtr;

  uint32_t RxXferSize;

  volatile uint32_t Context;

  volatile HAL_SD_StateTypeDef State;

  volatile uint32_t ErrorCode;
# 153 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sd.h"
  HAL_SD_CardInfoTypeDef SdCard;

  uint32_t CSD[4];

  uint32_t CID[4];
# 176 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sd.h"
}SD_HandleTypeDef;
# 185 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sd.h"
typedef struct
{
  volatile uint8_t CSDStruct;
  volatile uint8_t SysSpecVersion;
  volatile uint8_t Reserved1;
  volatile uint8_t TAAC;
  volatile uint8_t NSAC;
  volatile uint8_t MaxBusClkFrec;
  volatile uint16_t CardComdClasses;
  volatile uint8_t RdBlockLen;
  volatile uint8_t PartBlockRead;
  volatile uint8_t WrBlockMisalign;
  volatile uint8_t RdBlockMisalign;
  volatile uint8_t DSRImpl;
  volatile uint8_t Reserved2;
  volatile uint32_t DeviceSize;
  volatile uint8_t MaxRdCurrentVDDMin;
  volatile uint8_t MaxRdCurrentVDDMax;
  volatile uint8_t MaxWrCurrentVDDMin;
  volatile uint8_t MaxWrCurrentVDDMax;
  volatile uint8_t DeviceSizeMul;
  volatile uint8_t EraseGrSize;
  volatile uint8_t EraseGrMul;
  volatile uint8_t WrProtectGrSize;
  volatile uint8_t WrProtectGrEnable;
  volatile uint8_t ManDeflECC;
  volatile uint8_t WrSpeedFact;
  volatile uint8_t MaxWrBlockLen;
  volatile uint8_t WriteBlockPaPartial;
  volatile uint8_t Reserved3;
  volatile uint8_t ContentProtectAppli;
  volatile uint8_t FileFormatGroup;
  volatile uint8_t CopyFlag;
  volatile uint8_t PermWrProtect;
  volatile uint8_t TempWrProtect;
  volatile uint8_t FileFormat;
  volatile uint8_t ECC;
  volatile uint8_t CSD_CRC;
  volatile uint8_t Reserved4;
}HAL_SD_CardCSDTypeDef;







typedef struct
{
  volatile uint8_t ManufacturerID;
  volatile uint16_t OEM_AppliID;
  volatile uint32_t ProdName1;
  volatile uint8_t ProdName2;
  volatile uint8_t ProdRev;
  volatile uint32_t ProdSN;
  volatile uint8_t Reserved1;
  volatile uint16_t ManufactDate;
  volatile uint8_t CID_CRC;
  volatile uint8_t Reserved2;

}HAL_SD_CardCIDTypeDef;







typedef struct
{
  volatile uint8_t DataBusWidth;
  volatile uint8_t SecuredMode;
  volatile uint16_t CardType;
  volatile uint32_t ProtectedAreaSize;
  volatile uint8_t SpeedClass;
  volatile uint8_t PerformanceMove;
  volatile uint8_t AllocationUnitSize;
  volatile uint16_t EraseSize;
  volatile uint8_t EraseTimeout;
  volatile uint8_t EraseOffset;

  volatile uint8_t UhsSpeedGrade;
  volatile uint8_t UhsAllocationUnitSize;
  volatile uint8_t VideoSpeedClass;

}HAL_SD_CardStatusTypeDef;
# 682 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sd.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sd_ex.h" 1
# 50 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sd_ex.h"
typedef enum
{
  SD_DMA_BUFFER0 = 0x00U,
  SD_DMA_BUFFER1 = 0x01U,

}HAL_SDEx_DMABuffer_MemoryTypeDef;
# 75 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sd_ex.h"
uint32_t HAL_SDEx_HighSpeed (SD_HandleTypeDef *hsd);

void HAL_SDEx_DriveTransceiver_1_8V_Callback(FlagStatus status);
# 86 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sd_ex.h"
HAL_StatusTypeDef HAL_SDEx_ConfigDMAMultiBuffer(SD_HandleTypeDef *hsd, uint32_t * pDataBuffer0, uint32_t * pDataBuffer1, uint32_t BufferSize);
HAL_StatusTypeDef HAL_SDEx_ReadBlocksDMAMultiBuffer(SD_HandleTypeDef *hsd, uint32_t BlockAdd, uint32_t NumberOfBlocks);
HAL_StatusTypeDef HAL_SDEx_WriteBlocksDMAMultiBuffer(SD_HandleTypeDef *hsd, uint32_t BlockAdd, uint32_t NumberOfBlocks);
HAL_StatusTypeDef HAL_SDEx_ChangeDMABuffer(SD_HandleTypeDef *hsd, HAL_SDEx_DMABuffer_MemoryTypeDef Buffer, uint32_t *pDataBuffer);

void HAL_SDEx_Read_DMADoubleBuffer0CpltCallback(SD_HandleTypeDef *hsd);
void HAL_SDEx_Read_DMADoubleBuffer1CpltCallback(SD_HandleTypeDef *hsd);
void HAL_SDEx_Write_DMADoubleBuffer0CpltCallback(SD_HandleTypeDef *hsd);
void HAL_SDEx_Write_DMADoubleBuffer1CpltCallback(SD_HandleTypeDef *hsd);
# 683 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sd.h" 2
# 693 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sd.h"
HAL_StatusTypeDef HAL_SD_Init (SD_HandleTypeDef *hsd);
HAL_StatusTypeDef HAL_SD_InitCard (SD_HandleTypeDef *hsd);
HAL_StatusTypeDef HAL_SD_DeInit (SD_HandleTypeDef *hsd);
void HAL_SD_MspInit (SD_HandleTypeDef *hsd);
void HAL_SD_MspDeInit(SD_HandleTypeDef *hsd);
# 706 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sd.h"
HAL_StatusTypeDef HAL_SD_ReadBlocks (SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks, uint32_t Timeout);
HAL_StatusTypeDef HAL_SD_WriteBlocks (SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks, uint32_t Timeout);
HAL_StatusTypeDef HAL_SD_Erase (SD_HandleTypeDef *hsd, uint32_t BlockStartAdd, uint32_t BlockEndAdd);

HAL_StatusTypeDef HAL_SD_ReadBlocks_IT (SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks);
HAL_StatusTypeDef HAL_SD_WriteBlocks_IT (SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks);

HAL_StatusTypeDef HAL_SD_ReadBlocks_DMA (SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks);
HAL_StatusTypeDef HAL_SD_WriteBlocks_DMA(SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks);

void HAL_SD_IRQHandler (SD_HandleTypeDef *hsd);


void HAL_SD_TxCpltCallback (SD_HandleTypeDef *hsd);
void HAL_SD_RxCpltCallback (SD_HandleTypeDef *hsd);
void HAL_SD_ErrorCallback (SD_HandleTypeDef *hsd);
void HAL_SD_AbortCallback (SD_HandleTypeDef *hsd);
# 742 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sd.h"
HAL_StatusTypeDef HAL_SD_ConfigWideBusOperation(SD_HandleTypeDef *hsd, uint32_t WideMode);
HAL_StatusTypeDef HAL_SD_ConfigSpeedBusOperation(SD_HandleTypeDef *hsd, uint32_t SpeedMode);







HAL_StatusTypeDef HAL_SD_SendSDStatus (SD_HandleTypeDef *hsd, uint32_t *pSDstatus);
HAL_SD_CardStateTypeDef HAL_SD_GetCardState (SD_HandleTypeDef *hsd);
HAL_StatusTypeDef HAL_SD_GetCardCID (SD_HandleTypeDef *hsd, HAL_SD_CardCIDTypeDef *pCID);
HAL_StatusTypeDef HAL_SD_GetCardCSD (SD_HandleTypeDef *hsd, HAL_SD_CardCSDTypeDef *pCSD);
HAL_StatusTypeDef HAL_SD_GetCardStatus(SD_HandleTypeDef *hsd, HAL_SD_CardStatusTypeDef *pStatus);
HAL_StatusTypeDef HAL_SD_GetCardInfo (SD_HandleTypeDef *hsd, HAL_SD_CardInfoTypeDef *pCardInfo);







HAL_SD_StateTypeDef HAL_SD_GetState(SD_HandleTypeDef *hsd);
uint32_t HAL_SD_GetError(SD_HandleTypeDef *hsd);







HAL_StatusTypeDef HAL_SD_Abort (SD_HandleTypeDef *hsd);
HAL_StatusTypeDef HAL_SD_Abort_IT(SD_HandleTypeDef *hsd);
# 48 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_spi.h" 1
# 47 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_spi.h"
typedef struct
{
  uint32_t Mode;


  uint32_t Direction;


  uint32_t DataSize;


  uint32_t CLKPolarity;


  uint32_t CLKPhase;


  uint32_t NSS;



  uint32_t BaudRatePrescaler;





  uint32_t FirstBit;


  uint32_t TIMode;


  uint32_t CRCCalculation;


  uint32_t CRCPolynomial;


  uint32_t CRCLength;



  uint32_t NSSPMode;





} SPI_InitTypeDef;




typedef enum
{
  HAL_SPI_STATE_RESET = 0x00U,
  HAL_SPI_STATE_READY = 0x01U,
  HAL_SPI_STATE_BUSY = 0x02U,
  HAL_SPI_STATE_BUSY_TX = 0x03U,
  HAL_SPI_STATE_BUSY_RX = 0x04U,
  HAL_SPI_STATE_BUSY_TX_RX = 0x05U,
  HAL_SPI_STATE_ERROR = 0x06U,
  HAL_SPI_STATE_ABORT = 0x07U
} HAL_SPI_StateTypeDef;




typedef struct __SPI_HandleTypeDef
{
  SPI_TypeDef *Instance;

  SPI_InitTypeDef Init;

  uint8_t *pTxBuffPtr;

  uint16_t TxXferSize;

  volatile uint16_t TxXferCount;

  uint8_t *pRxBuffPtr;

  uint16_t RxXferSize;

  volatile uint16_t RxXferCount;

  uint32_t CRCSize;

  void (*RxISR)(struct __SPI_HandleTypeDef *hspi);

  void (*TxISR)(struct __SPI_HandleTypeDef *hspi);

  DMA_HandleTypeDef *hdmatx;

  DMA_HandleTypeDef *hdmarx;

  HAL_LockTypeDef Lock;

  volatile HAL_SPI_StateTypeDef State;

  volatile uint32_t ErrorCode;
# 163 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_spi.h"
} SPI_HandleTypeDef;
# 757 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_spi.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_spi_ex.h" 1
# 52 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_spi_ex.h"
HAL_StatusTypeDef HAL_SPIEx_FlushRxFifo(SPI_HandleTypeDef *hspi);
# 758 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_spi.h" 2
# 768 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_spi.h"
HAL_StatusTypeDef HAL_SPI_Init(SPI_HandleTypeDef *hspi);
HAL_StatusTypeDef HAL_SPI_DeInit(SPI_HandleTypeDef *hspi);
void HAL_SPI_MspInit(SPI_HandleTypeDef *hspi);
void HAL_SPI_MspDeInit(SPI_HandleTypeDef *hspi);
# 786 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_spi.h"
HAL_StatusTypeDef HAL_SPI_Transmit(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_SPI_Receive(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_SPI_TransmitReceive(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size,
                                          uint32_t Timeout);
HAL_StatusTypeDef HAL_SPI_Transmit_IT(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SPI_Receive_IT(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SPI_TransmitReceive_IT(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData,
                                             uint16_t Size);
HAL_StatusTypeDef HAL_SPI_Transmit_DMA(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SPI_Receive_DMA(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SPI_TransmitReceive_DMA(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData,
                                              uint16_t Size);
HAL_StatusTypeDef HAL_SPI_DMAPause(SPI_HandleTypeDef *hspi);
HAL_StatusTypeDef HAL_SPI_DMAResume(SPI_HandleTypeDef *hspi);
HAL_StatusTypeDef HAL_SPI_DMAStop(SPI_HandleTypeDef *hspi);

HAL_StatusTypeDef HAL_SPI_Abort(SPI_HandleTypeDef *hspi);
HAL_StatusTypeDef HAL_SPI_Abort_IT(SPI_HandleTypeDef *hspi);

void HAL_SPI_IRQHandler(SPI_HandleTypeDef *hspi);
void HAL_SPI_TxCpltCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_RxCpltCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_TxRxCpltCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_TxHalfCpltCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_RxHalfCpltCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_TxRxHalfCpltCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_ErrorCallback(SPI_HandleTypeDef *hspi);
void HAL_SPI_AbortCpltCallback(SPI_HandleTypeDef *hspi);
# 822 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_spi.h"
HAL_SPI_StateTypeDef HAL_SPI_GetState(SPI_HandleTypeDef *hspi);
uint32_t HAL_SPI_GetError(SPI_HandleTypeDef *hspi);
# 49 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim.h" 1
# 47 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim.h"
typedef struct
{
  uint32_t Prescaler;


  uint32_t CounterMode;


  uint32_t Period;



  uint32_t ClockDivision;


  uint32_t RepetitionCounter;
# 71 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim.h"
  uint32_t AutoReloadPreload;

} TIM_Base_InitTypeDef;




typedef struct
{
  uint32_t OCMode;


  uint32_t Pulse;


  uint32_t OCPolarity;


  uint32_t OCNPolarity;



  uint32_t OCFastMode;




  uint32_t OCIdleState;



  uint32_t OCNIdleState;


} TIM_OC_InitTypeDef;




typedef struct
{
  uint32_t OCMode;


  uint32_t Pulse;


  uint32_t OCPolarity;


  uint32_t OCNPolarity;



  uint32_t OCIdleState;



  uint32_t OCNIdleState;



  uint32_t ICPolarity;


  uint32_t ICSelection;


  uint32_t ICFilter;

} TIM_OnePulse_InitTypeDef;




typedef struct
{
  uint32_t ICPolarity;


  uint32_t ICSelection;


  uint32_t ICPrescaler;


  uint32_t ICFilter;

} TIM_IC_InitTypeDef;




typedef struct
{
  uint32_t EncoderMode;


  uint32_t IC1Polarity;


  uint32_t IC1Selection;


  uint32_t IC1Prescaler;


  uint32_t IC1Filter;


  uint32_t IC2Polarity;


  uint32_t IC2Selection;


  uint32_t IC2Prescaler;


  uint32_t IC2Filter;

} TIM_Encoder_InitTypeDef;




typedef struct
{
  uint32_t ClockSource;

  uint32_t ClockPolarity;

  uint32_t ClockPrescaler;

  uint32_t ClockFilter;

} TIM_ClockConfigTypeDef;




typedef struct
{
  uint32_t ClearInputState;

  uint32_t ClearInputSource;

  uint32_t ClearInputPolarity;

  uint32_t ClearInputPrescaler;

  uint32_t ClearInputFilter;

} TIM_ClearInputConfigTypeDef;






typedef struct
{
  uint32_t MasterOutputTrigger;

  uint32_t MasterOutputTrigger2;

  uint32_t MasterSlaveMode;

} TIM_MasterConfigTypeDef;




typedef struct
{
  uint32_t SlaveMode;

  uint32_t InputTrigger;

  uint32_t TriggerPolarity;

  uint32_t TriggerPrescaler;

  uint32_t TriggerFilter;


} TIM_SlaveConfigTypeDef;






typedef struct
{
  uint32_t OffStateRunMode;

  uint32_t OffStateIDLEMode;

  uint32_t LockLevel;

  uint32_t DeadTime;

  uint32_t BreakState;

  uint32_t BreakPolarity;

  uint32_t BreakFilter;

  uint32_t Break2State;

  uint32_t Break2Polarity;

  uint32_t Break2Filter;

  uint32_t AutomaticOutput;

} TIM_BreakDeadTimeConfigTypeDef;




typedef enum
{
  HAL_TIM_STATE_RESET = 0x00U,
  HAL_TIM_STATE_READY = 0x01U,
  HAL_TIM_STATE_BUSY = 0x02U,
  HAL_TIM_STATE_TIMEOUT = 0x03U,
  HAL_TIM_STATE_ERROR = 0x04U
} HAL_TIM_StateTypeDef;




typedef enum
{
  HAL_TIM_ACTIVE_CHANNEL_1 = 0x01U,
  HAL_TIM_ACTIVE_CHANNEL_2 = 0x02U,
  HAL_TIM_ACTIVE_CHANNEL_3 = 0x04U,
  HAL_TIM_ACTIVE_CHANNEL_4 = 0x08U,
  HAL_TIM_ACTIVE_CHANNEL_5 = 0x10U,
  HAL_TIM_ACTIVE_CHANNEL_6 = 0x20U,
  HAL_TIM_ACTIVE_CHANNEL_CLEARED = 0x00U
} HAL_TIM_ActiveChannel;







typedef struct

{
  TIM_TypeDef *Instance;
  TIM_Base_InitTypeDef Init;
  HAL_TIM_ActiveChannel Channel;
  DMA_HandleTypeDef *hdma[7];

  HAL_LockTypeDef Lock;
  volatile HAL_TIM_StateTypeDef State;
# 363 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim.h"
} TIM_HandleTypeDef;
# 1879 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim_ex.h" 1
# 48 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim_ex.h"
typedef struct
{
  uint32_t IC1Polarity;


  uint32_t IC1Prescaler;


  uint32_t IC1Filter;


  uint32_t Commutation_Delay;

} TIM_HallSensor_InitTypeDef;




typedef struct
{
  uint32_t Source;

  uint32_t Enable;

  uint32_t Polarity;


}
TIMEx_BreakInputConfigTypeDef;
# 289 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Init(TIM_HandleTypeDef *htim, TIM_HallSensor_InitTypeDef *sConfig);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_DeInit(TIM_HandleTypeDef *htim);

void HAL_TIMEx_HallSensor_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIMEx_HallSensor_MspDeInit(TIM_HandleTypeDef *htim);


HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start_IT(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop_IT(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start_DMA(TIM_HandleTypeDef *htim, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop_DMA(TIM_HandleTypeDef *htim);
# 314 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_OCN_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_OCN_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIMEx_OCN_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_OCN_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIMEx_OCN_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIMEx_OCN_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 334 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_PWMN_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIMEx_PWMN_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIMEx_PWMN_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 353 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Start(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Stop(TIM_HandleTypeDef *htim, uint32_t OutputChannel);


HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Start_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Stop_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
# 368 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_ConfigCommutEvent(TIM_HandleTypeDef *htim, uint32_t InputTrigger,
                                              uint32_t CommutationSource);
HAL_StatusTypeDef HAL_TIMEx_ConfigCommutEvent_IT(TIM_HandleTypeDef *htim, uint32_t InputTrigger,
                                                 uint32_t CommutationSource);
HAL_StatusTypeDef HAL_TIMEx_ConfigCommutEvent_DMA(TIM_HandleTypeDef *htim, uint32_t InputTrigger,
                                                  uint32_t CommutationSource);
HAL_StatusTypeDef HAL_TIMEx_MasterConfigSynchronization(TIM_HandleTypeDef *htim,
                                                        TIM_MasterConfigTypeDef *sMasterConfig);
HAL_StatusTypeDef HAL_TIMEx_ConfigBreakDeadTime(TIM_HandleTypeDef *htim,
                                                TIM_BreakDeadTimeConfigTypeDef *sBreakDeadTimeConfig);
HAL_StatusTypeDef HAL_TIMEx_ConfigBreakInput(TIM_HandleTypeDef *htim, uint32_t BreakInput,
                                             TIMEx_BreakInputConfigTypeDef *sBreakInputConfig);
HAL_StatusTypeDef HAL_TIMEx_GroupChannel5(TIM_HandleTypeDef *htim, uint32_t Channels);
HAL_StatusTypeDef HAL_TIMEx_RemapConfig(TIM_HandleTypeDef *htim, uint32_t Remap);
# 391 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim_ex.h"
void HAL_TIMEx_CommutCallback(TIM_HandleTypeDef *htim);
void HAL_TIMEx_CommutHalfCpltCallback(TIM_HandleTypeDef *htim);
void HAL_TIMEx_BreakCallback(TIM_HandleTypeDef *htim);
void HAL_TIMEx_Break2Callback(TIM_HandleTypeDef *htim);
# 404 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim_ex.h"
HAL_TIM_StateTypeDef HAL_TIMEx_HallSensor_GetState(TIM_HandleTypeDef *htim);
# 418 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim_ex.h"
void TIMEx_DMACommutationCplt(DMA_HandleTypeDef *hdma);
void TIMEx_DMACommutationHalfCplt(DMA_HandleTypeDef *hdma);
# 1880 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim.h" 2
# 1891 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_Base_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_Base_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Base_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Base_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Base_Start(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_Base_Stop(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Base_Start_IT(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_Base_Stop_IT(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Base_Start_DMA(TIM_HandleTypeDef *htim, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_Base_Stop_DMA(TIM_HandleTypeDef *htim);
# 1913 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_OC_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_OC_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OC_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OC_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_OC_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_OC_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_OC_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_OC_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_OC_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_OC_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 1935 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_PWM_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_PWM_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_PWM_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_PWM_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_PWM_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_PWM_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_PWM_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_PWM_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 1957 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_IC_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_IC_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_IC_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_IC_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_IC_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_IC_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_IC_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_IC_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 1979 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_OnePulse_Init(TIM_HandleTypeDef *htim, uint32_t OnePulseMode);
HAL_StatusTypeDef HAL_TIM_OnePulse_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OnePulse_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OnePulse_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_OnePulse_Start(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIM_OnePulse_Stop(TIM_HandleTypeDef *htim, uint32_t OutputChannel);

HAL_StatusTypeDef HAL_TIM_OnePulse_Start_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIM_OnePulse_Stop_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
# 1998 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_Encoder_Init(TIM_HandleTypeDef *htim, TIM_Encoder_InitTypeDef *sConfig);
HAL_StatusTypeDef HAL_TIM_Encoder_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Encoder_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Encoder_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Encoder_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_Encoder_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_Encoder_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_Encoder_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_Encoder_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData1,
                                            uint32_t *pData2, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_Encoder_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 2021 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim.h"
void HAL_TIM_IRQHandler(TIM_HandleTypeDef *htim);
# 2031 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_OC_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OC_InitTypeDef *sConfig, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_PWM_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OC_InitTypeDef *sConfig, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_IC_ConfigChannel(TIM_HandleTypeDef *htim, TIM_IC_InitTypeDef *sConfig, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_OnePulse_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OnePulse_InitTypeDef *sConfig,
                                                 uint32_t OutputChannel, uint32_t InputChannel);
HAL_StatusTypeDef HAL_TIM_ConfigOCrefClear(TIM_HandleTypeDef *htim, TIM_ClearInputConfigTypeDef *sClearInputConfig,
                                           uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_ConfigClockSource(TIM_HandleTypeDef *htim, TIM_ClockConfigTypeDef *sClockSourceConfig);
HAL_StatusTypeDef HAL_TIM_ConfigTI1Input(TIM_HandleTypeDef *htim, uint32_t TI1_Selection);
HAL_StatusTypeDef HAL_TIM_SlaveConfigSynchro(TIM_HandleTypeDef *htim, TIM_SlaveConfigTypeDef *sSlaveConfig);
HAL_StatusTypeDef HAL_TIM_SlaveConfigSynchro_IT(TIM_HandleTypeDef *htim, TIM_SlaveConfigTypeDef *sSlaveConfig);
HAL_StatusTypeDef HAL_TIM_DMABurst_WriteStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress,
                                              uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength);
HAL_StatusTypeDef HAL_TIM_DMABurst_WriteStop(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc);
HAL_StatusTypeDef HAL_TIM_DMABurst_ReadStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress,
                                             uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength);
HAL_StatusTypeDef HAL_TIM_DMABurst_ReadStop(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc);
HAL_StatusTypeDef HAL_TIM_GenerateEvent(TIM_HandleTypeDef *htim, uint32_t EventSource);
uint32_t HAL_TIM_ReadCapturedValue(TIM_HandleTypeDef *htim, uint32_t Channel);
# 2059 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim.h"
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_PeriodElapsedHalfCpltCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_OC_DelayElapsedCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_CaptureHalfCpltCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_PulseFinishedHalfCpltCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_TriggerCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_TriggerHalfCpltCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_ErrorCallback(TIM_HandleTypeDef *htim);
# 2086 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim.h"
HAL_TIM_StateTypeDef HAL_TIM_Base_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_OC_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_PWM_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_IC_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_OnePulse_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_Encoder_GetState(TIM_HandleTypeDef *htim);
# 2105 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_tim.h"
void TIM_Base_SetConfig(TIM_TypeDef *TIMx, TIM_Base_InitTypeDef *Structure);
void TIM_TI1_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection, uint32_t TIM_ICFilter);
void TIM_OC2_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config);
void TIM_ETR_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ExtTRGPrescaler,
                       uint32_t TIM_ExtTRGPolarity, uint32_t ExtTRGFilter);

void TIM_DMADelayPulseCplt(DMA_HandleTypeDef *hdma);
void TIM_DMADelayPulseHalfCplt(DMA_HandleTypeDef *hdma);
void TIM_DMAError(DMA_HandleTypeDef *hdma);
void TIM_DMACaptureCplt(DMA_HandleTypeDef *hdma);
void TIM_DMACaptureHalfCplt(DMA_HandleTypeDef *hdma);
void TIM_CCxChannelCmd(TIM_TypeDef *TIMx, uint32_t Channel, uint32_t ChannelState);
# 50 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_uart.h" 1
# 47 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_uart.h"
typedef struct
{
  uint32_t BaudRate;
# 65 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_uart.h"
  uint32_t WordLength;


  uint32_t StopBits;


  uint32_t Parity;






  uint32_t Mode;


  uint32_t HwFlowCtl;



  uint32_t OverSampling;


  uint32_t OneBitSampling;




  uint32_t ClockPrescaler;



} UART_InitTypeDef;




typedef struct
{
  uint32_t AdvFeatureInit;



  uint32_t TxPinLevelInvert;


  uint32_t RxPinLevelInvert;


  uint32_t DataInvert;



  uint32_t Swap;


  uint32_t OverrunDisable;


  uint32_t DMADisableonRxError;


  uint32_t AutoBaudRateEnable;


  uint32_t AutoBaudRateMode;



  uint32_t MSBFirst;

} UART_AdvFeatureInitTypeDef;
# 179 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_uart.h"
typedef uint32_t HAL_UART_StateTypeDef;




typedef enum
{
  UART_CLOCKSOURCE_PCLK1 = 0x00U,
  UART_CLOCKSOURCE_PCLK2 = 0x01U,
  UART_CLOCKSOURCE_HSI = 0x02U,
  UART_CLOCKSOURCE_SYSCLK = 0x04U,
  UART_CLOCKSOURCE_LSE = 0x08U,
  UART_CLOCKSOURCE_UNDEFINED = 0x10U
} UART_ClockSourceTypeDef;




typedef struct __UART_HandleTypeDef
{
  USART_TypeDef *Instance;

  UART_InitTypeDef Init;

  UART_AdvFeatureInitTypeDef AdvancedInit;

  uint8_t *pTxBuffPtr;

  uint16_t TxXferSize;

  volatile uint16_t TxXferCount;

  uint8_t *pRxBuffPtr;

  uint16_t RxXferSize;

  volatile uint16_t RxXferCount;

  uint16_t Mask;


  uint32_t FifoMode;


  uint16_t NbRxDataToProcess;

  uint16_t NbTxDataToProcess;


  void (*RxISR)(struct __UART_HandleTypeDef *huart);

  void (*TxISR)(struct __UART_HandleTypeDef *huart);

  DMA_HandleTypeDef *hdmatx;

  DMA_HandleTypeDef *hdmarx;

  HAL_LockTypeDef Lock;

  volatile HAL_UART_StateTypeDef gState;



  volatile HAL_UART_StateTypeDef RxState;


  volatile uint32_t ErrorCode;
# 266 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_uart.h"
} UART_HandleTypeDef;
# 1555 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_uart.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_uart_ex.h" 1
# 47 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_uart_ex.h"
typedef struct
{
  uint32_t WakeUpEvent;




  uint16_t AddressLength;


  uint8_t Address;
} UART_WakeUpTypeDef;
# 143 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_uart_ex.h"
HAL_StatusTypeDef HAL_RS485Ex_Init(UART_HandleTypeDef *huart, uint32_t Polarity, uint32_t AssertionTime,
                                   uint32_t DeassertionTime);
# 154 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_uart_ex.h"
void HAL_UARTEx_WakeupCallback(UART_HandleTypeDef *huart);


void HAL_UARTEx_RxFifoFullCallback(UART_HandleTypeDef *huart);
void HAL_UARTEx_TxFifoEmptyCallback(UART_HandleTypeDef *huart);
# 170 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_uart_ex.h"
HAL_StatusTypeDef HAL_UARTEx_StopModeWakeUpSourceConfig(UART_HandleTypeDef *huart, UART_WakeUpTypeDef WakeUpSelection);
HAL_StatusTypeDef HAL_UARTEx_EnableStopMode(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UARTEx_DisableStopMode(UART_HandleTypeDef *huart);




HAL_StatusTypeDef HAL_MultiProcessorEx_AddressLength_Set(UART_HandleTypeDef *huart, uint32_t AddressLength);

HAL_StatusTypeDef HAL_UARTEx_EnableFifoMode(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UARTEx_DisableFifoMode(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UARTEx_SetTxFifoThreshold(UART_HandleTypeDef *huart, uint32_t Threshold);
HAL_StatusTypeDef HAL_UARTEx_SetRxFifoThreshold(UART_HandleTypeDef *huart, uint32_t Threshold);
# 1556 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_uart.h" 2
# 1568 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_uart.h"
HAL_StatusTypeDef HAL_UART_Init(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_HalfDuplex_Init(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_LIN_Init(UART_HandleTypeDef *huart, uint32_t BreakDetectLength);
HAL_StatusTypeDef HAL_MultiProcessor_Init(UART_HandleTypeDef *huart, uint8_t Address, uint32_t WakeUpMethod);
HAL_StatusTypeDef HAL_UART_DeInit(UART_HandleTypeDef *huart);
void HAL_UART_MspInit(UART_HandleTypeDef *huart);
void HAL_UART_MspDeInit(UART_HandleTypeDef *huart);
# 1592 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_uart.h"
HAL_StatusTypeDef HAL_UART_Transmit(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_UART_Receive(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_UART_Transmit_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_Receive_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_Transmit_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_Receive_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_DMAPause(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_DMAResume(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_DMAStop(UART_HandleTypeDef *huart);

HAL_StatusTypeDef HAL_UART_Abort(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_AbortTransmit(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_AbortReceive(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_Abort_IT(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_AbortTransmit_IT(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_AbortReceive_IT(UART_HandleTypeDef *huart);

void HAL_UART_IRQHandler(UART_HandleTypeDef *huart);
void HAL_UART_TxHalfCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_RxHalfCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart);
void HAL_UART_AbortCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_AbortTransmitCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_AbortReceiveCpltCallback(UART_HandleTypeDef *huart);
# 1628 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_uart.h"
HAL_StatusTypeDef HAL_LIN_SendBreak(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_MultiProcessor_EnableMuteMode(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_MultiProcessor_DisableMuteMode(UART_HandleTypeDef *huart);
void HAL_MultiProcessor_EnterMuteMode(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_HalfDuplex_EnableTransmitter(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_HalfDuplex_EnableReceiver(UART_HandleTypeDef *huart);
# 1644 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_uart.h"
HAL_UART_StateTypeDef HAL_UART_GetState(UART_HandleTypeDef *huart);
uint32_t HAL_UART_GetError(UART_HandleTypeDef *huart);
# 1662 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_uart.h"
HAL_StatusTypeDef UART_SetConfig(UART_HandleTypeDef *huart);
HAL_StatusTypeDef UART_CheckIdleState(UART_HandleTypeDef *huart);
HAL_StatusTypeDef UART_WaitOnFlagUntilTimeout(UART_HandleTypeDef *huart, uint32_t Flag, FlagStatus Status,
                                              uint32_t Tickstart, uint32_t Timeout);
void UART_AdvFeatureConfig(UART_HandleTypeDef *huart);
# 51 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_usart.h" 1
# 47 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_usart.h"
typedef struct
{
  uint32_t BaudRate;







  uint32_t WordLength;


  uint32_t StopBits;


  uint32_t Parity;






  uint32_t Mode;


  uint32_t CLKPolarity;


  uint32_t CLKPhase;


  uint32_t CLKLastBit;




  uint32_t ClockPrescaler;


} USART_InitTypeDef;




typedef enum
{
  HAL_USART_STATE_RESET = 0x00U,
  HAL_USART_STATE_READY = 0x01U,
  HAL_USART_STATE_BUSY = 0x02U,
  HAL_USART_STATE_BUSY_TX = 0x12U,
  HAL_USART_STATE_BUSY_RX = 0x22U,
  HAL_USART_STATE_BUSY_TX_RX = 0x32U,
  HAL_USART_STATE_TIMEOUT = 0x03U,
  HAL_USART_STATE_ERROR = 0x04U
} HAL_USART_StateTypeDef;




typedef enum
{
  USART_CLOCKSOURCE_PCLK1 = 0x00U,
  USART_CLOCKSOURCE_PCLK2 = 0x01U,
  USART_CLOCKSOURCE_HSI = 0x02U,
  USART_CLOCKSOURCE_SYSCLK = 0x04U,
  USART_CLOCKSOURCE_LSE = 0x08U,
  USART_CLOCKSOURCE_UNDEFINED = 0x10U
} USART_ClockSourceTypeDef;




typedef struct __USART_HandleTypeDef
{
  USART_TypeDef *Instance;

  USART_InitTypeDef Init;

  uint8_t *pTxBuffPtr;

  uint16_t TxXferSize;

  volatile uint16_t TxXferCount;

  uint8_t *pRxBuffPtr;

  uint16_t RxXferSize;

  volatile uint16_t RxXferCount;

  uint16_t Mask;


  uint16_t NbRxDataToProcess;

  uint16_t NbTxDataToProcess;



  uint32_t SlaveMode;




  uint32_t FifoMode;



  void (*RxISR)(struct __USART_HandleTypeDef *husart);

  void (*TxISR)(struct __USART_HandleTypeDef *husart);

  DMA_HandleTypeDef *hdmatx;

  DMA_HandleTypeDef *hdmarx;

  HAL_LockTypeDef Lock;

  volatile HAL_USART_StateTypeDef State;

  volatile uint32_t ErrorCode;
# 187 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_usart.h"
} USART_HandleTypeDef;
# 871 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_usart.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_usart_ex.h" 1
# 380 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_usart_ex.h"
void HAL_USARTEx_RxFifoFullCallback(USART_HandleTypeDef *husart);
void HAL_USARTEx_TxFifoEmptyCallback(USART_HandleTypeDef *husart);
# 394 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_usart_ex.h"
HAL_StatusTypeDef HAL_USARTEx_EnableSlaveMode(USART_HandleTypeDef *husart);
HAL_StatusTypeDef HAL_USARTEx_DisableSlaveMode(USART_HandleTypeDef *husart);
HAL_StatusTypeDef HAL_USARTEx_ConfigNSS(USART_HandleTypeDef *husart, uint32_t NSSConfig);


HAL_StatusTypeDef HAL_USARTEx_EnableFifoMode(USART_HandleTypeDef *husart);
HAL_StatusTypeDef HAL_USARTEx_DisableFifoMode(USART_HandleTypeDef *husart);
HAL_StatusTypeDef HAL_USARTEx_SetTxFifoThreshold(USART_HandleTypeDef *husart, uint32_t Threshold);
HAL_StatusTypeDef HAL_USARTEx_SetRxFifoThreshold(USART_HandleTypeDef *husart, uint32_t Threshold);
# 872 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_usart.h" 2
# 883 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_usart.h"
HAL_StatusTypeDef HAL_USART_Init(USART_HandleTypeDef *husart);
HAL_StatusTypeDef HAL_USART_DeInit(USART_HandleTypeDef *husart);
void HAL_USART_MspInit(USART_HandleTypeDef *husart);
void HAL_USART_MspDeInit(USART_HandleTypeDef *husart);
# 904 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_usart.h"
HAL_StatusTypeDef HAL_USART_Transmit(USART_HandleTypeDef *husart, uint8_t *pTxData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_USART_Receive(USART_HandleTypeDef *husart, uint8_t *pRxData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_USART_TransmitReceive(USART_HandleTypeDef *husart, uint8_t *pTxData, uint8_t *pRxData,
                                            uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_USART_Transmit_IT(USART_HandleTypeDef *husart, uint8_t *pTxData, uint16_t Size);
HAL_StatusTypeDef HAL_USART_Receive_IT(USART_HandleTypeDef *husart, uint8_t *pRxData, uint16_t Size);
HAL_StatusTypeDef HAL_USART_TransmitReceive_IT(USART_HandleTypeDef *husart, uint8_t *pTxData, uint8_t *pRxData,
                                               uint16_t Size);
HAL_StatusTypeDef HAL_USART_Transmit_DMA(USART_HandleTypeDef *husart, uint8_t *pTxData, uint16_t Size);
HAL_StatusTypeDef HAL_USART_Receive_DMA(USART_HandleTypeDef *husart, uint8_t *pRxData, uint16_t Size);
HAL_StatusTypeDef HAL_USART_TransmitReceive_DMA(USART_HandleTypeDef *husart, uint8_t *pTxData, uint8_t *pRxData,
                                                uint16_t Size);
HAL_StatusTypeDef HAL_USART_DMAPause(USART_HandleTypeDef *husart);
HAL_StatusTypeDef HAL_USART_DMAResume(USART_HandleTypeDef *husart);
HAL_StatusTypeDef HAL_USART_DMAStop(USART_HandleTypeDef *husart);

HAL_StatusTypeDef HAL_USART_Abort(USART_HandleTypeDef *husart);
HAL_StatusTypeDef HAL_USART_Abort_IT(USART_HandleTypeDef *husart);

void HAL_USART_IRQHandler(USART_HandleTypeDef *husart);
void HAL_USART_TxHalfCpltCallback(USART_HandleTypeDef *husart);
void HAL_USART_TxCpltCallback(USART_HandleTypeDef *husart);
void HAL_USART_RxCpltCallback(USART_HandleTypeDef *husart);
void HAL_USART_RxHalfCpltCallback(USART_HandleTypeDef *husart);
void HAL_USART_TxRxCpltCallback(USART_HandleTypeDef *husart);
void HAL_USART_ErrorCallback(USART_HandleTypeDef *husart);
void HAL_USART_AbortCpltCallback(USART_HandleTypeDef *husart);
# 941 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_usart.h"
HAL_USART_StateTypeDef HAL_USART_GetState(USART_HandleTypeDef *husart);
uint32_t HAL_USART_GetError(USART_HandleTypeDef *husart);
# 52 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_wwdg.h" 1
# 48 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_wwdg.h"
typedef struct
{
  uint32_t Prescaler;


  uint32_t Window;


  uint32_t Counter;


  uint32_t EWIMode ;


} WWDG_InitTypeDef;




typedef struct __WWDG_HandleTypeDef
{
  WWDG_TypeDef *Instance;

  WWDG_InitTypeDef Init;






} WWDG_HandleTypeDef;
# 254 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_wwdg.h"
HAL_StatusTypeDef HAL_WWDG_Init(WWDG_HandleTypeDef *hwwdg);
void HAL_WWDG_MspInit(WWDG_HandleTypeDef *hwwdg);
# 270 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_wwdg.h"
HAL_StatusTypeDef HAL_WWDG_Refresh(WWDG_HandleTypeDef *hwwdg);
void HAL_WWDG_IRQHandler(WWDG_HandleTypeDef *hwwdg);
void HAL_WWDG_EarlyWakeupCallback(WWDG_HandleTypeDef *hwwdg);
# 53 "./boards/stm32l4xx_hal_conf_base.h" 2

# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sram.h" 1
# 31 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sram.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_fmc.h" 1
# 161 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_fmc.h"
typedef struct
{
  uint32_t NSBank;


  uint32_t DataAddressMux;



  uint32_t MemoryType;



  uint32_t MemoryDataWidth;


  uint32_t BurstAccessMode;



  uint32_t WaitSignalPolarity;



  uint32_t WaitSignalActive;




  uint32_t WriteOperation;


  uint32_t WaitSignal;



  uint32_t ExtendedMode;


  uint32_t AsynchronousWait;



  uint32_t WriteBurst;


  uint32_t ContinuousClock;




  uint32_t WriteFifo;





  uint32_t PageSize;



  uint32_t NBLSetupTime;



}FMC_NORSRAM_InitTypeDef;




typedef struct
{
  uint32_t AddressSetupTime;




  uint32_t AddressHoldTime;




  uint32_t DataSetupTime;






  uint32_t DataHoldTime;





  uint32_t BusTurnAroundDuration;




  uint32_t CLKDivision;




  uint32_t DataLatency;







  uint32_t AccessMode;

}FMC_NORSRAM_TimingTypeDef;






typedef struct
{
  uint32_t NandBank;


  uint32_t Waitfeature;


  uint32_t MemoryDataWidth;


  uint32_t EccComputation;


  uint32_t ECCPageSize;


  uint32_t TCLRSetupTime;



  uint32_t TARSetupTime;


}FMC_NAND_InitTypeDef;




typedef struct
{
  uint32_t SetupTime;





  uint32_t WaitSetupTime;





  uint32_t HoldSetupTime;






  uint32_t HiZSetupTime;




}FMC_NAND_PCC_TimingTypeDef;
# 773 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_fmc.h"
HAL_StatusTypeDef FMC_NORSRAM_Init(FMC_Bank1_TypeDef *Device, FMC_NORSRAM_InitTypeDef *Init);
HAL_StatusTypeDef FMC_NORSRAM_Timing_Init(FMC_Bank1_TypeDef *Device, FMC_NORSRAM_TimingTypeDef *Timing, uint32_t Bank);
HAL_StatusTypeDef FMC_NORSRAM_Extended_Timing_Init(FMC_Bank1E_TypeDef *Device, FMC_NORSRAM_TimingTypeDef *Timing, uint32_t Bank, uint32_t ExtendedMode);
HAL_StatusTypeDef FMC_NORSRAM_DeInit(FMC_Bank1_TypeDef *Device, FMC_Bank1E_TypeDef *ExDevice, uint32_t Bank);







HAL_StatusTypeDef FMC_NORSRAM_WriteOperation_Enable(FMC_Bank1_TypeDef *Device, uint32_t Bank);
HAL_StatusTypeDef FMC_NORSRAM_WriteOperation_Disable(FMC_Bank1_TypeDef *Device, uint32_t Bank);
# 801 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_ll_fmc.h"
HAL_StatusTypeDef FMC_NAND_Init(FMC_Bank3_TypeDef *Device, FMC_NAND_InitTypeDef *Init);
HAL_StatusTypeDef FMC_NAND_CommonSpace_Timing_Init(FMC_Bank3_TypeDef *Device, FMC_NAND_PCC_TimingTypeDef *Timing, uint32_t Bank);
HAL_StatusTypeDef FMC_NAND_AttributeSpace_Timing_Init(FMC_Bank3_TypeDef *Device, FMC_NAND_PCC_TimingTypeDef *Timing, uint32_t Bank);
HAL_StatusTypeDef FMC_NAND_DeInit(FMC_Bank3_TypeDef *Device, uint32_t Bank);







HAL_StatusTypeDef FMC_NAND_ECC_Enable(FMC_Bank3_TypeDef *Device, uint32_t Bank);
HAL_StatusTypeDef FMC_NAND_ECC_Disable(FMC_Bank3_TypeDef *Device, uint32_t Bank);
HAL_StatusTypeDef FMC_NAND_GetECC(FMC_Bank3_TypeDef *Device, uint32_t *ECCval, uint32_t Bank, uint32_t Timeout);
# 32 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sram.h" 2
# 48 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sram.h"
typedef enum
{
  HAL_SRAM_STATE_RESET = 0x00U,
  HAL_SRAM_STATE_READY = 0x01U,
  HAL_SRAM_STATE_BUSY = 0x02U,
  HAL_SRAM_STATE_ERROR = 0x03U,
  HAL_SRAM_STATE_PROTECTED = 0x04U
}HAL_SRAM_StateTypeDef;




typedef struct
{
  FMC_Bank1_TypeDef *Instance;

  FMC_Bank1E_TypeDef *Extended;

  FMC_NORSRAM_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  volatile HAL_SRAM_StateTypeDef State;

  DMA_HandleTypeDef *hdma;
}SRAM_HandleTypeDef;
# 106 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sram.h"
HAL_StatusTypeDef HAL_SRAM_Init(SRAM_HandleTypeDef *hsram, FMC_NORSRAM_TimingTypeDef *Timing, FMC_NORSRAM_TimingTypeDef *ExtTiming);
HAL_StatusTypeDef HAL_SRAM_DeInit(SRAM_HandleTypeDef *hsram);
void HAL_SRAM_MspInit(SRAM_HandleTypeDef *hsram);
void HAL_SRAM_MspDeInit(SRAM_HandleTypeDef *hsram);
# 120 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sram.h"
HAL_StatusTypeDef HAL_SRAM_Read_8b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint8_t *pDstBuffer, uint32_t BufferSize);
HAL_StatusTypeDef HAL_SRAM_Write_8b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint8_t *pSrcBuffer, uint32_t BufferSize);
HAL_StatusTypeDef HAL_SRAM_Read_16b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint16_t *pDstBuffer, uint32_t BufferSize);
HAL_StatusTypeDef HAL_SRAM_Write_16b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint16_t *pSrcBuffer, uint32_t BufferSize);
HAL_StatusTypeDef HAL_SRAM_Read_32b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint32_t *pDstBuffer, uint32_t BufferSize);
HAL_StatusTypeDef HAL_SRAM_Write_32b(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint32_t *pSrcBuffer, uint32_t BufferSize);
HAL_StatusTypeDef HAL_SRAM_Read_DMA(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint32_t *pDstBuffer, uint32_t BufferSize);
HAL_StatusTypeDef HAL_SRAM_Write_DMA(SRAM_HandleTypeDef *hsram, uint32_t *pAddress, uint32_t *pSrcBuffer, uint32_t BufferSize);

void HAL_SRAM_DMA_XferCpltCallback(DMA_HandleTypeDef *hdma);
void HAL_SRAM_DMA_XferErrorCallback(DMA_HandleTypeDef *hdma);
# 141 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sram.h"
HAL_StatusTypeDef HAL_SRAM_WriteOperation_Enable(SRAM_HandleTypeDef *hsram);
HAL_StatusTypeDef HAL_SRAM_WriteOperation_Disable(SRAM_HandleTypeDef *hsram);
# 153 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sram.h"
HAL_SRAM_StateTypeDef HAL_SRAM_GetState(SRAM_HandleTypeDef *hsram);
# 55 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ltdc.h" 1
# 55 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ltdc.h"
typedef struct
{
  uint8_t Blue;


  uint8_t Green;


  uint8_t Red;


  uint8_t Reserved;
} LTDC_ColorTypeDef;




typedef struct
{
  uint32_t HSPolarity;


  uint32_t VSPolarity;


  uint32_t DEPolarity;


  uint32_t PCPolarity;


  uint32_t HorizontalSync;


  uint32_t VerticalSync;


  uint32_t AccumulatedHBP;


  uint32_t AccumulatedVBP;


  uint32_t AccumulatedActiveW;


  uint32_t AccumulatedActiveH;


  uint32_t TotalWidth;


  uint32_t TotalHeigh;


  LTDC_ColorTypeDef Backcolor;
} LTDC_InitTypeDef;




typedef struct
{
  uint32_t WindowX0;


  uint32_t WindowX1;


  uint32_t WindowY0;


  uint32_t WindowY1;


  uint32_t PixelFormat;


  uint32_t Alpha;


  uint32_t Alpha0;


  uint32_t BlendingFactor1;


  uint32_t BlendingFactor2;


  uint32_t FBStartAdress;

  uint32_t ImageWidth;


  uint32_t ImageHeight;


  LTDC_ColorTypeDef Backcolor;
} LTDC_LayerCfgTypeDef;




typedef enum
{
  HAL_LTDC_STATE_RESET = 0x00U,
  HAL_LTDC_STATE_READY = 0x01U,
  HAL_LTDC_STATE_BUSY = 0x02U,
  HAL_LTDC_STATE_TIMEOUT = 0x03U,
  HAL_LTDC_STATE_ERROR = 0x04U
} HAL_LTDC_StateTypeDef;







typedef struct

{
  LTDC_TypeDef *Instance;

  LTDC_InitTypeDef Init;

  LTDC_LayerCfgTypeDef LayerCfg[2U];

  HAL_LockTypeDef Lock;

  volatile HAL_LTDC_StateTypeDef State;

  volatile uint32_t ErrorCode;
# 200 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ltdc.h"
} LTDC_HandleTypeDef;
# 536 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ltdc.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ltdc_ex.h" 1
# 33 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ltdc_ex.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dsi.h" 1
# 46 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dsi.h"
typedef struct
{
  uint32_t AutomaticClockLaneControl;


  uint32_t TXEscapeCkdiv;


  uint32_t NumberOfLanes;


} DSI_InitTypeDef;




typedef struct
{
  uint32_t PLLNDIV;


  uint32_t PLLIDF;


  uint32_t PLLODF;


} DSI_PLLInitTypeDef;




typedef struct
{
  uint32_t VirtualChannelID;

  uint32_t ColorCoding;


  uint32_t LooselyPacked;



  uint32_t Mode;


  uint32_t PacketSize;

  uint32_t NumberOfChunks;

  uint32_t NullPacketSize;

  uint32_t HSPolarity;


  uint32_t VSPolarity;


  uint32_t DEPolarity;


  uint32_t HorizontalSyncActive;

  uint32_t HorizontalBackPorch;

  uint32_t HorizontalLine;

  uint32_t VerticalSyncActive;

  uint32_t VerticalBackPorch;

  uint32_t VerticalFrontPorch;

  uint32_t VerticalActive;

  uint32_t LPCommandEnable;


  uint32_t LPLargestPacketSize;


  uint32_t LPVACTLargestPacketSize;


  uint32_t LPHorizontalFrontPorchEnable;


  uint32_t LPHorizontalBackPorchEnable;


  uint32_t LPVerticalActiveEnable;


  uint32_t LPVerticalFrontPorchEnable;


  uint32_t LPVerticalBackPorchEnable;


  uint32_t LPVerticalSyncActiveEnable;


  uint32_t FrameBTAAcknowledgeEnable;


} DSI_VidCfgTypeDef;




typedef struct
{
  uint32_t VirtualChannelID;

  uint32_t ColorCoding;


  uint32_t CommandSize;


  uint32_t TearingEffectSource;


  uint32_t TearingEffectPolarity;


  uint32_t HSPolarity;


  uint32_t VSPolarity;


  uint32_t DEPolarity;


  uint32_t VSyncPol;


  uint32_t AutomaticRefresh;


  uint32_t TEAcknowledgeRequest;


} DSI_CmdCfgTypeDef;




typedef struct
{
  uint32_t LPGenShortWriteNoP;


  uint32_t LPGenShortWriteOneP;


  uint32_t LPGenShortWriteTwoP;


  uint32_t LPGenShortReadNoP;


  uint32_t LPGenShortReadOneP;


  uint32_t LPGenShortReadTwoP;


  uint32_t LPGenLongWrite;


  uint32_t LPDcsShortWriteNoP;


  uint32_t LPDcsShortWriteOneP;


  uint32_t LPDcsShortReadNoP;


  uint32_t LPDcsLongWrite;


  uint32_t LPMaxReadPacket;


  uint32_t AcknowledgeRequest;


} DSI_LPCmdTypeDef;




typedef struct
{
  uint32_t ClockLaneHS2LPTime;


  uint32_t ClockLaneLP2HSTime;


  uint32_t DataLaneHS2LPTime;


  uint32_t DataLaneLP2HSTime;


  uint32_t DataLaneMaxReadTime;

  uint32_t StopWaitTime;


} DSI_PHY_TimerTypeDef;




typedef struct
{
  uint32_t TimeoutCkdiv;

  uint32_t HighSpeedTransmissionTimeout;

  uint32_t LowPowerReceptionTimeout;

  uint32_t HighSpeedReadTimeout;

  uint32_t LowPowerReadTimeout;

  uint32_t HighSpeedWriteTimeout;

  uint32_t HighSpeedWritePrespMode;


  uint32_t LowPowerWriteTimeout;

  uint32_t BTATimeout;

} DSI_HOST_TimeoutTypeDef;




typedef enum
{
  HAL_DSI_STATE_RESET = 0x00U,
  HAL_DSI_STATE_READY = 0x01U,
  HAL_DSI_STATE_ERROR = 0x02U,
  HAL_DSI_STATE_BUSY = 0x03U,
  HAL_DSI_STATE_TIMEOUT = 0x04U
} HAL_DSI_StateTypeDef;







typedef struct

{
  DSI_TypeDef *Instance;
  DSI_InitTypeDef Init;
  HAL_LockTypeDef Lock;
  volatile HAL_DSI_StateTypeDef State;
  volatile uint32_t ErrorCode;
  uint32_t ErrorMsk;
# 326 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dsi.h"
} DSI_HandleTypeDef;
# 1124 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dsi.h"
HAL_StatusTypeDef HAL_DSI_Init(DSI_HandleTypeDef *hdsi, DSI_PLLInitTypeDef *PLLInit);
HAL_StatusTypeDef HAL_DSI_DeInit(DSI_HandleTypeDef *hdsi);
void HAL_DSI_MspInit(DSI_HandleTypeDef *hdsi);
void HAL_DSI_MspDeInit(DSI_HandleTypeDef *hdsi);

void HAL_DSI_IRQHandler(DSI_HandleTypeDef *hdsi);
void HAL_DSI_TearingEffectCallback(DSI_HandleTypeDef *hdsi);
void HAL_DSI_EndOfRefreshCallback(DSI_HandleTypeDef *hdsi);
void HAL_DSI_ErrorCallback(DSI_HandleTypeDef *hdsi);
# 1141 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dsi.h"
HAL_StatusTypeDef HAL_DSI_SetGenericVCID(DSI_HandleTypeDef *hdsi, uint32_t VirtualChannelID);
HAL_StatusTypeDef HAL_DSI_ConfigVideoMode(DSI_HandleTypeDef *hdsi, DSI_VidCfgTypeDef *VidCfg);
HAL_StatusTypeDef HAL_DSI_ConfigAdaptedCommandMode(DSI_HandleTypeDef *hdsi, DSI_CmdCfgTypeDef *CmdCfg);
HAL_StatusTypeDef HAL_DSI_ConfigCommand(DSI_HandleTypeDef *hdsi, DSI_LPCmdTypeDef *LPCmd);
HAL_StatusTypeDef HAL_DSI_ConfigFlowControl(DSI_HandleTypeDef *hdsi, uint32_t FlowControl);
HAL_StatusTypeDef HAL_DSI_ConfigPhyTimer(DSI_HandleTypeDef *hdsi, DSI_PHY_TimerTypeDef *PhyTimers);
HAL_StatusTypeDef HAL_DSI_ConfigHostTimeouts(DSI_HandleTypeDef *hdsi, DSI_HOST_TimeoutTypeDef *HostTimeouts);
HAL_StatusTypeDef HAL_DSI_Start(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_Stop(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_Refresh(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_ColorMode(DSI_HandleTypeDef *hdsi, uint32_t ColorMode);
HAL_StatusTypeDef HAL_DSI_Shutdown(DSI_HandleTypeDef *hdsi, uint32_t Shutdown);
HAL_StatusTypeDef HAL_DSI_ShortWrite(DSI_HandleTypeDef *hdsi,
                                     uint32_t ChannelID,
                                     uint32_t Mode,
                                     uint32_t Param1,
                                     uint32_t Param2);
HAL_StatusTypeDef HAL_DSI_LongWrite(DSI_HandleTypeDef *hdsi,
                                    uint32_t ChannelID,
                                    uint32_t Mode,
                                    uint32_t NbParams,
                                    uint32_t Param1,
                                    uint8_t *ParametersTable);
HAL_StatusTypeDef HAL_DSI_Read(DSI_HandleTypeDef *hdsi,
                               uint32_t ChannelNbr,
                               uint8_t *Array,
                               uint32_t Size,
                               uint32_t Mode,
                               uint32_t DCSCmd,
                               uint8_t *ParametersTable);
HAL_StatusTypeDef HAL_DSI_EnterULPMData(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_ExitULPMData(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_EnterULPM(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_ExitULPM(DSI_HandleTypeDef *hdsi);

HAL_StatusTypeDef HAL_DSI_PatternGeneratorStart(DSI_HandleTypeDef *hdsi, uint32_t Mode, uint32_t Orientation);
HAL_StatusTypeDef HAL_DSI_PatternGeneratorStop(DSI_HandleTypeDef *hdsi);

HAL_StatusTypeDef HAL_DSI_SetSlewRateAndDelayTuning(DSI_HandleTypeDef *hdsi, uint32_t CommDelay, uint32_t Lane,
                                                    uint32_t Value);
HAL_StatusTypeDef HAL_DSI_SetLowPowerRXFilter(DSI_HandleTypeDef *hdsi, uint32_t Frequency);
HAL_StatusTypeDef HAL_DSI_SetSDD(DSI_HandleTypeDef *hdsi, FunctionalState State);
HAL_StatusTypeDef HAL_DSI_SetLanePinsConfiguration(DSI_HandleTypeDef *hdsi, uint32_t CustomLane, uint32_t Lane,
                                                   FunctionalState State);
HAL_StatusTypeDef HAL_DSI_SetPHYTimings(DSI_HandleTypeDef *hdsi, uint32_t Timing, FunctionalState State,
                                        uint32_t Value);
HAL_StatusTypeDef HAL_DSI_ForceTXStopMode(DSI_HandleTypeDef *hdsi, uint32_t Lane, FunctionalState State);
HAL_StatusTypeDef HAL_DSI_ForceRXLowPower(DSI_HandleTypeDef *hdsi, FunctionalState State);
HAL_StatusTypeDef HAL_DSI_ForceDataLanesInRX(DSI_HandleTypeDef *hdsi, FunctionalState State);
HAL_StatusTypeDef HAL_DSI_SetPullDown(DSI_HandleTypeDef *hdsi, FunctionalState State);
HAL_StatusTypeDef HAL_DSI_SetContentionDetectionOff(DSI_HandleTypeDef *hdsi, FunctionalState State);

uint32_t HAL_DSI_GetError(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_ConfigErrorMonitor(DSI_HandleTypeDef *hdsi, uint32_t ActiveErrors);
HAL_DSI_StateTypeDef HAL_DSI_GetState(DSI_HandleTypeDef *hdsi);
# 34 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ltdc_ex.h" 2
# 54 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ltdc_ex.h"
HAL_StatusTypeDef HAL_LTDCEx_StructInitFromVideoConfig(LTDC_HandleTypeDef *hltdc, DSI_VidCfgTypeDef *VidCfg);
HAL_StatusTypeDef HAL_LTDCEx_StructInitFromAdaptedCommandConfig(LTDC_HandleTypeDef *hltdc, DSI_CmdCfgTypeDef *CmdCfg);
# 537 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ltdc.h" 2
# 546 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ltdc.h"
HAL_StatusTypeDef HAL_LTDC_Init(LTDC_HandleTypeDef *hltdc);
HAL_StatusTypeDef HAL_LTDC_DeInit(LTDC_HandleTypeDef *hltdc);
void HAL_LTDC_MspInit(LTDC_HandleTypeDef *hltdc);
void HAL_LTDC_MspDeInit(LTDC_HandleTypeDef *hltdc);
void HAL_LTDC_ErrorCallback(LTDC_HandleTypeDef *hltdc);
void HAL_LTDC_LineEventCallback(LTDC_HandleTypeDef *hltdc);
void HAL_LTDC_ReloadEventCallback(LTDC_HandleTypeDef *hltdc);
# 568 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ltdc.h"
void HAL_LTDC_IRQHandler(LTDC_HandleTypeDef *hltdc);
# 577 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ltdc.h"
HAL_StatusTypeDef HAL_LTDC_ConfigLayer(LTDC_HandleTypeDef *hltdc, LTDC_LayerCfgTypeDef *pLayerCfg, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_SetWindowSize(LTDC_HandleTypeDef *hltdc, uint32_t XSize, uint32_t YSize, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_SetWindowPosition(LTDC_HandleTypeDef *hltdc, uint32_t X0, uint32_t Y0, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_SetPixelFormat(LTDC_HandleTypeDef *hltdc, uint32_t Pixelformat, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_SetAlpha(LTDC_HandleTypeDef *hltdc, uint32_t Alpha, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_SetAddress(LTDC_HandleTypeDef *hltdc, uint32_t Address, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_SetPitch(LTDC_HandleTypeDef *hltdc, uint32_t LinePitchInPixels, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_ConfigColorKeying(LTDC_HandleTypeDef *hltdc, uint32_t RGBValue, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_ConfigCLUT(LTDC_HandleTypeDef *hltdc, uint32_t *pCLUT, uint32_t CLUTSize, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_EnableColorKeying(LTDC_HandleTypeDef *hltdc, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_DisableColorKeying(LTDC_HandleTypeDef *hltdc, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_EnableCLUT(LTDC_HandleTypeDef *hltdc, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_DisableCLUT(LTDC_HandleTypeDef *hltdc, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_ProgramLineEvent(LTDC_HandleTypeDef *hltdc, uint32_t Line);
HAL_StatusTypeDef HAL_LTDC_EnableDither(LTDC_HandleTypeDef *hltdc);
HAL_StatusTypeDef HAL_LTDC_DisableDither(LTDC_HandleTypeDef *hltdc);
HAL_StatusTypeDef HAL_LTDC_Reload(LTDC_HandleTypeDef *hltdc, uint32_t ReloadType);
HAL_StatusTypeDef HAL_LTDC_ConfigLayer_NoReload(LTDC_HandleTypeDef *hltdc, LTDC_LayerCfgTypeDef *pLayerCfg, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_SetWindowSize_NoReload(LTDC_HandleTypeDef *hltdc, uint32_t XSize, uint32_t YSize, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_SetWindowPosition_NoReload(LTDC_HandleTypeDef *hltdc, uint32_t X0, uint32_t Y0, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_SetPixelFormat_NoReload(LTDC_HandleTypeDef *hltdc, uint32_t Pixelformat, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_SetAlpha_NoReload(LTDC_HandleTypeDef *hltdc, uint32_t Alpha, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_SetAddress_NoReload(LTDC_HandleTypeDef *hltdc, uint32_t Address, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_SetPitch_NoReload(LTDC_HandleTypeDef *hltdc, uint32_t LinePitchInPixels, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_ConfigColorKeying_NoReload(LTDC_HandleTypeDef *hltdc, uint32_t RGBValue, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_EnableColorKeying_NoReload(LTDC_HandleTypeDef *hltdc, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_DisableColorKeying_NoReload(LTDC_HandleTypeDef *hltdc, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_EnableCLUT_NoReload(LTDC_HandleTypeDef *hltdc, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_LTDC_DisableCLUT_NoReload(LTDC_HandleTypeDef *hltdc, uint32_t LayerIdx);
# 615 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ltdc.h"
HAL_LTDC_StateTypeDef HAL_LTDC_GetState(LTDC_HandleTypeDef *hltdc);
uint32_t HAL_LTDC_GetError(LTDC_HandleTypeDef *hltdc);
# 56 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_gfxmmu.h" 1
# 49 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_gfxmmu.h"
typedef enum
{
  HAL_GFXMMU_STATE_RESET = 0x00U,
  HAL_GFXMMU_STATE_READY = 0x01U,
}HAL_GFXMMU_StateTypeDef;




typedef struct
{
  uint32_t Buf0Address;
  uint32_t Buf1Address;
  uint32_t Buf2Address;
  uint32_t Buf3Address;
}GFXMMU_BuffersTypeDef;




typedef struct
{
  FunctionalState Activation;
  uint32_t UsedInterrupts;


}GFXMMU_InterruptsTypeDef;




typedef struct
{
  uint32_t BlocksPerLine;

  uint32_t DefaultValue;
  GFXMMU_BuffersTypeDef Buffers;
  GFXMMU_InterruptsTypeDef Interrupts;
}GFXMMU_InitTypeDef;







typedef struct

{
  GFXMMU_TypeDef *Instance;
  GFXMMU_InitTypeDef Init;
  HAL_GFXMMU_StateTypeDef State;
  volatile uint32_t ErrorCode;





}GFXMMU_HandleTypeDef;




typedef struct
{
  uint32_t LineNumber;

  uint32_t LineStatus;

  uint32_t FirstVisibleBlock;

  uint32_t LastVisibleBlock;

  int32_t LineOffset;



}GFXMMU_LutLineTypeDef;
# 239 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_gfxmmu.h"
HAL_StatusTypeDef HAL_GFXMMU_Init(GFXMMU_HandleTypeDef *hgfxmmu);
HAL_StatusTypeDef HAL_GFXMMU_DeInit(GFXMMU_HandleTypeDef *hgfxmmu);
void HAL_GFXMMU_MspInit(GFXMMU_HandleTypeDef *hgfxmmu);
void HAL_GFXMMU_MspDeInit(GFXMMU_HandleTypeDef *hgfxmmu);
# 259 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_gfxmmu.h"
HAL_StatusTypeDef HAL_GFXMMU_ConfigLut(GFXMMU_HandleTypeDef *hgfxmmu,
                                       uint32_t FirstLine,
                                       uint32_t LinesNumber,
                                       uint32_t Address);

HAL_StatusTypeDef HAL_GFXMMU_DisableLutLines(GFXMMU_HandleTypeDef *hgfxmmu,
                                             uint32_t FirstLine,
                                             uint32_t LinesNumber);

HAL_StatusTypeDef HAL_GFXMMU_ConfigLutLine(GFXMMU_HandleTypeDef *hgfxmmu, GFXMMU_LutLineTypeDef *lutLine);

HAL_StatusTypeDef HAL_GFXMMU_ModifyBuffers(GFXMMU_HandleTypeDef *hgfxmmu, GFXMMU_BuffersTypeDef *Buffers);

void HAL_GFXMMU_IRQHandler(GFXMMU_HandleTypeDef *hgfxmmu);

void HAL_GFXMMU_ErrorCallback(GFXMMU_HandleTypeDef *hgfxmmu);
# 283 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_gfxmmu.h"
HAL_GFXMMU_StateTypeDef HAL_GFXMMU_GetState(GFXMMU_HandleTypeDef *hgfxmmu);

uint32_t HAL_GFXMMU_GetError(GFXMMU_HandleTypeDef *hgfxmmu);
# 57 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma2d.h" 1
# 50 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma2d.h"
typedef struct
{
  uint32_t Blue;


  uint32_t Green;


  uint32_t Red;

} DMA2D_ColorTypeDef;




typedef struct
{
  uint32_t *pCLUT;

  uint32_t CLUTColorMode;


  uint32_t Size;

} DMA2D_CLUTCfgTypeDef;




typedef struct
{
  uint32_t Mode;


  uint32_t ColorMode;


  uint32_t OutputOffset;

  uint32_t AlphaInverted;


  uint32_t RedBlueSwap;





  uint32_t BytesSwap;




  uint32_t LineOffsetMode;



} DMA2D_InitTypeDef;





typedef struct
{
  uint32_t InputOffset;


  uint32_t InputColorMode;


  uint32_t AlphaMode;


  uint32_t InputAlpha;







  uint32_t AlphaInverted;


  uint32_t RedBlueSwap;



} DMA2D_LayerCfgTypeDef;




typedef enum
{
  HAL_DMA2D_STATE_RESET = 0x00U,
  HAL_DMA2D_STATE_READY = 0x01U,
  HAL_DMA2D_STATE_BUSY = 0x02U,
  HAL_DMA2D_STATE_TIMEOUT = 0x03U,
  HAL_DMA2D_STATE_ERROR = 0x04U,
  HAL_DMA2D_STATE_SUSPEND = 0x05U
}HAL_DMA2D_StateTypeDef;




typedef struct __DMA2D_HandleTypeDef
{
  DMA2D_TypeDef *Instance;

  DMA2D_InitTypeDef Init;

  void (* XferCpltCallback)(struct __DMA2D_HandleTypeDef * hdma2d);

  void (* XferErrorCallback)(struct __DMA2D_HandleTypeDef * hdma2d);
# 178 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma2d.h"
  DMA2D_LayerCfgTypeDef LayerCfg[2U];

  HAL_LockTypeDef Lock;

  volatile HAL_DMA2D_StateTypeDef State;

  volatile uint32_t ErrorCode;
} DMA2D_HandleTypeDef;
# 497 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma2d.h"
HAL_StatusTypeDef HAL_DMA2D_Init(DMA2D_HandleTypeDef *hdma2d);
HAL_StatusTypeDef HAL_DMA2D_DeInit (DMA2D_HandleTypeDef *hdma2d);
void HAL_DMA2D_MspInit(DMA2D_HandleTypeDef* hdma2d);
void HAL_DMA2D_MspDeInit(DMA2D_HandleTypeDef* hdma2d);
# 517 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma2d.h"
HAL_StatusTypeDef HAL_DMA2D_Start(DMA2D_HandleTypeDef *hdma2d, uint32_t pdata, uint32_t DstAddress, uint32_t Width, uint32_t Height);
HAL_StatusTypeDef HAL_DMA2D_BlendingStart(DMA2D_HandleTypeDef *hdma2d, uint32_t SrcAddress1, uint32_t SrcAddress2, uint32_t DstAddress, uint32_t Width, uint32_t Height);
HAL_StatusTypeDef HAL_DMA2D_Start_IT(DMA2D_HandleTypeDef *hdma2d, uint32_t pdata, uint32_t DstAddress, uint32_t Width, uint32_t Height);
HAL_StatusTypeDef HAL_DMA2D_BlendingStart_IT(DMA2D_HandleTypeDef *hdma2d, uint32_t SrcAddress1, uint32_t SrcAddress2, uint32_t DstAddress, uint32_t Width, uint32_t Height);
HAL_StatusTypeDef HAL_DMA2D_Suspend(DMA2D_HandleTypeDef *hdma2d);
HAL_StatusTypeDef HAL_DMA2D_Resume(DMA2D_HandleTypeDef *hdma2d);
HAL_StatusTypeDef HAL_DMA2D_Abort(DMA2D_HandleTypeDef *hdma2d);
HAL_StatusTypeDef HAL_DMA2D_EnableCLUT(DMA2D_HandleTypeDef *hdma2d, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_CLUTLoad(DMA2D_HandleTypeDef *hdma2d, DMA2D_CLUTCfgTypeDef CLUTCfg, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_CLUTLoad_IT(DMA2D_HandleTypeDef *hdma2d, DMA2D_CLUTCfgTypeDef CLUTCfg, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_CLUTLoading_Abort(DMA2D_HandleTypeDef *hdma2d, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_CLUTLoading_Suspend(DMA2D_HandleTypeDef *hdma2d, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_CLUTLoading_Resume(DMA2D_HandleTypeDef *hdma2d, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_PollForTransfer(DMA2D_HandleTypeDef *hdma2d, uint32_t Timeout);
void HAL_DMA2D_IRQHandler(DMA2D_HandleTypeDef *hdma2d);
void HAL_DMA2D_LineEventCallback(DMA2D_HandleTypeDef *hdma2d);
void HAL_DMA2D_CLUTLoadingCpltCallback(DMA2D_HandleTypeDef *hdma2d);
# 544 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma2d.h"
HAL_StatusTypeDef HAL_DMA2D_ConfigLayer(DMA2D_HandleTypeDef *hdma2d, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_ConfigCLUT(DMA2D_HandleTypeDef *hdma2d, DMA2D_CLUTCfgTypeDef CLUTCfg, uint32_t LayerIdx);
HAL_StatusTypeDef HAL_DMA2D_ProgramLineEvent(DMA2D_HandleTypeDef *hdma2d, uint32_t Line);
HAL_StatusTypeDef HAL_DMA2D_EnableDeadTime(DMA2D_HandleTypeDef *hdma2d);
HAL_StatusTypeDef HAL_DMA2D_DisableDeadTime(DMA2D_HandleTypeDef *hdma2d);
HAL_StatusTypeDef HAL_DMA2D_ConfigDeadTime(DMA2D_HandleTypeDef *hdma2d, uint8_t DeadTime);
# 560 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dma2d.h"
HAL_DMA2D_StateTypeDef HAL_DMA2D_GetState(DMA2D_HandleTypeDef *hdma2d);
uint32_t HAL_DMA2D_GetError(DMA2D_HandleTypeDef *hdma2d);
# 58 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sai.h" 1
# 49 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sai.h"
typedef enum
{
  HAL_SAI_STATE_RESET = 0x00U,
  HAL_SAI_STATE_READY = 0x01U,
  HAL_SAI_STATE_BUSY = 0x02U,
  HAL_SAI_STATE_BUSY_TX = 0x12U,
  HAL_SAI_STATE_BUSY_RX = 0x22U,
} HAL_SAI_StateTypeDef;




typedef void (*SAIcallback)(void);






typedef struct
{
  FunctionalState Activation;
  uint32_t MicPairsNbr;

  uint32_t ClockEnable;

} SAI_PdmInitTypeDef;
# 85 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sai.h"
typedef struct
{
  uint32_t AudioMode;


  uint32_t Synchro;


  uint32_t SynchroExt;





  uint32_t OutputDrive;




  uint32_t NoDivider;
# 120 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sai.h"
  uint32_t FIFOThreshold;


  uint32_t AudioFrequency;


  uint32_t Mckdiv;






  uint32_t MckOverSampling;



  uint32_t MonoStereoMode;


  uint32_t CompandingMode;


  uint32_t TriState;



  SAI_PdmInitTypeDef PdmInit;





  uint32_t Protocol;


  uint32_t DataSize;


  uint32_t FirstBit;


  uint32_t ClockStrobing;

} SAI_InitTypeDef;
# 173 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sai.h"
typedef struct
{

  uint32_t FrameLength;





  uint32_t ActiveFrameLength;




  uint32_t FSDefinition;


  uint32_t FSPolarity;


  uint32_t FSOffset;


} SAI_FrameInitTypeDef;
# 205 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sai.h"
typedef struct
{
  uint32_t FirstBitOffset;


  uint32_t SlotSize;


  uint32_t SlotNumber;


  uint32_t SlotActive;

} SAI_SlotInitTypeDef;
# 227 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sai.h"
typedef struct __SAI_HandleTypeDef
{
  SAI_Block_TypeDef *Instance;

  SAI_InitTypeDef Init;

  SAI_FrameInitTypeDef FrameInit;

  SAI_SlotInitTypeDef SlotInit;

  uint8_t *pBuffPtr;

  uint16_t XferSize;

  uint16_t XferCount;

  DMA_HandleTypeDef *hdmatx;

  DMA_HandleTypeDef *hdmarx;

  SAIcallback mutecallback;

  void (*InterruptServiceRoutine)(struct __SAI_HandleTypeDef *hsai);

  HAL_LockTypeDef Lock;

  volatile HAL_SAI_StateTypeDef State;

  volatile uint32_t ErrorCode;
# 266 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sai.h"
} SAI_HandleTypeDef;
# 748 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sai.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sai_ex.h" 1
# 49 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sai_ex.h"
typedef struct
{
  uint32_t MicPair;


  uint32_t LeftDelay;


  uint32_t RightDelay;

} SAIEx_PdmMicDelayParamTypeDef;
# 75 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sai_ex.h"
HAL_StatusTypeDef HAL_SAIEx_ConfigPdmMicDelay(SAI_HandleTypeDef *hsai, SAIEx_PdmMicDelayParamTypeDef *pdmMicDelay);
# 749 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sai.h" 2
# 760 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sai.h"
HAL_StatusTypeDef HAL_SAI_InitProtocol(SAI_HandleTypeDef *hsai, uint32_t protocol, uint32_t datasize, uint32_t nbslot);
HAL_StatusTypeDef HAL_SAI_Init(SAI_HandleTypeDef *hsai);
HAL_StatusTypeDef HAL_SAI_DeInit(SAI_HandleTypeDef *hsai);
void HAL_SAI_MspInit(SAI_HandleTypeDef *hsai);
void HAL_SAI_MspDeInit(SAI_HandleTypeDef *hsai);
# 783 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sai.h"
HAL_StatusTypeDef HAL_SAI_Transmit(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_SAI_Receive(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size, uint32_t Timeout);


HAL_StatusTypeDef HAL_SAI_Transmit_IT(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SAI_Receive_IT(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size);


HAL_StatusTypeDef HAL_SAI_Transmit_DMA(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SAI_Receive_DMA(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SAI_DMAPause(SAI_HandleTypeDef *hsai);
HAL_StatusTypeDef HAL_SAI_DMAResume(SAI_HandleTypeDef *hsai);
HAL_StatusTypeDef HAL_SAI_DMAStop(SAI_HandleTypeDef *hsai);


HAL_StatusTypeDef HAL_SAI_Abort(SAI_HandleTypeDef *hsai);


HAL_StatusTypeDef HAL_SAI_EnableTxMuteMode(SAI_HandleTypeDef *hsai, uint16_t val);
HAL_StatusTypeDef HAL_SAI_DisableTxMuteMode(SAI_HandleTypeDef *hsai);
HAL_StatusTypeDef HAL_SAI_EnableRxMuteMode(SAI_HandleTypeDef *hsai, SAIcallback callback, uint16_t counter);
HAL_StatusTypeDef HAL_SAI_DisableRxMuteMode(SAI_HandleTypeDef *hsai);


void HAL_SAI_IRQHandler(SAI_HandleTypeDef *hsai);
void HAL_SAI_TxHalfCpltCallback(SAI_HandleTypeDef *hsai);
void HAL_SAI_TxCpltCallback(SAI_HandleTypeDef *hsai);
void HAL_SAI_RxHalfCpltCallback(SAI_HandleTypeDef *hsai);
void HAL_SAI_RxCpltCallback(SAI_HandleTypeDef *hsai);
void HAL_SAI_ErrorCallback(SAI_HandleTypeDef *hsai);
# 821 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_sai.h"
HAL_SAI_StateTypeDef HAL_SAI_GetState(SAI_HandleTypeDef *hsai);
uint32_t HAL_SAI_GetError(SAI_HandleTypeDef *hsai);
# 59 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dfsdm.h" 1
# 52 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dfsdm.h"
typedef enum
{
  HAL_DFSDM_CHANNEL_STATE_RESET = 0x00U,
  HAL_DFSDM_CHANNEL_STATE_READY = 0x01U,
  HAL_DFSDM_CHANNEL_STATE_ERROR = 0xFFU
} HAL_DFSDM_Channel_StateTypeDef;




typedef struct
{
  FunctionalState Activation;
  uint32_t Selection;

  uint32_t Divider;

} DFSDM_Channel_OutputClockTypeDef;




typedef struct
{
  uint32_t Multiplexer;




  uint32_t DataPacking;

  uint32_t Pins;

} DFSDM_Channel_InputTypeDef;




typedef struct
{
  uint32_t Type;

  uint32_t SpiClock;

} DFSDM_Channel_SerialInterfaceTypeDef;




typedef struct
{
  uint32_t FilterOrder;

  uint32_t Oversampling;

} DFSDM_Channel_AwdTypeDef;




typedef struct
{
  DFSDM_Channel_OutputClockTypeDef OutputClock;
  DFSDM_Channel_InputTypeDef Input;
  DFSDM_Channel_SerialInterfaceTypeDef SerialInterface;
  DFSDM_Channel_AwdTypeDef Awd;
  int32_t Offset;

  uint32_t RightBitShift;

} DFSDM_Channel_InitTypeDef;







typedef struct

{
  DFSDM_Channel_TypeDef *Instance;
  DFSDM_Channel_InitTypeDef Init;
  HAL_DFSDM_Channel_StateTypeDef State;






} DFSDM_Channel_HandleTypeDef;
# 165 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dfsdm.h"
typedef enum
{
  HAL_DFSDM_FILTER_STATE_RESET = 0x00U,
  HAL_DFSDM_FILTER_STATE_READY = 0x01U,
  HAL_DFSDM_FILTER_STATE_REG = 0x02U,
  HAL_DFSDM_FILTER_STATE_INJ = 0x03U,
  HAL_DFSDM_FILTER_STATE_REG_INJ = 0x04U,
  HAL_DFSDM_FILTER_STATE_ERROR = 0xFFU
} HAL_DFSDM_Filter_StateTypeDef;




typedef struct
{
  uint32_t Trigger;

  FunctionalState FastMode;
  FunctionalState DmaMode;
} DFSDM_Filter_RegularParamTypeDef;




typedef struct
{
  uint32_t Trigger;

  FunctionalState ScanMode;
  FunctionalState DmaMode;
  uint32_t ExtTrigger;

  uint32_t ExtTriggerEdge;

} DFSDM_Filter_InjectedParamTypeDef;




typedef struct
{
  uint32_t SincOrder;

  uint32_t Oversampling;

  uint32_t IntOversampling;

} DFSDM_Filter_FilterParamTypeDef;




typedef struct
{
  DFSDM_Filter_RegularParamTypeDef RegularParam;
  DFSDM_Filter_InjectedParamTypeDef InjectedParam;
  DFSDM_Filter_FilterParamTypeDef FilterParam;
} DFSDM_Filter_InitTypeDef;







typedef struct

{
  DFSDM_Filter_TypeDef *Instance;
  DFSDM_Filter_InitTypeDef Init;
  DMA_HandleTypeDef *hdmaReg;
  DMA_HandleTypeDef *hdmaInj;
  uint32_t RegularContMode;
  uint32_t RegularTrigger;
  uint32_t InjectedTrigger;
  uint32_t ExtTriggerEdge;
  FunctionalState InjectedScanMode;
  uint32_t InjectedChannelsNbr;
  uint32_t InjConvRemaining;
  HAL_DFSDM_Filter_StateTypeDef State;
  uint32_t ErrorCode;
# 257 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dfsdm.h"
} DFSDM_Filter_HandleTypeDef;




typedef struct
{
  uint32_t DataSource;

  uint32_t Channel;

  int32_t HighThreshold;

  int32_t LowThreshold;

  uint32_t HighBreakSignal;

  uint32_t LowBreakSignal;

} DFSDM_Filter_AwdParamTypeDef;
# 590 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dfsdm.h"
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dfsdm_ex.h" 1
# 54 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dfsdm_ex.h"
HAL_StatusTypeDef HAL_DFDSMEx_ChannelSetPulsesSkipping(DFSDM_Channel_HandleTypeDef *hdfsdm_channel, uint32_t PulsesValue);
HAL_StatusTypeDef HAL_DFDSMEx_ChannelGetPulsesSkipping(DFSDM_Channel_HandleTypeDef *hdfsdm_channel, uint32_t *PulsesValue);
# 591 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dfsdm.h" 2
# 602 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dfsdm.h"
HAL_StatusTypeDef HAL_DFSDM_ChannelInit(DFSDM_Channel_HandleTypeDef *hdfsdm_channel);
HAL_StatusTypeDef HAL_DFSDM_ChannelDeInit(DFSDM_Channel_HandleTypeDef *hdfsdm_channel);
void HAL_DFSDM_ChannelMspInit(DFSDM_Channel_HandleTypeDef *hdfsdm_channel);
void HAL_DFSDM_ChannelMspDeInit(DFSDM_Channel_HandleTypeDef *hdfsdm_channel);
# 623 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dfsdm.h"
HAL_StatusTypeDef HAL_DFSDM_ChannelCkabStart(DFSDM_Channel_HandleTypeDef *hdfsdm_channel);
HAL_StatusTypeDef HAL_DFSDM_ChannelCkabStart_IT(DFSDM_Channel_HandleTypeDef *hdfsdm_channel);
HAL_StatusTypeDef HAL_DFSDM_ChannelCkabStop(DFSDM_Channel_HandleTypeDef *hdfsdm_channel);
HAL_StatusTypeDef HAL_DFSDM_ChannelCkabStop_IT(DFSDM_Channel_HandleTypeDef *hdfsdm_channel);

HAL_StatusTypeDef HAL_DFSDM_ChannelScdStart(DFSDM_Channel_HandleTypeDef *hdfsdm_channel, uint32_t Threshold, uint32_t BreakSignal);
HAL_StatusTypeDef HAL_DFSDM_ChannelScdStart_IT(DFSDM_Channel_HandleTypeDef *hdfsdm_channel, uint32_t Threshold, uint32_t BreakSignal);
HAL_StatusTypeDef HAL_DFSDM_ChannelScdStop(DFSDM_Channel_HandleTypeDef *hdfsdm_channel);
HAL_StatusTypeDef HAL_DFSDM_ChannelScdStop_IT(DFSDM_Channel_HandleTypeDef *hdfsdm_channel);

int16_t HAL_DFSDM_ChannelGetAwdValue(DFSDM_Channel_HandleTypeDef *hdfsdm_channel);
HAL_StatusTypeDef HAL_DFSDM_ChannelModifyOffset(DFSDM_Channel_HandleTypeDef *hdfsdm_channel, int32_t Offset);

HAL_StatusTypeDef HAL_DFSDM_ChannelPollForCkab(DFSDM_Channel_HandleTypeDef *hdfsdm_channel, uint32_t Timeout);
HAL_StatusTypeDef HAL_DFSDM_ChannelPollForScd(DFSDM_Channel_HandleTypeDef *hdfsdm_channel, uint32_t Timeout);

void HAL_DFSDM_ChannelCkabCallback(DFSDM_Channel_HandleTypeDef *hdfsdm_channel);
void HAL_DFSDM_ChannelScdCallback(DFSDM_Channel_HandleTypeDef *hdfsdm_channel);
# 649 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dfsdm.h"
HAL_DFSDM_Channel_StateTypeDef HAL_DFSDM_ChannelGetState(DFSDM_Channel_HandleTypeDef *hdfsdm_channel);
# 658 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dfsdm.h"
HAL_StatusTypeDef HAL_DFSDM_FilterInit(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
HAL_StatusTypeDef HAL_DFSDM_FilterDeInit(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
void HAL_DFSDM_FilterMspInit(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
void HAL_DFSDM_FilterMspDeInit(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
# 682 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dfsdm.h"
HAL_StatusTypeDef HAL_DFSDM_FilterConfigRegChannel(DFSDM_Filter_HandleTypeDef *hdfsdm_filter,
                                                   uint32_t Channel,
                                                   uint32_t ContinuousMode);
HAL_StatusTypeDef HAL_DFSDM_FilterConfigInjChannel(DFSDM_Filter_HandleTypeDef *hdfsdm_filter,
                                                   uint32_t Channel);
# 695 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dfsdm.h"
HAL_StatusTypeDef HAL_DFSDM_FilterRegularStart(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
HAL_StatusTypeDef HAL_DFSDM_FilterRegularStart_IT(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
HAL_StatusTypeDef HAL_DFSDM_FilterRegularStart_DMA(DFSDM_Filter_HandleTypeDef *hdfsdm_filter, int32_t *pData, uint32_t Length);
HAL_StatusTypeDef HAL_DFSDM_FilterRegularMsbStart_DMA(DFSDM_Filter_HandleTypeDef *hdfsdm_filter, int16_t *pData, uint32_t Length);
HAL_StatusTypeDef HAL_DFSDM_FilterRegularStop(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
HAL_StatusTypeDef HAL_DFSDM_FilterRegularStop_IT(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
HAL_StatusTypeDef HAL_DFSDM_FilterRegularStop_DMA(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
HAL_StatusTypeDef HAL_DFSDM_FilterInjectedStart(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
HAL_StatusTypeDef HAL_DFSDM_FilterInjectedStart_IT(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
HAL_StatusTypeDef HAL_DFSDM_FilterInjectedStart_DMA(DFSDM_Filter_HandleTypeDef *hdfsdm_filter, int32_t *pData, uint32_t Length);
HAL_StatusTypeDef HAL_DFSDM_FilterInjectedMsbStart_DMA(DFSDM_Filter_HandleTypeDef *hdfsdm_filter, int16_t *pData, uint32_t Length);
HAL_StatusTypeDef HAL_DFSDM_FilterInjectedStop(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
HAL_StatusTypeDef HAL_DFSDM_FilterInjectedStop_IT(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
HAL_StatusTypeDef HAL_DFSDM_FilterInjectedStop_DMA(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
HAL_StatusTypeDef HAL_DFSDM_FilterAwdStart_IT(DFSDM_Filter_HandleTypeDef *hdfsdm_filter,
                                              DFSDM_Filter_AwdParamTypeDef *awdParam);
HAL_StatusTypeDef HAL_DFSDM_FilterAwdStop_IT(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
HAL_StatusTypeDef HAL_DFSDM_FilterExdStart(DFSDM_Filter_HandleTypeDef *hdfsdm_filter, uint32_t Channel);
HAL_StatusTypeDef HAL_DFSDM_FilterExdStop(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);

int32_t HAL_DFSDM_FilterGetRegularValue(DFSDM_Filter_HandleTypeDef *hdfsdm_filter, uint32_t *Channel);
int32_t HAL_DFSDM_FilterGetInjectedValue(DFSDM_Filter_HandleTypeDef *hdfsdm_filter, uint32_t *Channel);
int32_t HAL_DFSDM_FilterGetExdMaxValue(DFSDM_Filter_HandleTypeDef *hdfsdm_filter, uint32_t *Channel);
int32_t HAL_DFSDM_FilterGetExdMinValue(DFSDM_Filter_HandleTypeDef *hdfsdm_filter, uint32_t *Channel);
uint32_t HAL_DFSDM_FilterGetConvTimeValue(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);

void HAL_DFSDM_IRQHandler(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);

HAL_StatusTypeDef HAL_DFSDM_FilterPollForRegConversion(DFSDM_Filter_HandleTypeDef *hdfsdm_filter, uint32_t Timeout);
HAL_StatusTypeDef HAL_DFSDM_FilterPollForInjConversion(DFSDM_Filter_HandleTypeDef *hdfsdm_filter, uint32_t Timeout);

void HAL_DFSDM_FilterRegConvCpltCallback(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
void HAL_DFSDM_FilterRegConvHalfCpltCallback(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
void HAL_DFSDM_FilterInjConvCpltCallback(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
void HAL_DFSDM_FilterInjConvHalfCpltCallback(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
void HAL_DFSDM_FilterAwdCallback(DFSDM_Filter_HandleTypeDef *hdfsdm_filter, uint32_t Channel, uint32_t Threshold);
void HAL_DFSDM_FilterErrorCallback(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
# 740 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dfsdm.h"
HAL_DFSDM_Filter_StateTypeDef HAL_DFSDM_FilterGetState(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
uint32_t HAL_DFSDM_FilterGetError(DFSDM_Filter_HandleTypeDef *hdfsdm_filter);
# 60 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ospi.h" 1
# 49 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ospi.h"
typedef struct
{
  uint32_t FifoThreshold;



  uint32_t DualQuad;


  uint32_t MemoryType;

  uint32_t DeviceSize;



  uint32_t ChipSelectHighTime;


  uint32_t FreeRunningClock;

  uint32_t ClockMode;

  uint32_t WrapSize;

  uint32_t ClockPrescaler;


  uint32_t SampleShifting;


  uint32_t DelayHoldQuarterCycle;

  uint32_t ChipSelectBoundary;


}OSPI_InitTypeDef;




typedef struct __OSPI_HandleTypeDef
{
  OCTOSPI_TypeDef *Instance;
  OSPI_InitTypeDef Init;
  uint8_t *pBuffPtr;
  volatile uint32_t XferSize;
  volatile uint32_t XferCount;
  DMA_HandleTypeDef *hdma;
  volatile uint32_t State;
  volatile uint32_t ErrorCode;
  uint32_t Timeout;
# 115 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ospi.h"
}OSPI_HandleTypeDef;




typedef struct
{
  uint32_t OperationType;



  uint32_t FlashId;


  uint32_t Instruction;

  uint32_t InstructionMode;

  uint32_t InstructionSize;

  uint32_t InstructionDtrMode;

  uint32_t Address;

  uint32_t AddressMode;

  uint32_t AddressSize;

  uint32_t AddressDtrMode;

  uint32_t AlternateBytes;

  uint32_t AlternateBytesMode;

  uint32_t AlternateBytesSize;

  uint32_t AlternateBytesDtrMode;

  uint32_t DataMode;

  uint32_t NbData;


  uint32_t DataDtrMode;

  uint32_t DummyCycles;

  uint32_t DQSMode;

  uint32_t SIOOMode;

}OSPI_RegularCmdTypeDef;




typedef struct
{
  uint32_t RWRecoveryTime;

  uint32_t AccessTime;

  uint32_t WriteZeroLatency;

  uint32_t LatencyMode;

}OSPI_HyperbusCfgTypeDef;




typedef struct
{
  uint32_t AddressSpace;

  uint32_t Address;

  uint32_t AddressSize;

  uint32_t NbData;



  uint32_t DQSMode;

}OSPI_HyperbusCmdTypeDef;




typedef struct
{
  uint32_t Match;

  uint32_t Mask;

  uint32_t MatchMode;

  uint32_t AutomaticStop;

  uint32_t Interval;

}OSPI_AutoPollingTypeDef;




typedef struct
{
  uint32_t TimeOutActivation;

  uint32_t TimeOutPeriod;

}OSPI_MemoryMappedTypeDef;




typedef struct
{
  uint32_t ClkPort;

  uint32_t DQSPort;

  uint32_t NCSPort;

  uint32_t IOLowPort;

  uint32_t IOHighPort;

}OSPIM_CfgTypeDef;
# 754 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ospi.h"
HAL_StatusTypeDef HAL_OSPI_Init (OSPI_HandleTypeDef *hospi);
void HAL_OSPI_MspInit (OSPI_HandleTypeDef *hospi);
HAL_StatusTypeDef HAL_OSPI_DeInit (OSPI_HandleTypeDef *hospi);
void HAL_OSPI_MspDeInit (OSPI_HandleTypeDef *hospi);
# 768 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ospi.h"
void HAL_OSPI_IRQHandler (OSPI_HandleTypeDef *hospi);


HAL_StatusTypeDef HAL_OSPI_Command (OSPI_HandleTypeDef *hospi, OSPI_RegularCmdTypeDef *cmd, uint32_t Timeout);
HAL_StatusTypeDef HAL_OSPI_Command_IT (OSPI_HandleTypeDef *hospi, OSPI_RegularCmdTypeDef *cmd);
HAL_StatusTypeDef HAL_OSPI_HyperbusCfg (OSPI_HandleTypeDef *hospi, OSPI_HyperbusCfgTypeDef *cfg, uint32_t Timeout);
HAL_StatusTypeDef HAL_OSPI_HyperbusCmd (OSPI_HandleTypeDef *hospi, OSPI_HyperbusCmdTypeDef *cmd, uint32_t Timeout);


HAL_StatusTypeDef HAL_OSPI_Transmit (OSPI_HandleTypeDef *hospi, uint8_t *pData, uint32_t Timeout);
HAL_StatusTypeDef HAL_OSPI_Receive (OSPI_HandleTypeDef *hospi, uint8_t *pData, uint32_t Timeout);
HAL_StatusTypeDef HAL_OSPI_Transmit_IT (OSPI_HandleTypeDef *hospi, uint8_t *pData);
HAL_StatusTypeDef HAL_OSPI_Receive_IT (OSPI_HandleTypeDef *hospi, uint8_t *pData);
HAL_StatusTypeDef HAL_OSPI_Transmit_DMA (OSPI_HandleTypeDef *hospi, uint8_t *pData);
HAL_StatusTypeDef HAL_OSPI_Receive_DMA (OSPI_HandleTypeDef *hospi, uint8_t *pData);


HAL_StatusTypeDef HAL_OSPI_AutoPolling (OSPI_HandleTypeDef *hospi, OSPI_AutoPollingTypeDef *cfg, uint32_t Timeout);
HAL_StatusTypeDef HAL_OSPI_AutoPolling_IT (OSPI_HandleTypeDef *hospi, OSPI_AutoPollingTypeDef *cfg);


HAL_StatusTypeDef HAL_OSPI_MemoryMapped (OSPI_HandleTypeDef *hospi, OSPI_MemoryMappedTypeDef *cfg);


void HAL_OSPI_ErrorCallback (OSPI_HandleTypeDef *hospi);
void HAL_OSPI_AbortCpltCallback (OSPI_HandleTypeDef *hospi);
void HAL_OSPI_FifoThresholdCallback(OSPI_HandleTypeDef *hospi);


void HAL_OSPI_CmdCpltCallback (OSPI_HandleTypeDef *hospi);
void HAL_OSPI_RxCpltCallback (OSPI_HandleTypeDef *hospi);
void HAL_OSPI_TxCpltCallback (OSPI_HandleTypeDef *hospi);
void HAL_OSPI_RxHalfCpltCallback (OSPI_HandleTypeDef *hospi);
void HAL_OSPI_TxHalfCpltCallback (OSPI_HandleTypeDef *hospi);


void HAL_OSPI_StatusMatchCallback (OSPI_HandleTypeDef *hospi);


void HAL_OSPI_TimeOutCallback (OSPI_HandleTypeDef *hospi);
# 822 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ospi.h"
HAL_StatusTypeDef HAL_OSPI_Abort (OSPI_HandleTypeDef *hospi);
HAL_StatusTypeDef HAL_OSPI_Abort_IT (OSPI_HandleTypeDef *hospi);
HAL_StatusTypeDef HAL_OSPI_SetFifoThreshold (OSPI_HandleTypeDef *hospi, uint32_t Threshold);
uint32_t HAL_OSPI_GetFifoThreshold (OSPI_HandleTypeDef *hospi);
HAL_StatusTypeDef HAL_OSPI_SetTimeout (OSPI_HandleTypeDef *hospi, uint32_t Timeout);
uint32_t HAL_OSPI_GetError (OSPI_HandleTypeDef *hospi);
uint32_t HAL_OSPI_GetState (OSPI_HandleTypeDef *hospi);
# 838 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_ospi.h"
HAL_StatusTypeDef HAL_OSPIM_Config (OSPI_HandleTypeDef *hospi, OSPIM_CfgTypeDef *cfg, uint32_t Timeout);
# 61 "./boards/stm32l4xx_hal_conf_base.h" 2
# 1 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal_dsi.h" 1
# 62 "./boards/stm32l4xx_hal_conf_base.h" 2
# 4 "boards/STM32L4R9IDISC/stm32l4xx_hal_conf.h" 2
# 31 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal.h" 2
# 591 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal.h"
extern volatile uint32_t uwTick;
extern uint32_t uwTickPrio;
extern uint32_t uwTickFreq;
# 609 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal.h"
HAL_StatusTypeDef HAL_Init(void);
HAL_StatusTypeDef HAL_DeInit(void);
void HAL_MspInit(void);
void HAL_MspDeInit(void);
HAL_StatusTypeDef HAL_InitTick (uint32_t TickPriority);
# 624 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal.h"
void HAL_IncTick(void);
void HAL_Delay(uint32_t Delay);
uint32_t HAL_GetTick(void);
uint32_t HAL_GetTickPrio(void);
HAL_StatusTypeDef HAL_SetTickFreq(uint32_t Freq);
uint32_t HAL_GetTickFreq(void);
void HAL_SuspendTick(void);
void HAL_ResumeTick(void);
uint32_t HAL_GetHalVersion(void);
uint32_t HAL_GetREVID(void);
uint32_t HAL_GetDEVID(void);
uint32_t HAL_GetUIDw0(void);
uint32_t HAL_GetUIDw1(void);
uint32_t HAL_GetUIDw2(void);
# 648 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal.h"
void HAL_DBGMCU_EnableDBGSleepMode(void);
void HAL_DBGMCU_DisableDBGSleepMode(void);
void HAL_DBGMCU_EnableDBGStopMode(void);
void HAL_DBGMCU_DisableDBGStopMode(void);
void HAL_DBGMCU_EnableDBGStandbyMode(void);
void HAL_DBGMCU_DisableDBGStandbyMode(void);
# 664 "../../lib/stm32lib/STM32L4xx_HAL_Driver/Inc/stm32l4xx_hal.h"
void HAL_SYSCFG_SRAM2Erase(void);
void HAL_SYSCFG_EnableMemorySwappingBank(void);
void HAL_SYSCFG_DisableMemorySwappingBank(void);


void HAL_SYSCFG_VREFBUF_VoltageScalingConfig(uint32_t VoltageScaling);
void HAL_SYSCFG_VREFBUF_HighImpedanceConfig(uint32_t Mode);
void HAL_SYSCFG_VREFBUF_TrimmingConfig(uint32_t TrimmingValue);
HAL_StatusTypeDef HAL_SYSCFG_EnableVREFBUF(void);
void HAL_SYSCFG_DisableVREFBUF(void);


void HAL_SYSCFG_EnableIOAnalogSwitchBooster(void);
void HAL_SYSCFG_DisableIOAnalogSwitchBooster(void);
# 31 "./mpconfigboard_common.h" 2
# 33 "./mpconfigport.h" 2
# 202 "./mpconfigport.h"
extern const struct _mp_obj_module_t machine_module;
extern const struct _mp_obj_module_t pyb_module;
extern const struct _mp_obj_module_t stm_module;
extern const struct _mp_obj_module_t mp_module_ubinascii;
extern const struct _mp_obj_module_t mp_module_ure;
extern const struct _mp_obj_module_t mp_module_uzlib;
extern const struct _mp_obj_module_t mp_module_ujson;
extern const struct _mp_obj_module_t mp_module_uheapq;
extern const struct _mp_obj_module_t mp_module_uhashlib;
extern const struct _mp_obj_module_t mp_module_uos;
extern const struct _mp_obj_module_t mp_module_utime;
extern const struct _mp_obj_module_t mp_module_usocket;
extern const struct _mp_obj_module_t mp_module_network;
extern const struct _mp_obj_module_t mp_module_onewire;
extern const struct _mp_obj_module_t mp_module_lvgl;
# 270 "./mpconfigport.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h" 1
# 20 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../../../lv_conf.h" 1
# 61 "../../lib/lv_bindings/lvgl/src/lv_misc/../../../lv_conf.h"
typedef int16_t lv_coord_t;
# 134 "../../lib/lv_bindings/lvgl/src/lv_misc/../../../lv_conf.h"
typedef void * lv_anim_user_data_t;
# 144 "../../lib/lv_bindings/lvgl/src/lv_misc/../../../lv_conf.h"
typedef void * lv_group_user_data_t;
# 154 "../../lib/lv_bindings/lvgl/src/lv_misc/../../../lv_conf.h"
typedef void * lv_fs_drv_user_data_t;
# 179 "../../lib/lv_bindings/lvgl/src/lv_misc/../../../lv_conf.h"
typedef void * lv_img_decoder_user_data_t;
# 219 "../../lib/lv_bindings/lvgl/src/lv_misc/../../../lv_conf.h"
typedef void * lv_disp_drv_user_data_t;
typedef void * lv_indev_drv_user_data_t;
# 356 "../../lib/lv_bindings/lvgl/src/lv_misc/../../../lv_conf.h"
typedef void * lv_font_user_data_t;
# 413 "../../lib/lv_bindings/lvgl/src/lv_misc/../../../lv_conf.h"
typedef void * lv_obj_user_data_t;
# 602 "../../lib/lv_bindings/lvgl/src/lv_misc/../../../lv_conf.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../../../lvgl/src/lv_conf_checker.h" 1
# 603 "../../lib/lv_bindings/lvgl/src/lv_misc/../../../lv_conf.h" 2
# 21 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h" 2



# 1 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stdbool.h" 1 3 4
# 25 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h" 1
# 23 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h"
# 1 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 1 3 4
# 24 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_log.h" 1
# 36 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_log.h"
enum {ENUM_LV_LOG_LEVEL_TRACE = 0};
enum {ENUM_LV_LOG_LEVEL_INFO = 1};
enum {ENUM_LV_LOG_LEVEL_WARN = 2};
enum {ENUM_LV_LOG_LEVEL_ERROR = 3};
enum {ENUM_LV_LOG_LEVEL_NONE = 4};

typedef int8_t lv_log_level_t;
# 52 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_log.h"
typedef void (*lv_log_print_g_cb_t)(lv_log_level_t level, const char *, uint32_t, const char *);
# 64 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_log.h"
void lv_log_register_print_cb(lv_log_print_g_cb_t print_cb);
# 73 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_log.h"
void lv_log_add(lv_log_level_t level, const char * file, int line, const char * dsc);
# 25 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_types.h" 1
# 39 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_types.h"
enum {
    LV_RES_INV = 0,

    LV_RES_OK,
};
typedef uint8_t lv_res_t;




typedef uint32_t lv_uintptr_t;
# 26 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h" 2
# 38 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h"
typedef struct
{
    uint32_t total_size;
    uint32_t free_cnt;
    uint32_t free_size;
    uint32_t free_biggest_size;
    uint32_t used_cnt;
    uint8_t used_pct;
    uint8_t frag_pct;
} lv_mem_monitor_t;
# 56 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h"
void lv_mem_init(void);






void * lv_mem_alloc(size_t size);





void lv_mem_free(const void * data);
# 78 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h"
void * lv_mem_realloc(void * data_p, size_t new_size);




void lv_mem_defrag(void);






void lv_mem_monitor(lv_mem_monitor_t * mon_p);






uint32_t lv_mem_get_size(const void * data);
# 26 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_ll.h" 1
# 18 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_ll.h"
# 1 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 1 3 4
# 19 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_ll.h" 2
# 30 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_ll.h"
typedef uint8_t lv_ll_node_t;


typedef struct
{
    uint32_t n_size;
    lv_ll_node_t * head;
    lv_ll_node_t * tail;
} lv_ll_t;
# 49 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_ll.h"
void lv_ll_init(lv_ll_t * ll_p, uint32_t node_size);






void * lv_ll_ins_head(lv_ll_t * ll_p);







void * lv_ll_ins_prev(lv_ll_t * ll_p, void * n_act);






void * lv_ll_ins_tail(lv_ll_t * ll_p);







void lv_ll_rem(lv_ll_t * ll_p, void * node_p);





void lv_ll_clear(lv_ll_t * ll_p);
# 95 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_ll.h"
void lv_ll_chg_list(lv_ll_t * ll_ori_p, lv_ll_t * ll_new_p, void * node, _Bool head);






void * lv_ll_get_head(const lv_ll_t * ll_p);






void * lv_ll_get_tail(const lv_ll_t * ll_p);







void * lv_ll_get_next(const lv_ll_t * ll_p, const void * n_act);







void * lv_ll_get_prev(const lv_ll_t * ll_p, const void * n_act);






uint32_t lv_ll_get_len(const lv_ll_t * ll_p);







void lv_ll_move_before(lv_ll_t * ll_p, void * n_act, void * n_after);






_Bool lv_ll_is_empty(lv_ll_t * ll_p);
# 27 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_cache.h" 1
# 16 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_cache.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h" 1
# 19 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../../../lv_conf.h" 1
# 20 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h" 2



# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h" 1
# 19 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/../../../lv_conf.h" 1
# 20 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h" 2






# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_mem.h" 1
# 27 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h" 2
# 40 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h"
enum {
    LV_FS_RES_OK = 0,
    LV_FS_RES_HW_ERR,
    LV_FS_RES_FS_ERR,
    LV_FS_RES_NOT_EX,
    LV_FS_RES_FULL,
    LV_FS_RES_LOCKED,
    LV_FS_RES_DENIED,
    LV_FS_RES_BUSY,
    LV_FS_RES_TOUT,
    LV_FS_RES_NOT_IMP,
    LV_FS_RES_OUT_OF_MEM,
    LV_FS_RES_INV_PARAM,
    LV_FS_RES_UNKNOWN,
};
typedef uint8_t lv_fs_res_t;




enum {
    LV_FS_MODE_WR = 0x01,
    LV_FS_MODE_RD = 0x02,
};
typedef uint8_t lv_fs_mode_t;

typedef struct _lv_fs_drv_t
{
    char letter;
    uint16_t file_size;
    uint16_t rddir_size;
    _Bool (*ready_cb)(struct _lv_fs_drv_t * drv);

    lv_fs_res_t (*open_cb)(struct _lv_fs_drv_t * drv, void * file_p, const char * path, lv_fs_mode_t mode);
    lv_fs_res_t (*close_cb)(struct _lv_fs_drv_t * drv, void * file_p);
    lv_fs_res_t (*remove_cb)(struct _lv_fs_drv_t * drv, const char * fn);
    lv_fs_res_t (*read_cb)(struct _lv_fs_drv_t * drv, void * file_p, void * buf, uint32_t btr, uint32_t * br);
    lv_fs_res_t (*write_cb)(struct _lv_fs_drv_t * drv, void * file_p, const void * buf, uint32_t btw, uint32_t * bw);
    lv_fs_res_t (*seek_cb)(struct _lv_fs_drv_t * drv, void * file_p, uint32_t pos);
    lv_fs_res_t (*tell_cb)(struct _lv_fs_drv_t * drv, void * file_p, uint32_t * pos_p);
    lv_fs_res_t (*trunc_cb)(struct _lv_fs_drv_t * drv, void * file_p);
    lv_fs_res_t (*size_cb)(struct _lv_fs_drv_t * drv, void * file_p, uint32_t * size_p);
    lv_fs_res_t (*rename_cb)(struct _lv_fs_drv_t * drv, const char * oldname, const char * newname);
    lv_fs_res_t (*free_space_cb)(struct _lv_fs_drv_t * drv, uint32_t * total_p, uint32_t * free_p);

    lv_fs_res_t (*dir_open_cb)(struct _lv_fs_drv_t * drv, void * rddir_p, const char * path);
    lv_fs_res_t (*dir_read_cb)(struct _lv_fs_drv_t * drv, void * rddir_p, char * fn);
    lv_fs_res_t (*dir_close_cb)(struct _lv_fs_drv_t * drv, void * rddir_p);


    lv_fs_drv_user_data_t user_data;

} lv_fs_drv_t;

typedef struct
{
    void * file_d;
    lv_fs_drv_t * drv;
} lv_fs_file_t;

typedef struct
{
    void * dir_d;
    lv_fs_drv_t * drv;
} lv_fs_dir_t;
# 113 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h"
void lv_fs_init(void);







void lv_fs_drv_init(lv_fs_drv_t * drv);






void lv_fs_drv_register(lv_fs_drv_t * drv_p);






lv_fs_drv_t * lv_fs_get_drv(char letter);







_Bool lv_fs_is_ready(char letter);
# 152 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h"
lv_fs_res_t lv_fs_open(lv_fs_file_t * file_p, const char * path, lv_fs_mode_t mode);






lv_fs_res_t lv_fs_close(lv_fs_file_t * file_p);






lv_fs_res_t lv_fs_remove(const char * path);
# 176 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h"
lv_fs_res_t lv_fs_read(lv_fs_file_t * file_p, void * buf, uint32_t btr, uint32_t * br);
# 186 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h"
lv_fs_res_t lv_fs_write(lv_fs_file_t * file_p, const void * buf, uint32_t btw, uint32_t * bw);







lv_fs_res_t lv_fs_seek(lv_fs_file_t * file_p, uint32_t pos);







lv_fs_res_t lv_fs_tell(lv_fs_file_t * file_p, uint32_t * pos);







lv_fs_res_t lv_fs_trunc(lv_fs_file_t * file_p);







lv_fs_res_t lv_fs_size(lv_fs_file_t * file_p, uint32_t * size);







lv_fs_res_t lv_fs_rename(const char * oldname, const char * newname);







lv_fs_res_t lv_fs_dir_open(lv_fs_dir_t * rddir_p, const char * path);
# 243 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h"
lv_fs_res_t lv_fs_dir_read(lv_fs_dir_t * rddir_p, char * fn);






lv_fs_res_t lv_fs_dir_close(lv_fs_dir_t * rddir_p);
# 259 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h"
lv_fs_res_t lv_fs_free_space(char letter, uint32_t * total_p, uint32_t * free_p);






char * lv_fs_get_letters(char * buf);






const char * lv_fs_get_ext(const char * fn);






char * lv_fs_up(char * path);






const char * lv_fs_get_last(const char * path);
# 24 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_types.h" 1
# 25 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h" 1
# 16 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"
# 1 "/usr/include/newlib/string.h" 1 3
# 10 "/usr/include/newlib/string.h" 3
# 1 "/usr/include/newlib/_ansi.h" 1 3
# 15 "/usr/include/newlib/_ansi.h" 3
# 1 "/usr/include/newlib/newlib.h" 1 3
# 16 "/usr/include/newlib/_ansi.h" 2 3
# 1 "/usr/include/newlib/sys/config.h" 1 3



# 1 "/usr/include/newlib/machine/ieeefp.h" 1 3
# 5 "/usr/include/newlib/sys/config.h" 2 3
# 17 "/usr/include/newlib/_ansi.h" 2 3
# 11 "/usr/include/newlib/string.h" 2 3
# 1 "/usr/include/newlib/sys/reent.h" 1 3
# 13 "/usr/include/newlib/sys/reent.h" 3
# 1 "/usr/include/newlib/_ansi.h" 1 3
# 14 "/usr/include/newlib/sys/reent.h" 2 3
# 1 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 1 3 4
# 15 "/usr/include/newlib/sys/reent.h" 2 3
# 1 "/usr/include/newlib/sys/_types.h" 1 3
# 12 "/usr/include/newlib/sys/_types.h" 3
# 1 "/usr/include/newlib/machine/_types.h" 1 3
# 13 "/usr/include/newlib/sys/_types.h" 2 3
# 1 "/usr/include/newlib/sys/lock.h" 1 3





typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
# 14 "/usr/include/newlib/sys/_types.h" 2 3


typedef long _off_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



__extension__ typedef long long _off64_t;







typedef long _fpos_t;
# 55 "/usr/include/newlib/sys/_types.h" 3
typedef signed int _ssize_t;
# 67 "/usr/include/newlib/sys/_types.h" 3
# 1 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 1 3 4
# 353 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 68 "/usr/include/newlib/sys/_types.h" 2 3



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;



typedef _LOCK_RECURSIVE_T _flock_t;




typedef void *_iconv_t;
# 16 "/usr/include/newlib/sys/reent.h" 2 3






typedef unsigned long __ULong;
# 38 "/usr/include/newlib/sys/reent.h" 3
struct _reent;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 91 "/usr/include/newlib/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 115 "/usr/include/newlib/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 179 "/usr/include/newlib/sys/reent.h" 3
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (* _read) (struct _reent *, void *, char *, int)
                                          ;
  int (* _write) (struct _reent *, void *, const char *, int)

                                   ;
  _fpos_t (* _seek) (struct _reent *, void *, _fpos_t, int);
  int (* _close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 285 "/usr/include/newlib/sys/reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 317 "/usr/include/newlib/sys/reent.h" 3
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 569 "/usr/include/newlib/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (* __cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;
  __FILE __sf[3];
};
# 762 "/usr/include/newlib/sys/reent.h" 3
extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 12 "/usr/include/newlib/string.h" 2 3
# 1 "/usr/include/newlib/sys/cdefs.h" 1 3
# 45 "/usr/include/newlib/sys/cdefs.h" 3
# 1 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 1 3 4
# 46 "/usr/include/newlib/sys/cdefs.h" 2 3
# 13 "/usr/include/newlib/string.h" 2 3




# 1 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 1 3 4
# 18 "/usr/include/newlib/string.h" 2 3



void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void * restrict, const void * restrict, size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char *strcat (char *restrict, const char *restrict);
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *restrict, const char *restrict);
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *restrict, const char *restrict, size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *restrict, const char *restrict, size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);

char *strtok (char *restrict, const char *restrict);

size_t strxfrm (char *restrict, const char *restrict, size_t);


char *strtok_r (char *restrict, const char *restrict, char **restrict);


int bcmp (const void *, const void *, size_t);
void bcopy (const void *, void *, size_t);
void bzero (void *, size_t);
int ffs (int);
char *index (const char *, int);


void * memccpy (void * restrict, const void * restrict, int, size_t);





void * memrchr (const void *, int, size_t);




char *rindex (const char *, int);

char *stpcpy (char *restrict, const char *restrict);
char *stpncpy (char *restrict, const char *restrict, size_t);

int strcasecmp (const char *, const char *);






char *strdup (const char *);


char *_strdup_r (struct _reent *, const char *);


char *strndup (const char *, size_t);



char *_strndup_r (struct _reent *, const char *, size_t);
# 106 "/usr/include/newlib/string.h" 3
int strerror_r (int, char *, size_t)

             __asm__ ("" "__xpg_strerror_r")

  ;







char * _strerror_r (struct _reent *, int, int, int *);


size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);


int strncasecmp (const char *, const char *, size_t);



size_t strnlen (const char *, size_t);


char *strsep (char **, const char *);







char *strlwr (char *);
char *strupr (char *);



char *strsignal (int __signo);
# 182 "/usr/include/newlib/string.h" 3
# 1 "/usr/include/newlib/sys/string.h" 1 3
# 183 "/usr/include/newlib/string.h" 2 3


# 17 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h" 2
# 32 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"
enum {ENUM_LV_COORD_MAX = ((lv_coord_t)((uint32_t)((uint32_t)1 << (8 * sizeof(lv_coord_t) - 1)) - 1000))};
enum {ENUM_LV_COORD_MIN = (-((lv_coord_t)((uint32_t)((uint32_t)1 << (8 * sizeof(lv_coord_t) - 1)) - 1000)))};
# 42 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"
typedef struct
{
    lv_coord_t x;
    lv_coord_t y;
} lv_point_t;


typedef struct
{
    lv_coord_t x1;
    lv_coord_t y1;
    lv_coord_t x2;
    lv_coord_t y2;
} lv_area_t;
# 69 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"
void lv_area_set(lv_area_t * area_p, lv_coord_t x1, lv_coord_t y1, lv_coord_t x2, lv_coord_t y2);






inline static void lv_area_copy(lv_area_t * dest, const lv_area_t * src)
{
    memcpy(dest, src, sizeof(lv_area_t));
}






static inline lv_coord_t lv_area_get_width(const lv_area_t * area_p)
{
    return (lv_coord_t)(area_p->x2 - area_p->x1 + 1);
}






static inline lv_coord_t lv_area_get_height(const lv_area_t * area_p)
{
    return (lv_coord_t)(area_p->y2 - area_p->y1 + 1);
}






void lv_area_set_width(lv_area_t * area_p, lv_coord_t w);






void lv_area_set_height(lv_area_t * area_p, lv_coord_t h);







void lv_area_set_pos(lv_area_t * area_p, lv_coord_t x, lv_coord_t y);






uint32_t lv_area_get_size(const lv_area_t * area_p);
# 137 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"
_Bool lv_area_intersect(lv_area_t * res_p, const lv_area_t * a1_p, const lv_area_t * a2_p);







void lv_area_join(lv_area_t * a_res_p, const lv_area_t * a1_p, const lv_area_t * a2_p);







_Bool lv_area_is_point_on(const lv_area_t * a_p, const lv_point_t * p_p);







_Bool lv_area_is_on(const lv_area_t * a1_p, const lv_area_t * a2_p);







_Bool lv_area_is_in(const lv_area_t * ain_p, const lv_area_t * aholder_p);






void lv_area_increment(lv_area_t * a_p, const lv_coord_t amount);
# 26 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h" 1
# 17 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h" 1
# 19 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/../../../lv_conf.h" 1
# 20 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h" 2



# 1 "/usr/lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 1 3 4
# 24 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h" 2


# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_symbol_def.h" 1
# 88 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_symbol_def.h"
enum {
    _LV_STR_SYMBOL_AUDIO,
    _LV_STR_SYMBOL_VIDEO,
    _LV_STR_SYMBOL_LIST,
    _LV_STR_SYMBOL_OK,
    _LV_STR_SYMBOL_CLOSE,
    _LV_STR_SYMBOL_POWER,
    _LV_STR_SYMBOL_SETTINGS,
    _LV_STR_SYMBOL_TRASH,
    _LV_STR_SYMBOL_HOME,
    _LV_STR_SYMBOL_DOWNLOAD,
    _LV_STR_SYMBOL_DRIVE,
    _LV_STR_SYMBOL_REFRESH,
    _LV_STR_SYMBOL_MUTE,
    _LV_STR_SYMBOL_VOLUME_MID,
    _LV_STR_SYMBOL_VOLUME_MAX,
    _LV_STR_SYMBOL_IMAGE,
    _LV_STR_SYMBOL_EDIT,
    _LV_STR_SYMBOL_PREV,
    _LV_STR_SYMBOL_PLAY,
    _LV_STR_SYMBOL_PAUSE,
    _LV_STR_SYMBOL_STOP,
    _LV_STR_SYMBOL_NEXT,
    _LV_STR_SYMBOL_EJECT,
    _LV_STR_SYMBOL_LEFT,
    _LV_STR_SYMBOL_RIGHT,
    _LV_STR_SYMBOL_PLUS,
    _LV_STR_SYMBOL_MINUS,
    _LV_STR_SYMBOL_WARNING,
    _LV_STR_SYMBOL_SHUFFLE,
    _LV_STR_SYMBOL_UP,
    _LV_STR_SYMBOL_DOWN,
    _LV_STR_SYMBOL_LOOP,
    _LV_STR_SYMBOL_DIRECTORY,
    _LV_STR_SYMBOL_UPLOAD,
    _LV_STR_SYMBOL_CALL,
    _LV_STR_SYMBOL_CUT,
    _LV_STR_SYMBOL_COPY,
    _LV_STR_SYMBOL_SAVE,
    _LV_STR_SYMBOL_CHARGE,
    _LV_STR_SYMBOL_BELL,
    _LV_STR_SYMBOL_KEYBOARD,
    _LV_STR_SYMBOL_GPS,
    _LV_STR_SYMBOL_FILE,
    _LV_STR_SYMBOL_WIFI,
    _LV_STR_SYMBOL_BATTERY_FULL,
    _LV_STR_SYMBOL_BATTERY_3,
    _LV_STR_SYMBOL_BATTERY_2,
    _LV_STR_SYMBOL_BATTERY_1,
    _LV_STR_SYMBOL_BATTERY_EMPTY,
    _LV_STR_SYMBOL_BLUETOOTH,
    _LV_STR_SYMBOL_DUMMY,
};
# 27 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h" 2
# 46 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h"
typedef struct
{
    uint16_t adv_w;
    uint8_t box_w;
    uint8_t box_h;
    int8_t ofs_x;
    int8_t ofs_y;
    uint8_t bpp;
}lv_font_glyph_dsc_t;



enum {
    LV_FONT_SUBPX_NONE,
    LV_FONT_SUBPX_HOR,
    LV_FONT_SUBPX_VER,
    LV_FONT_SUBPX_BOTH,
};

typedef uint8_t lv_font_subpx_t;


typedef struct _lv_font_struct
{

    _Bool (*get_glyph_dsc)(const struct _lv_font_struct *, lv_font_glyph_dsc_t *, uint32_t letter, uint32_t letter_next);


    const uint8_t * (*get_glyph_bitmap)(const struct _lv_font_struct *, uint32_t);


    uint8_t line_height;
    uint8_t base_line;
    uint8_t subpx :2;
    void * dsc;

    lv_font_user_data_t user_data;



} lv_font_t;
# 98 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h"
const uint8_t * lv_font_get_glyph_bitmap(const lv_font_t * font_p, uint32_t letter);
# 108 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h"
_Bool lv_font_get_glyph_dsc(const lv_font_t * font_p, lv_font_glyph_dsc_t * dsc_out, uint32_t letter, uint32_t letter_next);
# 117 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h"
uint16_t lv_font_get_glyph_width(const lv_font_t * font, uint32_t letter, uint32_t letter_next);






static inline uint8_t lv_font_get_line_height(const lv_font_t * font_p)
{
    return font_p->line_height;
}
# 140 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h"
extern lv_font_t lv_font_roboto_16;







extern lv_font_t lv_font_roboto_28;
# 157 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h"

# 18 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_color.h" 1
# 19 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_color.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/../../../lv_conf.h" 1
# 20 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_color.h" 2
# 62 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_color.h"
enum {
    LV_OPA_TRANSP = 0,
    LV_OPA_0 = 0,
    LV_OPA_10 = 25,
    LV_OPA_20 = 51,
    LV_OPA_30 = 76,
    LV_OPA_40 = 102,
    LV_OPA_50 = 127,
    LV_OPA_60 = 153,
    LV_OPA_70 = 178,
    LV_OPA_80 = 204,
    LV_OPA_90 = 229,
    LV_OPA_100 = 255,
    LV_OPA_COVER = 255,
};
# 201 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_color.h"
typedef union
{
    struct
    {
        uint8_t blue : 1;
        uint8_t green : 1;
        uint8_t red : 1;
    } ch;
    uint8_t full;
} lv_color1_t;

typedef union
{
    struct
    {
        uint8_t blue : 2;
        uint8_t green : 3;
        uint8_t red : 3;
    } ch;
    uint8_t full;
} lv_color8_t;

typedef union
{
    struct
    {

        uint16_t blue : 5;
        uint16_t green : 6;
        uint16_t red : 5;






    } ch;
    uint16_t full;
} lv_color16_t;

typedef union
{
    struct
    {
        uint8_t blue;
        uint8_t green;
        uint8_t red;
        uint8_t alpha;
    } ch;
    uint32_t full;
} lv_color32_t;
# 263 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_color.h"
typedef uint32_t lv_color_int_t;
typedef lv_color32_t lv_color_t;




typedef uint8_t lv_opa_t;

typedef struct
{
    uint16_t h;
    uint8_t s;
    uint8_t v;
} lv_color_hsv_t;
# 296 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_color.h"
static inline uint8_t lv_color_to1(lv_color_t color)
{
# 313 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_color.h"
    if(((color).ch.red & 0x80) || ((color).ch.green & 0x80) || ((color).ch.blue & 0x80)) {
        return 1;
    } else {
        return 0;
    }

}

static inline uint8_t lv_color_to8(lv_color_t color)
{
# 337 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_color.h"
    lv_color8_t ret;
    (ret).ch.red = (uint8_t)((color).ch.red >> 5) & 0x7U;;
    (ret).ch.green = (uint8_t)((color).ch.green >> 5) & 0x7U;;
    (ret).ch.blue = (uint8_t)((color).ch.blue >> 6) & 0x3U;;
    return ret.full;

}

static inline uint16_t lv_color_to16(lv_color_t color)
{
# 366 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_color.h"
    lv_color16_t ret;
    (ret).ch.red = (uint8_t)((color).ch.red >> 3) & 0x1FU;;


    (ret).ch.green = (uint8_t)((color).ch.green >> 2) & 0x3FU;;



    (ret).ch.blue = (uint8_t)((color).ch.blue >> 3) & 0x1FU;;
    return ret.full;


    return 0;
}

static inline uint32_t lv_color_to32(lv_color_t color)
{
# 431 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_color.h"
    return color.full;

}

static inline lv_color_t lv_color_mix(lv_color_t c1, lv_color_t c2, uint8_t mix)
{
    lv_color_t ret;


    (ret).ch.red = (uint32_t)(((uint16_t)((uint16_t) (c1).ch.red * mix + (c2).ch.red * (255 - mix)) >> 8) & 0xFF);;
    (ret).ch.green = (uint32_t)(((uint16_t)((uint16_t) (c1).ch.green * mix + (c2).ch.green * (255 - mix)) >> 8) & 0xFF);;
    (ret).ch.blue = (uint32_t)(((uint16_t)((uint16_t) (c1).ch.blue * mix + (c2).ch.blue * (255 - mix)) >> 8) & 0xFF);;
    (ret).ch.alpha = (uint32_t)((0xFF) & 0xFF);;





    return ret;
}






static inline uint8_t lv_color_brightness(lv_color_t color)
{
    lv_color32_t c32;
    c32.full = lv_color_to32(color);
    uint16_t bright = (uint16_t)(3u * (c32).ch.red + (c32).ch.blue + 4u * (c32).ch.green);
    return (uint8_t)(bright >> 3);
}
# 480 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_color.h"
static inline lv_color_t lv_color_make(uint8_t r, uint8_t g, uint8_t b)
{
    return ((lv_color_t){{b, g, r, 0xff}});
}

static inline lv_color_t lv_color_hex(uint32_t c)
{
    return lv_color_make((uint8_t)((c >> 16) & 0xFF), (uint8_t)((c >> 8) & 0xFF), (uint8_t)(c & 0xFF));
}

static inline lv_color_t lv_color_hex3(uint32_t c)
{
    return lv_color_make((uint8_t)(((c >> 4) & 0xF0) | ((c >> 8) & 0xF)), (uint8_t)((c & 0xF0) | ((c & 0xF0) >> 4)),
                         (uint8_t)((c & 0xF) | ((c & 0xF) << 4)));
}
# 503 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_color.h"
lv_color_t lv_color_hsv_to_rgb(uint16_t h, uint8_t s, uint8_t v);
# 512 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_color.h"
lv_color_hsv_t lv_color_rgb_to_hsv(uint8_t r8, uint8_t g8, uint8_t b8);






lv_color_hsv_t lv_color_to_hsv(lv_color_t color);
# 19 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_area.h" 1
# 20 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h" 1
# 35 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
enum {
    LV_ANIM_OFF,
    LV_ANIM_ON,
};

typedef uint8_t lv_anim_enable_t;


typedef lv_coord_t lv_anim_value_t;



struct _lv_anim_t;







typedef void (*lv_anim_exec_xcb_t)(void *, lv_anim_value_t);



typedef void (*lv_anim_custom_exec_cb_t)(struct _lv_anim_t *, lv_anim_value_t);


typedef lv_anim_value_t (*lv_anim_path_cb_t)(const struct _lv_anim_t *);


typedef void (*lv_anim_ready_cb_t)(struct _lv_anim_t *);


typedef struct _lv_anim_t
{
    void * var;
    lv_anim_exec_xcb_t exec_cb;
    lv_anim_path_cb_t path_cb;
    lv_anim_ready_cb_t ready_cb;
    int32_t start;
    int32_t end;
    uint16_t time;
    int16_t act_time;
    uint16_t playback_pause;
    uint16_t repeat_pause;

    lv_anim_user_data_t user_data;


    uint8_t playback : 1;
    uint8_t repeat : 1;

    uint8_t playback_now : 1;
    uint32_t has_run : 1;
} lv_anim_t;
# 99 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
void lv_anim_core_init(void);
# 110 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
void lv_anim_init(lv_anim_t * a);
# 120 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
static inline void lv_anim_set_exec_cb(lv_anim_t * a, void * var, lv_anim_exec_xcb_t exec_cb)
{
    a->var = var;
    a->exec_cb = exec_cb;
}







static inline void lv_anim_set_time(lv_anim_t * a, uint16_t duration, int16_t delay)
{
    a->time = duration;
    a->act_time = (int16_t)(-delay);
}







static inline void lv_anim_set_values(lv_anim_t * a, lv_anim_value_t start, lv_anim_value_t end)
{
    a->start = start;
    a->end = end;
}
# 158 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
static inline void lv_anim_set_custom_exec_cb(lv_anim_t * a, lv_anim_custom_exec_cb_t exec_cb)
{
    a->var = a;
    a->exec_cb = (lv_anim_exec_xcb_t)exec_cb;
}







static inline void lv_anim_set_path_cb(lv_anim_t * a, lv_anim_path_cb_t path_cb)
{
    a->path_cb = path_cb;
}






static inline void lv_anim_set_ready_cb(lv_anim_t * a, lv_anim_ready_cb_t ready_cb)
{
    a->ready_cb = ready_cb;
}






static inline void lv_anim_set_playback(lv_anim_t * a, uint16_t wait_time)
{
    a->playback = 1;
    a->playback_pause = wait_time;
}





static inline void lv_anim_clear_playback(lv_anim_t * a)
{
    a->playback = 0;
}






static inline void lv_anim_set_repeat(lv_anim_t * a, uint16_t wait_time)
{
    a->repeat = 1;
    a->repeat_pause = wait_time;
}





static inline void lv_anim_clear_repeat(lv_anim_t * a)
{
    a->repeat = 0;
}





void lv_anim_create(lv_anim_t * a);
# 238 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
_Bool lv_anim_del(void * var, lv_anim_exec_xcb_t exec_cb);
# 251 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
static inline _Bool lv_anim_custom_del(lv_anim_t * a, lv_anim_custom_exec_cb_t exec_cb)
{
    return lv_anim_del(a->var, (lv_anim_exec_xcb_t)exec_cb);
}





uint16_t lv_anim_count_running(void);
# 269 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
uint16_t lv_anim_speed_to_time(uint16_t speed, lv_anim_value_t start, lv_anim_value_t end);






lv_anim_value_t lv_anim_path_linear(const lv_anim_t * a);






lv_anim_value_t lv_anim_path_ease_in(const lv_anim_t * a);






lv_anim_value_t lv_anim_path_ease_out(const lv_anim_t * a);






lv_anim_value_t lv_anim_path_ease_in_out(const lv_anim_t * a);






lv_anim_value_t lv_anim_path_overshoot(const lv_anim_t * a);






lv_anim_value_t lv_anim_path_bounce(const lv_anim_t * a);







lv_anim_value_t lv_anim_path_step(const lv_anim_t * a);
# 21 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h" 2







enum {ENUM_LV_RADIUS_CIRCLE = (((lv_coord_t)((uint32_t)((uint32_t)1 << (8 * sizeof(lv_coord_t) - 1)) - 1000)))};






enum {
    LV_BORDER_NONE = 0x00,
    LV_BORDER_BOTTOM = 0x01,
    LV_BORDER_TOP = 0x02,
    LV_BORDER_LEFT = 0x04,
    LV_BORDER_RIGHT = 0x08,
    LV_BORDER_FULL = 0x0F,
    LV_BORDER_INTERNAL = 0x10,
};
typedef uint8_t lv_border_part_t;


enum {
    LV_SHADOW_BOTTOM = 0,
    LV_SHADOW_FULL,
};
typedef uint8_t lv_shadow_type_t;
# 60 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
typedef struct
{
    uint8_t glass : 1;


    struct
    {
        lv_color_t main_color;
        lv_color_t grad_color;
        lv_coord_t radius;
        lv_opa_t opa;

        struct
        {
            lv_color_t color;
            lv_coord_t width;
            lv_border_part_t part;
            lv_opa_t opa;
        } border;


        struct
        {
            lv_color_t color;
            lv_coord_t width;
            lv_shadow_type_t type;
        } shadow;

        struct
        {
            lv_coord_t top;
            lv_coord_t bottom;
            lv_coord_t left;
            lv_coord_t right;
            lv_coord_t inner;
        } padding;
    } body;


    struct
    {
        lv_color_t color;
        lv_color_t sel_color;
        const lv_font_t * font;
        lv_coord_t letter_space;
        lv_coord_t line_space;
        lv_opa_t opa;
    } text;


    struct
    {
        lv_color_t color;
        lv_opa_t intense;
        lv_opa_t opa;
    } image;


    struct
    {
        lv_color_t color;
        lv_coord_t width;
        lv_opa_t opa;
        uint8_t rounded : 1;
    } line;



    uint32_t debug_sentinel;



} lv_style_t;



typedef struct
{
    lv_style_t style_start;

    lv_style_t style_end;
    lv_style_t * style_anim;
    lv_anim_ready_cb_t ready_cb;
} lv_style_anim_dsc_t;
# 153 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
void lv_style_init(void);






void lv_style_copy(lv_style_t * dest, const lv_style_t * src);
# 169 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
void lv_style_mix(const lv_style_t * start, const lv_style_t * end, lv_style_t * res, uint16_t ratio);
# 182 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
void lv_style_anim_init(lv_anim_t * a);
# 191 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
void lv_style_anim_set_styles(lv_anim_t * a, lv_style_t * to_anim, const lv_style_t * start, const lv_style_t * end);







static inline void lv_style_anim_set_time(lv_anim_t * a, uint16_t duration, int16_t delay)
{
    lv_anim_set_time(a, duration, delay);
}






static inline void lv_style_anim_set_ready_cb(lv_anim_t * a, lv_anim_ready_cb_t ready_cb)
{
    lv_style_anim_dsc_t * dsc = (lv_style_anim_dsc_t *)a->var;
    dsc->ready_cb = ready_cb;
}






static inline void lv_style_anim_set_playback(lv_anim_t * a, uint16_t wait_time)
{
    lv_anim_set_playback(a, wait_time);
}





static inline void lv_style_anim_clear_playback(lv_anim_t * a)
{
    lv_anim_clear_playback(a);
}






static inline void lv_style_anim_set_repeat(lv_anim_t * a, uint16_t wait_time)
{
    lv_anim_set_repeat(a, wait_time);
}





static inline void lv_style_anim_clear_repeat(lv_anim_t * a)
{
    lv_anim_clear_repeat(a);
}





static inline void lv_style_anim_create(lv_anim_t * a)
{
    lv_anim_create(a);
}






extern lv_style_t lv_style_scr;
extern lv_style_t lv_style_transp;
extern lv_style_t lv_style_transp_fit;
extern lv_style_t lv_style_transp_tight;
extern lv_style_t lv_style_plain;
extern lv_style_t lv_style_plain_color;
extern lv_style_t lv_style_pretty;
extern lv_style_t lv_style_pretty_color;
extern lv_style_t lv_style_btn_rel;
extern lv_style_t lv_style_btn_pr;
extern lv_style_t lv_style_btn_tgl_rel;
extern lv_style_t lv_style_btn_tgl_pr;
extern lv_style_t lv_style_btn_ina;
# 27 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h" 2
# 46 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
enum {
    LV_IMG_SRC_VARIABLE,
    LV_IMG_SRC_FILE,
    LV_IMG_SRC_SYMBOL,
    LV_IMG_SRC_UNKNOWN,
};

typedef uint8_t lv_img_src_t;



typedef struct
{



    uint32_t cf : 5;
    uint32_t always_zero : 3;


    uint32_t reserved : 2;

    uint32_t w : 11;
    uint32_t h : 11;
} lv_img_header_t;


enum {
    LV_IMG_CF_UNKNOWN = 0,

    LV_IMG_CF_RAW,
    LV_IMG_CF_RAW_ALPHA,

    LV_IMG_CF_RAW_CHROMA_KEYED,


    LV_IMG_CF_TRUE_COLOR,
    LV_IMG_CF_TRUE_COLOR_ALPHA,
    LV_IMG_CF_TRUE_COLOR_CHROMA_KEYED,


    LV_IMG_CF_INDEXED_1BIT,
    LV_IMG_CF_INDEXED_2BIT,
    LV_IMG_CF_INDEXED_4BIT,
    LV_IMG_CF_INDEXED_8BIT,

    LV_IMG_CF_ALPHA_1BIT,
    LV_IMG_CF_ALPHA_2BIT,
    LV_IMG_CF_ALPHA_4BIT,
    LV_IMG_CF_ALPHA_8BIT,

    LV_IMG_CF_RESERVED_15,
    LV_IMG_CF_RESERVED_16,
    LV_IMG_CF_RESERVED_17,
    LV_IMG_CF_RESERVED_18,
    LV_IMG_CF_RESERVED_19,
    LV_IMG_CF_RESERVED_20,
    LV_IMG_CF_RESERVED_21,
    LV_IMG_CF_RESERVED_22,
    LV_IMG_CF_RESERVED_23,

    LV_IMG_CF_USER_ENCODED_0,
    LV_IMG_CF_USER_ENCODED_1,
    LV_IMG_CF_USER_ENCODED_2,
    LV_IMG_CF_USER_ENCODED_3,
    LV_IMG_CF_USER_ENCODED_4,
    LV_IMG_CF_USER_ENCODED_5,
    LV_IMG_CF_USER_ENCODED_6,
    LV_IMG_CF_USER_ENCODED_7,
};
typedef uint8_t lv_img_cf_t;



typedef struct
{
    lv_img_header_t header;
    uint32_t data_size;
    const uint8_t * data;
} lv_img_dsc_t;



struct _lv_img_decoder;
struct _lv_img_decoder_dsc;
# 139 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
typedef lv_res_t (*lv_img_decoder_info_f_t)(struct _lv_img_decoder * decoder, const void * src,
                                            lv_img_header_t * header);






typedef lv_res_t (*lv_img_decoder_open_f_t)(struct _lv_img_decoder * decoder, struct _lv_img_decoder_dsc * dsc);
# 160 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
typedef lv_res_t (*lv_img_decoder_read_line_f_t)(struct _lv_img_decoder * decoder, struct _lv_img_decoder_dsc * dsc,
                                                 lv_coord_t x, lv_coord_t y, lv_coord_t len, uint8_t * buf);






typedef void (*lv_img_decoder_close_f_t)(struct _lv_img_decoder * decoder, struct _lv_img_decoder_dsc * dsc);

typedef struct _lv_img_decoder
{
    lv_img_decoder_info_f_t info_cb;
    lv_img_decoder_open_f_t open_cb;
    lv_img_decoder_read_line_f_t read_line_cb;
    lv_img_decoder_close_f_t close_cb;


    lv_img_decoder_user_data_t user_data;

} lv_img_decoder_t;


typedef struct _lv_img_decoder_dsc
{

    lv_img_decoder_t * decoder;


    const void * src;


    const lv_style_t * style;


    lv_img_src_t src_type;


    lv_img_header_t header;



    const uint8_t * img_data;



    uint32_t time_to_open;



    const char * error_msg;


    void * user_data;
} lv_img_decoder_dsc_t;
# 223 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
void lv_img_decoder_init(void);
# 235 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
lv_res_t lv_img_decoder_get_info(const char * src, lv_img_header_t * header);
# 249 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
lv_res_t lv_img_decoder_open(lv_img_decoder_dsc_t * dsc, const void * src, const lv_style_t * style);
# 260 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
lv_res_t lv_img_decoder_read_line(lv_img_decoder_dsc_t * dsc, lv_coord_t x, lv_coord_t y, lv_coord_t len,
                                  uint8_t * buf);





void lv_img_decoder_close(lv_img_decoder_dsc_t * dsc);





lv_img_decoder_t * lv_img_decoder_create(void);





void lv_img_decoder_delete(lv_img_decoder_t * decoder);






void lv_img_decoder_set_info_cb(lv_img_decoder_t * decoder, lv_img_decoder_info_f_t info_cb);






void lv_img_decoder_set_open_cb(lv_img_decoder_t * decoder, lv_img_decoder_open_f_t open_cb);






void lv_img_decoder_set_read_line_cb(lv_img_decoder_t * decoder, lv_img_decoder_read_line_f_t read_line_cb);






void lv_img_decoder_set_close_cb(lv_img_decoder_t * decoder, lv_img_decoder_close_f_t close_cb);
# 318 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
lv_res_t lv_img_decoder_built_in_info(lv_img_decoder_t * decoder, const void * src, lv_img_header_t * header);







lv_res_t lv_img_decoder_built_in_open(lv_img_decoder_t * decoder, lv_img_decoder_dsc_t * dsc);
# 339 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
lv_res_t lv_img_decoder_built_in_read_line(lv_img_decoder_t * decoder, lv_img_decoder_dsc_t * dsc, lv_coord_t x,
                                                  lv_coord_t y, lv_coord_t len, uint8_t * buf);






void lv_img_decoder_built_in_close(lv_img_decoder_t * decoder, lv_img_decoder_dsc_t * dsc);
# 17 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_cache.h" 2
# 31 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_cache.h"
typedef struct
{
    lv_img_decoder_dsc_t dec_dsc;




    int32_t life;
} lv_img_cache_entry_t;
# 53 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_cache.h"
lv_img_cache_entry_t * lv_img_cache_open(const void * src, const lv_style_t * style);







void lv_img_cache_set_size(uint16_t new_slot_num);






void lv_img_cache_invalidate_src(const void * src);
# 28 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h" 2
# 271 "./mpconfigport.h" 2
# 333 "./mpconfigport.h"
typedef int mp_int_t;
typedef unsigned int mp_uint_t;
typedef long mp_off_t;
# 347 "./mpconfigport.h"
static inline void enable_irq(mp_uint_t state) {
    __set_PRIMASK(state);
}

static inline mp_uint_t disable_irq(void) {
    mp_uint_t state = __get_PRIMASK();
    __disable_irq();
    return state;
}
# 395 "./mpconfigport.h"
# 1 "/usr/include/newlib/alloca.h" 1 3
# 395 "./mpconfigport.h" 2
# 63 "../../py/mpconfig.h" 2
# 646 "../../py/mpconfig.h"
typedef float mp_float_t;
# 28 "<stdin>" 2





QCFG(BYTES_IN_LEN, (1))
QCFG(BYTES_IN_HASH, (2))

Q()
Q(*)
Q(_)
Q(/)

Q(%#o)
Q(%#x)




Q({:#b})
Q( )
Q(\n)
Q(maximum recursion depth exceeded)
Q(<module>)
Q(<lambda>)
Q(<listcomp>)
Q(<dictcomp>)
Q(<setcomp>)
Q(<genexpr>)
Q(<string>)
Q(<stdin>)
Q(utf-8)
# 93 "<stdin>"
Q(/flash)
Q(/flash/lib)
Q(/sd)
Q(/sd/lib)


Q(/)



Q(MSC+HID)
Q(VCP+MSC)
Q(VCP+HID)

Q(A0)
Q(A1)
Q(A10)
Q(A11)
Q(A12)
Q(A13)
Q(A14)
Q(A15)
Q(A2)
Q(A3)
Q(A4)
Q(A5)
Q(A6)
Q(A7)
Q(A8)
Q(A9)



Q(AF12_TIM1)
Q(AF13_TIM8)
Q(AF14_TIM15)
Q(AF14_TIM16)
Q(AF14_TIM17)
Q(AF14_TIM2)
Q(AF1_TIM1)
Q(AF1_TIM2)
Q(AF1_TIM5)
Q(AF2_TIM2)
Q(AF2_TIM3)
Q(AF2_TIM4)
Q(AF2_TIM5)




Q(AF3_SPI2)

Q(AF3_TIM1)
Q(AF3_TIM8)

Q(AF3_USART2)


Q(AF4_I2C1)





Q(AF4_I2C3)
# 169 "<stdin>"
Q(AF5_SPI2)





Q(AF6_I2C3)
# 184 "<stdin>"
Q(AF7_USART2)
# 198 "<stdin>"
Q(B0)
Q(B1)
Q(B10)
Q(B11)
Q(B12)
Q(B13)
Q(B14)
Q(B15)
Q(B2)
Q(B3)
Q(B4)
Q(B5)
Q(B6)
Q(B7)
Q(B8)
Q(B9)
Q(C0)
Q(C1)
Q(C10)
Q(C11)
Q(C12)
Q(C13)
Q(C14)
Q(C15)
Q(C2)
Q(C3)
Q(C4)
Q(C5)
Q(C6)
Q(C7)
Q(C8)
Q(C9)
Q(D0)
Q(D1)
Q(D10)
Q(D11)
Q(D12)
Q(D13)
Q(D14)
Q(D15)
Q(D2)
Q(D3)
Q(D4)
Q(D5)
Q(D6)
Q(D7)
Q(D8)
Q(D9)
Q(E0)
Q(E1)
Q(E10)
Q(E11)
Q(E12)
Q(E13)
Q(E14)
Q(E15)
Q(E2)
Q(E3)
Q(E4)
Q(E5)
Q(E6)
Q(E7)
Q(E8)
Q(E9)
Q(F0)
Q(F1)
Q(F10)
Q(F11)
Q(F12)
Q(F13)
Q(F14)
Q(F15)
Q(F2)
Q(F3)
Q(F4)
Q(F5)
Q(F6)
Q(F7)
Q(F8)
Q(F9)
Q(G0)
Q(G1)
Q(G10)
Q(G11)
Q(G12)
Q(G13)
Q(G14)
Q(G15)
Q(G2)
Q(G3)
Q(G4)
Q(G5)
Q(G6)
Q(G7)
Q(G8)
Q(G9)
Q(H0)
Q(H1)
Q(H10)
Q(H11)
Q(H12)
Q(H13)
Q(H14)
Q(H15)
Q(H2)
Q(H3)
Q(H4)
Q(H5)
Q(H6)
Q(H7)
Q(H8)
Q(H9)
Q(I0)
Q(I1)
Q(I10)
Q(I11)
Q(I2)
Q(I3)
Q(I4)
Q(I5)
Q(I6)
Q(I7)
Q(I8)
Q(I9)
Q(PA0)
Q(PA1)
Q(PA10)
Q(PA11)
Q(PA12)
Q(PA13)
Q(PA14)
Q(PA15)
Q(PA2)
Q(PA3)
Q(PA4)
Q(PA5)
Q(PA6)
Q(PA7)
Q(PA8)
Q(PA9)
Q(PB0)
Q(PB1)
Q(PB10)
Q(PB11)
Q(PB12)
Q(PB13)
Q(PB14)
Q(PB15)
Q(PB2)
Q(PB3)
Q(PB4)
Q(PB5)
Q(PB6)
Q(PB7)
Q(PB8)
Q(PB9)
Q(PC0)
Q(PC1)
Q(PC10)
Q(PC11)
Q(PC12)
Q(PC13)
Q(PC14)
Q(PC15)
Q(PC2)
Q(PC3)
Q(PC4)
Q(PC5)
Q(PC6)
Q(PC7)
Q(PC8)
Q(PC9)
Q(PD0)
Q(PD1)
Q(PD10)
Q(PD11)
Q(PD12)
Q(PD13)
Q(PD14)
Q(PD15)
Q(PD2)
Q(PD3)
Q(PD4)
Q(PD5)
Q(PD6)
Q(PD7)
Q(PD8)
Q(PD9)
Q(PE0)
Q(PE1)
Q(PE10)
Q(PE11)
Q(PE12)
Q(PE13)
Q(PE14)
Q(PE15)
Q(PE2)
Q(PE3)
Q(PE4)
Q(PE5)
Q(PE6)
Q(PE7)
Q(PE8)
Q(PE9)
Q(PF0)
Q(PF1)
Q(PF10)
Q(PF11)
Q(PF12)
Q(PF13)
Q(PF14)
Q(PF15)
Q(PF2)
Q(PF3)
Q(PF4)
Q(PF5)
Q(PF6)
Q(PF7)
Q(PF8)
Q(PF9)
Q(PG0)
Q(PG1)
Q(PG10)
Q(PG11)
Q(PG12)
Q(PG13)
Q(PG14)
Q(PG15)
Q(PG2)
Q(PG3)
Q(PG4)
Q(PG5)
Q(PG6)
Q(PG7)
Q(PG8)
Q(PG9)
Q(PH0)
Q(PH1)
Q(PH10)
Q(PH11)
Q(PH12)
Q(PH13)
Q(PH14)
Q(PH15)
Q(PH2)
Q(PH3)
Q(PH4)
Q(PH5)
Q(PH6)
Q(PH7)
Q(PH8)
Q(PH9)
Q(PI0)
Q(PI1)
Q(PI10)
Q(PI11)
Q(PI2)
Q(PI3)
Q(PI4)
Q(PI5)
Q(PI6)
Q(PI7)
Q(PI8)
Q(PI9)

Q(ADC1)
Q(ADC1_COMMON)
Q(ADC_AWD2CR)
Q(ADC_AWD3CR)
Q(ADC_CALFACT)
Q(ADC_CFGR)
Q(ADC_CFGR2)
Q(ADC_CR)
Q(ADC_DIFSEL)
Q(ADC_DR)
Q(ADC_IER)
Q(ADC_ISR)
Q(ADC_JDR1)
Q(ADC_JDR2)
Q(ADC_JDR3)
Q(ADC_JDR4)
Q(ADC_JSQR)
Q(ADC_OFR1)
Q(ADC_OFR2)
Q(ADC_OFR3)
Q(ADC_OFR4)
Q(ADC_SMPR1)
Q(ADC_SMPR2)
Q(ADC_SQR1)
Q(ADC_SQR2)
Q(ADC_SQR3)
Q(ADC_SQR4)
Q(ADC_TR1)
Q(ADC_TR2)
Q(ADC_TR3)
Q(CAN)
Q(CAN1)
Q(COMP1)
Q(COMP12_COMMON)
Q(COMP2)
Q(CRC)
Q(CRC_CR)
Q(CRC_DR)
Q(CRC_IDR)
Q(CRC_INIT)
Q(CRC_POL)
Q(CRS)
Q(DAC)
Q(DAC1)
Q(DAC_CCR)
Q(DAC_CR)
Q(DAC_DHR12L1)
Q(DAC_DHR12L2)
Q(DAC_DHR12LD)
Q(DAC_DHR12R1)
Q(DAC_DHR12R2)
Q(DAC_DHR12RD)
Q(DAC_DHR8R1)
Q(DAC_DHR8R2)
Q(DAC_DHR8RD)
Q(DAC_DOR1)
Q(DAC_DOR2)
Q(DAC_MCR)
Q(DAC_SHHR)
Q(DAC_SHRR)
Q(DAC_SHSR1)
Q(DAC_SHSR2)
Q(DAC_SR)
Q(DAC_SWTRIGR)
Q(DBGMCU)
Q(DBGMCU_APB1FZR1)
Q(DBGMCU_APB1FZR2)
Q(DBGMCU_APB2FZ)
Q(DBGMCU_CR)
Q(DBGMCU_IDCODE)
Q(DCMI)
Q(DMA2)
Q(DMAMUX1)
Q(DMA_IFCR)
Q(DMA_ISR)
Q(EXTI)
Q(EXTI_EMR1)
Q(EXTI_EMR2)
Q(EXTI_FTSR1)
Q(EXTI_FTSR2)
Q(EXTI_IMR1)
Q(EXTI_IMR2)
Q(EXTI_PR1)
Q(EXTI_PR2)
Q(EXTI_RTSR1)
Q(EXTI_RTSR2)
Q(EXTI_SWIER1)
Q(EXTI_SWIER2)
Q(FIREWALL)
Q(FLASH)
Q(FLASH_ACR)
Q(FLASH_CFGR)
Q(FLASH_CR)
Q(FLASH_ECCR)
Q(FLASH_KEYR)
Q(FLASH_OPTKEYR)
Q(FLASH_OPTR)
Q(FLASH_PCROP1ER)
Q(FLASH_PCROP1SR)
Q(FLASH_PCROP2ER)
Q(FLASH_PCROP2SR)
Q(FLASH_PDKEYR)
Q(FLASH_RESERVED1)
Q(FLASH_SR)
Q(FLASH_WRP1AR)
Q(FLASH_WRP1BR)
Q(FLASH_WRP2AR)
Q(FLASH_WRP2BR)
Q(GFXMMU)
Q(GPIOA)
Q(GPIOB)
Q(GPIOC)
Q(GPIOD)
Q(GPIOE)
Q(GPIOF)
Q(GPIOG)
Q(GPIOH)
Q(GPIOI)
Q(GPIO_AFR0)
Q(GPIO_AFR1)
Q(GPIO_BRR)
Q(GPIO_BSRR)
Q(GPIO_IDR)
Q(GPIO_LCKR)
Q(GPIO_MODER)
Q(GPIO_ODR)
Q(GPIO_OSPEEDR)
Q(GPIO_OTYPER)
Q(GPIO_PUPDR)
Q(I2C1)
Q(I2C2)
Q(I2C3)
Q(I2C4)
Q(I2C_CR1)
Q(I2C_CR2)
Q(I2C_ICR)
Q(I2C_ISR)
Q(I2C_OAR1)
Q(I2C_OAR2)
Q(I2C_PECR)
Q(I2C_RXDR)
Q(I2C_TIMEOUTR)
Q(I2C_TIMINGR)
Q(I2C_TXDR)
Q(IWDG)
Q(IWDG_KR)
Q(IWDG_PR)
Q(IWDG_RLR)
Q(IWDG_SR)
Q(IWDG_WINR)
Q(LPTIM1)
Q(LPTIM2)
Q(LPUART1)
Q(OCTOSPI1)
Q(OCTOSPI2)
Q(OCTOSPIM)
Q(OPAMP)
Q(OPAMP1)
Q(OPAMP12_COMMON)
Q(OPAMP2)
Q(PWR)
Q(PWR_CR1)
Q(PWR_CR2)
Q(PWR_CR3)
Q(PWR_CR4)
Q(PWR_CR5)
Q(PWR_PDCRA)
Q(PWR_PDCRB)
Q(PWR_PDCRC)
Q(PWR_PDCRD)
Q(PWR_PDCRE)
Q(PWR_PDCRF)
Q(PWR_PDCRG)
Q(PWR_PDCRH)
Q(PWR_PDCRI)
Q(PWR_PUCRA)
Q(PWR_PUCRB)
Q(PWR_PUCRC)
Q(PWR_PUCRD)
Q(PWR_PUCRE)
Q(PWR_PUCRF)
Q(PWR_PUCRG)
Q(PWR_PUCRH)
Q(PWR_PUCRI)
Q(PWR_SCR)
Q(PWR_SR1)
Q(PWR_SR2)
Q(RCC)
Q(RCC_AHB1ENR)
Q(RCC_AHB1RSTR)
Q(RCC_AHB1SMENR)
Q(RCC_AHB2ENR)
Q(RCC_AHB2RSTR)
Q(RCC_AHB2SMENR)
Q(RCC_AHB3ENR)
Q(RCC_AHB3RSTR)
Q(RCC_AHB3SMENR)
Q(RCC_APB1ENR1)
Q(RCC_APB1ENR2)
Q(RCC_APB1RSTR1)
Q(RCC_APB1RSTR2)
Q(RCC_APB1SMENR1)
Q(RCC_APB1SMENR2)
Q(RCC_APB2ENR)
Q(RCC_APB2RSTR)
Q(RCC_APB2SMENR)
Q(RCC_BDCR)
Q(RCC_CCIPR)
Q(RCC_CCIPR2)
Q(RCC_CFGR)
Q(RCC_CICR)
Q(RCC_CIER)
Q(RCC_CIFR)
Q(RCC_CR)
Q(RCC_CRRCR)
Q(RCC_CSR)
Q(RCC_ICSCR)
Q(RCC_PLLCFGR)
Q(RCC_PLLSAI1CFGR)
Q(RCC_PLLSAI2CFGR)
Q(RNG)
Q(RNG_CR)
Q(RNG_DR)
Q(RNG_SR)
Q(RTC)
Q(RTC_ALRMAR)
Q(RTC_ALRMASSR)
Q(RTC_ALRMBR)
Q(RTC_ALRMBSSR)
Q(RTC_BKP0R)
Q(RTC_BKP10R)
Q(RTC_BKP11R)
Q(RTC_BKP12R)
Q(RTC_BKP13R)
Q(RTC_BKP14R)
Q(RTC_BKP15R)
Q(RTC_BKP16R)
Q(RTC_BKP17R)
Q(RTC_BKP18R)
Q(RTC_BKP19R)
Q(RTC_BKP1R)
Q(RTC_BKP20R)
Q(RTC_BKP21R)
Q(RTC_BKP22R)
Q(RTC_BKP23R)
Q(RTC_BKP24R)
Q(RTC_BKP25R)
Q(RTC_BKP26R)
Q(RTC_BKP27R)
Q(RTC_BKP28R)
Q(RTC_BKP29R)
Q(RTC_BKP2R)
Q(RTC_BKP30R)
Q(RTC_BKP31R)
Q(RTC_BKP3R)
Q(RTC_BKP4R)
Q(RTC_BKP5R)
Q(RTC_BKP6R)
Q(RTC_BKP7R)
Q(RTC_BKP8R)
Q(RTC_BKP9R)
Q(RTC_CALR)
Q(RTC_CR)
Q(RTC_DR)
Q(RTC_ISR)
Q(RTC_OR)
Q(RTC_PRER)
Q(RTC_SHIFTR)
Q(RTC_SSR)
Q(RTC_TAMPCR)
Q(RTC_TR)
Q(RTC_TSDR)
Q(RTC_TSSSR)
Q(RTC_TSTR)
Q(RTC_WPR)
Q(RTC_WUTR)
Q(SAI1)
Q(SAI2)
Q(SDMMC1)
Q(SPI1)
Q(SPI2)
Q(SPI3)
Q(SPI_CR1)
Q(SPI_CR2)
Q(SPI_CRCPR)
Q(SPI_DR)
Q(SPI_RXCRCR)
Q(SPI_SR)
Q(SPI_TXCRCR)
Q(SYSCFG)
Q(SYSCFG_CFGR1)
Q(SYSCFG_CFGR2)
Q(SYSCFG_EXTICR0)
Q(SYSCFG_EXTICR1)
Q(SYSCFG_EXTICR2)
Q(SYSCFG_EXTICR3)
Q(SYSCFG_MEMRMP)
Q(SYSCFG_SCSR)
Q(SYSCFG_SKR)
Q(SYSCFG_SWPR)
Q(SYSCFG_SWPR2)
Q(TIM1)
Q(TIM15)
Q(TIM16)
Q(TIM17)
Q(TIM2)
Q(TIM3)
Q(TIM4)
Q(TIM5)
Q(TIM6)
Q(TIM7)
Q(TIM8)
Q(TIM_ARR)
Q(TIM_BDTR)
Q(TIM_CCER)
Q(TIM_CCMR1)
Q(TIM_CCMR2)
Q(TIM_CCMR3)
Q(TIM_CCR1)
Q(TIM_CCR2)
Q(TIM_CCR3)
Q(TIM_CCR4)
Q(TIM_CCR5)
Q(TIM_CCR6)
Q(TIM_CNT)
Q(TIM_CR1)
Q(TIM_CR2)
Q(TIM_DCR)
Q(TIM_DIER)
Q(TIM_DMAR)
Q(TIM_EGR)
Q(TIM_OR1)
Q(TIM_OR2)
Q(TIM_OR3)
Q(TIM_PSC)
Q(TIM_RCR)
Q(TIM_SMCR)
Q(TIM_SR)
Q(TSC)
Q(UART4)
Q(UART5)
Q(USART1)
Q(USART2)
Q(USART3)
Q(USART_BRR)
Q(USART_CR1)
Q(USART_CR2)
Q(USART_CR3)
Q(USART_GTPR)
Q(USART_ICR)
Q(USART_ISR)
Q(USART_PRESC)
Q(USART_RDR)
Q(USART_RQR)
Q(USART_RTOR)
Q(USART_TDR)
Q(VREFBUF)
Q(WWDG)
Q(WWDG_CFR)
Q(WWDG_CR)
Q(WWDG_SR)

Q(ADC)

Q(ADC)

Q(ADC)

Q(ADC)

Q(ADC1)

Q(ADC1_COMMON)

Q(ADCAll)

Q(ADCAll)

Q(ADC_AWD2CR)

Q(ADC_AWD3CR)

Q(ADC_CALFACT)

Q(ADC_CFGR)

Q(ADC_CFGR2)

Q(ADC_CR)

Q(ADC_DIFSEL)

Q(ADC_DR)

Q(ADC_IER)

Q(ADC_ISR)

Q(ADC_JDR1)

Q(ADC_JDR2)

Q(ADC_JDR3)

Q(ADC_JDR4)

Q(ADC_JSQR)

Q(ADC_OFR1)

Q(ADC_OFR2)

Q(ADC_OFR3)

Q(ADC_OFR4)

Q(ADC_SMPR1)

Q(ADC_SMPR2)

Q(ADC_SQR1)

Q(ADC_SQR2)

Q(ADC_SQR3)

Q(ADC_SQR4)

Q(ADC_TR1)

Q(ADC_TR2)

Q(ADC_TR3)

Q(AF14_TIM15)

Q(AF14_TIM16)

Q(AF14_TIM17)

Q(AF1_TIM1)

Q(AF1_TIM2)

Q(AF1_TIM5)

Q(AF2_TIM2)

Q(AF2_TIM3)

Q(AF2_TIM4)

Q(AF2_TIM5)

Q(AF3_SPI2)

Q(AF3_TIM8)

Q(AF3_USART2)

Q(AF4_I2C1)

Q(AF4_I2C3)

Q(AF5_SPI2)

Q(AF6_I2C3)

Q(AF7_USART2)

Q(AF_INET)

Q(AF_INET6)

Q(AF_OD)

Q(AF_PP)

Q(ALIGN)

Q(ALIGN)

Q(ALL)

Q(ALPHA_1BIT)

Q(ALPHA_2BIT)

Q(ALPHA_4BIT)

Q(ALPHA_8BIT)

Q(ALT)

Q(ALT)

Q(ALT_OPEN_DRAIN)

Q(ALT_OPEN_DRAIN)

Q(ANALOG)

Q(ANIM)

Q(APPLY)

Q(AREA)

Q(ARRAY)

Q(AUDIO)

Q(AUTO)

Q(AUTO)

Q(AUTO)

Q(AUTO)

Q(AXIS)

Q(ArithmeticError)

Q(ArithmeticError)

Q(AssertionError)

Q(AssertionError)

Q(AssertionError)

Q(AttributeError)

Q(AttributeError)

Q(BACKSPACE)

Q(BACKWARD)

Q(BAR_ANIM_STATE)

Q(BASE_DIR_CHG)

Q(BATTERY_1)

Q(BATTERY_2)

Q(BATTERY_3)

Q(BATTERY_EMPTY)

Q(BATTERY_FULL)

Q(BELL)

Q(BFINT16)

Q(BFINT32)

Q(BFINT8)

Q(BFUINT16)

Q(BFUINT32)

Q(BFUINT8)

Q(BF_LEN)

Q(BF_POS)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BIDI_DIR)

Q(BIG_ENDIAN)

Q(BLOCK)

Q(BLUETOOTH)

Q(BORDER)

Q(BOTH)

Q(BOTH)

Q(BOTTOM)

Q(BOTTOM)

Q(BOTTOM)

Q(BOTTOM)

Q(BOX_INA)

Q(BOX_PR)

Q(BOX_REL)

Q(BOX_TGL_PR)

Q(BOX_TGL_REL)

Q(BREAK)

Q(BRK_HIGH)

Q(BRK_LOW)

Q(BRK_OFF)

Q(BTNM_BTN)

Q(BTNS_POS)

Q(BTN_BG)

Q(BTN_BG)

Q(BTN_INA)

Q(BTN_INA)

Q(BTN_INA)

Q(BTN_INA)

Q(BTN_PR)

Q(BTN_PR)

Q(BTN_PR)

Q(BTN_PR)

Q(BTN_PR)

Q(BTN_PR)

Q(BTN_REL)

Q(BTN_REL)

Q(BTN_REL)

Q(BTN_REL)

Q(BTN_REL)

Q(BTN_REL)

Q(BTN_TGL_PR)

Q(BTN_TGL_PR)

Q(BTN_TGL_PR)

Q(BTN_TGL_PR)

Q(BTN_TGL_PR)

Q(BTN_TGL_REL)

Q(BTN_TGL_REL)

Q(BTN_TGL_REL)

Q(BTN_TGL_REL)

Q(BTN_TGL_REL)

Q(BUSY)

Q(BUTTON)

Q(BaseException)

Q(BaseException)

Q(BaseException)

Q(Blob)

Q(Blob)

Q(BytesIO)

Q(BytesIO)

Q(CALL)

Q(CAN)

Q(CAN1)

Q(CANCEL)

Q(CELL1)

Q(CELL2)

Q(CELL3)

Q(CELL4)

Q(CENTER)

Q(CENTER)

Q(CENTER)

Q(CENTER)

Q(CENTER)

Q(CF)

Q(CHARGE)

Q(CHART_POINT)

Q(CHART_TICK_LENGTH)

Q(CHILD_CHG)

Q(CHILD_CHG)

Q(CIRCLE)

Q(CIRCULAR)

Q(CLEANUP)

Q(CLICKED)

Q(CLICK_FOCUS)

Q(CLICK_TRIG)

Q(CLOSE)

Q(COLOR_MODE)

Q(COLUMN)

Q(COL_L)

Q(COL_M)

Q(COL_R)

Q(COMP1)

Q(COMP12_COMMON)

Q(COMP2)

Q(COMPRESSED)

Q(CONSTANT_ARC)

Q(CONTENT)

Q(CONTROL)

Q(COORD)

Q(COPY)

Q(CORD_CHG)

Q(CORE_TEMP)

Q(CORE_VBAT)

Q(CORE_VREF)

Q(COVER)

Q(COVER_CHK)

Q(CRC)

Q(CRC_CR)

Q(CRC_DR)

Q(CRC_IDR)

Q(CRC_INIT)

Q(CRC_POL)

Q(CROP)

Q(CRS)

Q(CTRL)

Q(CTS)

Q(CTS)

Q(CURSOR)

Q(CURSOR)

Q(CURSOR)

Q(CUT)

Q(C_Pointer)

Q(C_Pointer)

Q(C_Pointer)

Q(C_Pointer)

Q(DAC)

Q(DAC1)

Q(DAC_CCR)

Q(DAC_CR)

Q(DAC_DHR12L1)

Q(DAC_DHR12L2)

Q(DAC_DHR12LD)

Q(DAC_DHR12R1)

Q(DAC_DHR12R2)

Q(DAC_DHR12RD)

Q(DAC_DHR8R1)

Q(DAC_DHR8R2)

Q(DAC_DHR8RD)

Q(DAC_DOR1)

Q(DAC_DOR2)

Q(DAC_MCR)

Q(DAC_SHHR)

Q(DAC_SHRR)

Q(DAC_SHSR1)

Q(DAC_SHSR2)

Q(DAC_SR)

Q(DAC_SWTRIGR)

Q(DAY_NAMES)

Q(DBGMCU)

Q(DBGMCU_APB1FZR1)

Q(DBGMCU_APB1FZR2)

Q(DBGMCU_APB2FZ)

Q(DBGMCU_CR)

Q(DBGMCU_IDCODE)

Q(DCMI)

Q(DEEPSLEEP_RESET)

Q(DEF)

Q(DEFOCUS)

Q(DEFOCUSED)

Q(DEL)

Q(DELETE)

Q(DENIED)

Q(DESIGN)

Q(DIR)

Q(DIRECTORY)

Q(DISC)

Q(DMA2)

Q(DMAMUX1)

Q(DMA_IFCR)

Q(DMA_ISR)

Q(DOT)

Q(DOWN)

Q(DOWN)

Q(DOWN)

Q(DOWNLOAD)

Q(DRAG)

Q(DRAG_BEGIN)

Q(DRAG_BEGIN)

Q(DRAG_DIR)

Q(DRAG_END)

Q(DRAG_END)

Q(DRAG_THROW_BEGIN)

Q(DRAW_LAST_TICK)

Q(DRAW_MAIN)

Q(DRAW_POST)

Q(DRIVE)

Q(DUMMY)

Q(DecompIO)

Q(DecompIO)

Q(EACCES)

Q(EACCES)

Q(EADDRINUSE)

Q(EADDRINUSE)

Q(EAGAIN)

Q(EAGAIN)

Q(EALREADY)

Q(EALREADY)

Q(EBADF)

Q(EBADF)

Q(ECONNABORTED)

Q(ECONNABORTED)

Q(ECONNREFUSED)

Q(ECONNREFUSED)

Q(ECONNRESET)

Q(ECONNRESET)

Q(EDGE)

Q(EDGE_FLASH)

Q(EDGE_FLASH)

Q(EDGE_FLASH)

Q(EDIT)

Q(EEXIST)

Q(EEXIST)

Q(EHOSTUNREACH)

Q(EHOSTUNREACH)

Q(EINPROGRESS)

Q(EINPROGRESS)

Q(EINVAL)

Q(EINVAL)

Q(EIO)

Q(EIO)

Q(EISDIR)

Q(EISDIR)

Q(EJECT)

Q(ENCODER)

Q(ENC_A)

Q(ENC_A)

Q(ENC_AB)

Q(ENC_AB)

Q(ENC_B)

Q(ENC_B)

Q(END)

Q(END)

Q(ENOBUFS)

Q(ENOBUFS)

Q(ENODEV)

Q(ENODEV)

Q(ENOENT)

Q(ENOENT)

Q(ENOMEM)

Q(ENOMEM)

Q(ENOTCONN)

Q(ENOTCONN)

Q(ENTER)

Q(ENUM_LV_BAR_ANIM_STATE)

Q(ENUM_LV_BTNM_BTN)

Q(ENUM_LV_CHART_POINT)

Q(ENUM_LV_CHART_TICK_LENGTH)

Q(ENUM_LV_COORD)

Q(ENUM_LV_LABEL_DOT)

Q(ENUM_LV_LABEL_POS)

Q(ENUM_LV_LABEL_TEXT_SEL)

Q(ENUM_LV_LOG_LEVEL)

Q(ENUM_LV_RADIUS)

Q(ENUM_LV_TA_CURSOR)

Q(EOFError)

Q(EOFError)

Q(EOPNOTSUPP)

Q(EOPNOTSUPP)

Q(EPERM)

Q(EPERM)

Q(ERROR)

Q(ESC)

Q(ETIMEDOUT)

Q(ETIMEDOUT)

Q(EVENT)

Q(EVT_FALLING)

Q(EVT_RISING)

Q(EVT_RISING_FALLING)

Q(EXPAND)

Q(EXPAND)

Q(EXTI)

Q(EXTI_EMR1)

Q(EXTI_EMR2)

Q(EXTI_FTSR1)

Q(EXTI_FTSR2)

Q(EXTI_IMR1)

Q(EXTI_IMR2)

Q(EXTI_PR1)

Q(EXTI_PR2)

Q(EXTI_RTSR1)

Q(EXTI_RTSR2)

Q(EXTI_SWIER1)

Q(EXTI_SWIER2)

Q(Ellipsis)

Q(Ellipsis)

Q(Exception)

Q(Exception)

Q(ExtInt)

Q(ExtInt)

Q(FALLING)

Q(FILE)

Q(FILE)

Q(FILL)

Q(FILLSPIN_ARC)

Q(FIREWALL)

Q(FIT)

Q(FLASH)

Q(FLASH_ACR)

Q(FLASH_CFGR)

Q(FLASH_CR)

Q(FLASH_ECCR)

Q(FLASH_KEYR)

Q(FLASH_OPTKEYR)

Q(FLASH_OPTR)

Q(FLASH_PCROP1ER)

Q(FLASH_PCROP1SR)

Q(FLASH_PCROP2ER)

Q(FLASH_PCROP2SR)

Q(FLASH_PDKEYR)

Q(FLASH_RESERVED1)

Q(FLASH_SR)

Q(FLASH_WRP1AR)

Q(FLASH_WRP1BR)

Q(FLASH_WRP2AR)

Q(FLASH_WRP2BR)

Q(FLOAT32)

Q(FLOAT64)

Q(FLOOD)

Q(FOCUS)

Q(FOCUSED)

Q(FOLLOW)

Q(FONT_FMT_TXT)

Q(FONT_FMT_TXT_CMAP)

Q(FONT_SUBPX)

Q(FORMAT0_FULL)

Q(FORMAT0_TINY)

Q(FORWARD)

Q(FS_ERR)

Q(FS_MODE)

Q(FS_RES)

Q(FULL)

Q(FULL)

Q(FULL)

Q(FileIO)

Q(FileIO)

Q(FileIO)

Q(FileIO)

Q(Flash)

Q(FrameBuffer)

Q(FrameBuffer)

Q(FrameBuffer1)

Q(GET_EDITABLE)

Q(GET_TYPE)

Q(GFXMMU)

Q(GPIOA)

Q(GPIOB)

Q(GPIOC)

Q(GPIOD)

Q(GPIOE)

Q(GPIOF)

Q(GPIOG)

Q(GPIOH)

Q(GPIOI)

Q(GPIO_AFR0)

Q(GPIO_AFR1)

Q(GPIO_BRR)

Q(GPIO_BSRR)

Q(GPIO_IDR)

Q(GPIO_LCKR)

Q(GPIO_MODER)

Q(GPIO_ODR)

Q(GPIO_OSPEEDR)

Q(GPIO_OTYPER)

Q(GPIO_PUPDR)

Q(GPS)

Q(GREY)

Q(GREY_ALPHA)

Q(GRID)

Q(GROUP_REFOCUS_POLICY)

Q(GS2_HMSB)

Q(GS4_HMSB)

Q(GS8)

Q(GeneratorExit)

Q(GeneratorExit)

Q(HARD_RESET)

Q(HEADER)

Q(HEADER)

Q(HEADER_PR)

Q(HID)

Q(HIDDEN)

Q(HIDDEN)

Q(HIDE)

Q(HIGH)

Q(HIGH)

Q(HIGHEST)

Q(HIGHLIGHTED_DAYS)

Q(HOME)

Q(HOME)

Q(HOR)

Q(HOR)

Q(HUE)

Q(HW_ERR)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C1)

Q(I2C2)

Q(I2C3)

Q(I2C4)

Q(I2C_CR1)

Q(I2C_CR2)

Q(I2C_ICR)

Q(I2C_ISR)

Q(I2C_OAR1)

Q(I2C_OAR2)

Q(I2C_PECR)

Q(I2C_RXDR)

Q(I2C_TIMEOUTR)

Q(I2C_TIMINGR)

Q(I2C_TXDR)

Q(IC)

Q(IC)

Q(IMAGE)

Q(IN)

Q(IN)

Q(IN)

Q(INA)

Q(INA)

Q(INA)

Q(INACTIVE)

Q(INACTIVE_DAYS)

Q(INDEV_STATE)

Q(INDEV_TYPE)

Q(INDEXED_1BIT)

Q(INDEXED_2BIT)

Q(INDEXED_4BIT)

Q(INDEXED_8BIT)

Q(INDIC)

Q(INDIC)

Q(INDIC)

Q(INDIC)

Q(INDICATOR)

Q(INFO)

Q(INHERIT)

Q(INIFINITE)

Q(INSERT)

Q(INT)

Q(INT16)

Q(INT32)

Q(INT64)

Q(INT8)

Q(INTERNAL)

Q(INV)

Q(INV)

Q(INVERSE_LABELS_ORDER)

Q(INV_PARAM)

Q(IN_BOTTOM_LEFT)

Q(IN_BOTTOM_MID)

Q(IN_BOTTOM_RIGHT)

Q(IN_LEFT_MID)

Q(IN_RIGHT_MID)

Q(IN_TOP_LEFT)

Q(IN_TOP_MID)

Q(IN_TOP_RIGHT)

Q(IOBase)

Q(IOBase)

Q(IRQ_FALLING)

Q(IRQ_FALLING)

Q(IRQ_RISING)

Q(IRQ_RISING)

Q(IRQ_RISING_FALLING)

Q(IRQ_RXIDLE)

Q(IWDG)

Q(IWDG_KR)

Q(IWDG_PR)

Q(IWDG_RLR)

Q(IWDG_SR)

Q(IWDG_WINR)

Q(ImportError)

Q(ImportError)

Q(IndentationError)

Q(IndentationError)

Q(IndexError)

Q(IndexError)

Q(KEY)

Q(KEY)

Q(KEYBOARD)

Q(KEYPAD)

Q(KNOB)

Q(KNOB_OFF)

Q(KNOB_ON)

Q(KeyError)

Q(KeyError)

Q(KeyboardInterrupt)

Q(KeyboardInterrupt)

Q(LABEL_DOT)

Q(LABEL_POS)

Q(LABEL_TEXT_SEL)

Q(LAST)

Q(LAST)

Q(LAYOUT)

Q(LCD)

Q(LCD)

Q(LCT)

Q(LCT)

Q(LED)

Q(LED)

Q(LED)

Q(LED)

Q(LEFT)

Q(LEFT)

Q(LEFT)

Q(LEFT)

Q(LEFT)

Q(LEFT)

Q(LINE)

Q(LINE)

Q(LIST)

Q(LITTLE_ENDIAN)

Q(LOCKED)

Q(LOG_LEVEL)

Q(LONG)

Q(LONG)

Q(LONGLONG)

Q(LONG_PRESS)

Q(LONG_PRESSED)

Q(LONG_PRESSED_REPEAT)

Q(LONG_PRESS_REP)

Q(LOOP)

Q(LOW)

Q(LOW)

Q(LOWEST)

Q(LPTIM1)

Q(LPTIM2)

Q(LPUART1)

Q(LSB)

Q(LSB)

Q(LTR)

Q(LV_ALIGN)

Q(LV_ANIM)

Q(LV_ARC_STYLE)

Q(LV_BAR_STYLE)

Q(LV_BIDI_DIR)

Q(LV_BORDER)

Q(LV_BTNM_CTRL)

Q(LV_BTNM_STYLE)

Q(LV_BTN_STATE)

Q(LV_BTN_STYLE)

Q(LV_CALENDAR_STYLE)

Q(LV_CANVAS_STYLE)

Q(LV_CB_STYLE)

Q(LV_CHART_AXIS)

Q(LV_CHART_STYLE)

Q(LV_CHART_TYPE)

Q(LV_CHART_UPDATE_MODE)

Q(LV_CONT_STYLE)

Q(LV_CPICKER_COLOR_MODE)

Q(LV_CPICKER_STYLE)

Q(LV_CPICKER_TYPE)

Q(LV_CURSOR)

Q(LV_DDLIST_STYLE)

Q(LV_DESIGN)

Q(LV_DRAG_DIR)

Q(LV_EVENT)

Q(LV_FIT)

Q(LV_FONT_FMT_TXT)

Q(LV_FONT_FMT_TXT_CMAP)

Q(LV_FONT_SUBPX)

Q(LV_FS_MODE)

Q(LV_FS_RES)

Q(LV_GAUGE_STYLE)

Q(LV_GROUP_REFOCUS_POLICY)

Q(LV_IMGBTN_STYLE)

Q(LV_IMG_CF)

Q(LV_IMG_SRC)

Q(LV_IMG_STYLE)

Q(LV_INDEV_STATE)

Q(LV_INDEV_TYPE)

Q(LV_KB_MODE)

Q(LV_KB_STYLE)

Q(LV_KEY)

Q(LV_LABEL_ALIGN)

Q(LV_LABEL_LONG)

Q(LV_LABEL_STYLE)

Q(LV_LAYOUT)

Q(LV_LED_STYLE)

Q(LV_LINE_STYLE)

Q(LV_LIST_STYLE)

Q(LV_LMETER_STYLE)

Q(LV_MBOX_STYLE)

Q(LV_OPA)

Q(LV_PAGE_EDGE)

Q(LV_PAGE_STYLE)

Q(LV_PRELOAD_DIR)

Q(LV_PRELOAD_STYLE)

Q(LV_PRELOAD_TYPE)

Q(LV_PROTECT)

Q(LV_RES)

Q(LV_ROLLER_MODE)

Q(LV_ROLLER_STYLE)

Q(LV_SB_MODE)

Q(LV_SHADOW)

Q(LV_SIGNAL)

Q(LV_SLIDER_STYLE)

Q(LV_SPINBOX_STYLE)

Q(LV_SW_STYLE)

Q(LV_SYMBOL)

Q(LV_TABLE_STYLE)

Q(LV_TABVIEW_BTNS_POS)

Q(LV_TABVIEW_STYLE)

Q(LV_TASK_PRIO)

Q(LV_TA_STYLE)

Q(LV_TILEVIEW_STYLE)

Q(LV_TXT_CMD_STATE)

Q(LV_TXT_FLAG)

Q(LV_WIN_STYLE)

Q(LodePNGColorMode)

Q(LodePNGColorMode)

Q(LodePNGDecoderSettings)

Q(LodePNGDecoderSettings)

Q(LodePNGDecompressSettings)

Q(LodePNGDecompressSettings)

Q(LodePNGDecompressSettings_custom_inflate)

Q(LodePNGDecompressSettings_custom_zlib)

Q(LodePNGInfo)

Q(LodePNGInfo)

Q(LodePNGState)

Q(LodePNGState)

Q(LodePNGTime)

Q(LodePNGTime)

Q(LookupError)

Q(LookupError)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MASTER)

Q(MASTER)

Q(MAX)

Q(MAX_OCTET_VALUE)

Q(MID)

Q(MIN)

Q(MINUS)

Q(MODE)

Q(MODE)

Q(MONO_HLSB)

Q(MONO_HMSB)

Q(MONO_VLSB)

Q(MSB)

Q(MSB)

Q(MSC)

Q(MSC_plus_HID)

Q(MUTE)

Q(MVLSB)

Q(MemoryError)

Q(MemoryError)

Q(NATIVE)

Q(NEUTRAL)

Q(NEXT)

Q(NEXT)

Q(NEXT)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NORM)

Q(NORMAL)

Q(NOT_EX)

Q(NOT_IMP)

Q(NO_REPEAT)

Q(NUM)

Q(NUM)

Q(NameError)

Q(NameError)

Q(None)

Q(NoneType)

Q(NotImplemented)

Q(NotImplemented)

Q(NotImplementedError)

Q(NotImplementedError)

Q(OCTOSPI1)

Q(OCTOSPI2)

Q(OCTOSPIM)

Q(OC_ACTIVE)

Q(OC_ACTIVE)

Q(OC_FORCED_ACTIVE)

Q(OC_FORCED_ACTIVE)

Q(OC_FORCED_INACTIVE)

Q(OC_FORCED_INACTIVE)

Q(OC_INACTIVE)

Q(OC_INACTIVE)

Q(OC_TIMING)

Q(OC_TIMING)

Q(OC_TOGGLE)

Q(OC_TOGGLE)

Q(OFF)

Q(OFF)

Q(OFF)

Q(OFF)

Q(OFF)

Q(OK)

Q(OK)

Q(OK)

Q(ON)

Q(ON)

Q(ONE_SHOT)

Q(ONE_SHOT)

Q(OPA)

Q(OPAMP)

Q(OPAMP1)

Q(OPAMP12_COMMON)

Q(OPAMP2)

Q(OPEN_DRAIN)

Q(OPEN_DRAIN)

Q(OSError)

Q(OSError)

Q(OUT)

Q(OUT)

Q(OUTLINE)

Q(OUT_BOTTOM_LEFT)

Q(OUT_BOTTOM_MID)

Q(OUT_BOTTOM_RIGHT)

Q(OUT_LEFT_BOTTOM)

Q(OUT_LEFT_MID)

Q(OUT_LEFT_TOP)

Q(OUT_OD)

Q(OUT_OF_MEM)

Q(OUT_PP)

Q(OUT_RIGHT_BOTTOM)

Q(OUT_RIGHT_MID)

Q(OUT_RIGHT_TOP)

Q(OUT_TOP_LEFT)

Q(OUT_TOP_MID)

Q(OUT_TOP_RIGHT)

Q(OrderedDict)

Q(OrderedDict)

Q(OrderedDict)

Q(OverflowError)

Q(OverflowError)

Q(PALETTE)

Q(PAR)

Q(PARENT)

Q(PARENT_SIZE_CHG)

Q(PAUSE)

Q(PERIODIC)

Q(PERIODIC)

Q(PLACEHOLDER)

Q(PLAIN)

Q(PLAY)

Q(PLUS)

Q(POINT)

Q(POINTER)

Q(POLLERR)

Q(POLLHUP)

Q(POLLIN)

Q(POLLOUT)

Q(POS)

Q(POWER)

Q(PR)

Q(PR)

Q(PR)

Q(PR)

Q(PRESSED)

Q(PRESSED)

Q(PRESSING)

Q(PRESSING)

Q(PRESS_LOST)

Q(PRESS_LOST)

Q(PRESS_LOST)

Q(PRETTY)

Q(PREV)

Q(PREV)

Q(PREV)

Q(PROTECT)

Q(PTR)

Q(PULL_DOWN)

Q(PULL_DOWN)

Q(PULL_NONE)

Q(PULL_UP)

Q(PULL_UP)

Q(PWM)

Q(PWM)

Q(PWM_INVERTED)

Q(PWM_INVERTED)

Q(PWR)

Q(PWRON_RESET)

Q(PWR_CR1)

Q(PWR_CR2)

Q(PWR_CR3)

Q(PWR_CR4)

Q(PWR_CR5)

Q(PWR_PDCRA)

Q(PWR_PDCRB)

Q(PWR_PDCRC)

Q(PWR_PDCRD)

Q(PWR_PDCRE)

Q(PWR_PDCRF)

Q(PWR_PDCRG)

Q(PWR_PDCRH)

Q(PWR_PDCRI)

Q(PWR_PUCRA)

Q(PWR_PUCRB)

Q(PWR_PUCRC)

Q(PWR_PUCRD)

Q(PWR_PUCRE)

Q(PWR_PUCRF)

Q(PWR_PUCRG)

Q(PWR_PUCRH)

Q(PWR_PUCRI)

Q(PWR_SCR)

Q(PWR_SR1)

Q(PWR_SR2)

Q(Pin)

Q(Pin)

Q(Pin)

Q(PinAF)

Q(PinBase)

Q(RADIUS)

Q(RAW)

Q(RAW_ALPHA)

Q(RAW_CHROMA_KEYED)

Q(RCC)

Q(RCC_AHB1ENR)

Q(RCC_AHB1RSTR)

Q(RCC_AHB1SMENR)

Q(RCC_AHB2ENR)

Q(RCC_AHB2RSTR)

Q(RCC_AHB2SMENR)

Q(RCC_AHB3ENR)

Q(RCC_AHB3RSTR)

Q(RCC_AHB3SMENR)

Q(RCC_APB1ENR1)

Q(RCC_APB1ENR2)

Q(RCC_APB1RSTR1)

Q(RCC_APB1RSTR2)

Q(RCC_APB1SMENR1)

Q(RCC_APB1SMENR2)

Q(RCC_APB2ENR)

Q(RCC_APB2RSTR)

Q(RCC_APB2SMENR)

Q(RCC_BDCR)

Q(RCC_CCIPR)

Q(RCC_CCIPR2)

Q(RCC_CFGR)

Q(RCC_CICR)

Q(RCC_CIER)

Q(RCC_CIFR)

Q(RCC_CR)

Q(RCC_CRRCR)

Q(RCC_CSR)

Q(RCC_ICSCR)

Q(RCC_PLLCFGR)

Q(RCC_PLLSAI1CFGR)

Q(RCC_PLLSAI2CFGR)

Q(RD)

Q(RECOLOR)

Q(RECT)

Q(REFRESH)

Q(REFRESH)

Q(REFR_EXT_DRAW_PAD)

Q(REL)

Q(REL)

Q(REL)

Q(REL)

Q(RELEASED)

Q(RELEASED)

Q(RES)

Q(RESERVED_15)

Q(RESERVED_16)

Q(RESERVED_17)

Q(RESERVED_18)

Q(RESERVED_19)

Q(RESERVED_20)

Q(RESERVED_21)

Q(RESERVED_22)

Q(RESERVED_23)

Q(RGB)

Q(RGB565)

Q(RGBA)

Q(RIGHT)

Q(RIGHT)

Q(RIGHT)

Q(RIGHT)

Q(RIGHT)

Q(RIGHT)

Q(RIGHT)

Q(RISING)

Q(RNG)

Q(RNG_CR)

Q(RNG_DR)

Q(RNG_SR)

Q(ROW_B)

Q(ROW_M)

Q(ROW_T)

Q(RTC)

Q(RTC)

Q(RTC)

Q(RTC)

Q(RTC_ALRMAR)

Q(RTC_ALRMASSR)

Q(RTC_ALRMBR)

Q(RTC_ALRMBSSR)

Q(RTC_BKP0R)

Q(RTC_BKP10R)

Q(RTC_BKP11R)

Q(RTC_BKP12R)

Q(RTC_BKP13R)

Q(RTC_BKP14R)

Q(RTC_BKP15R)

Q(RTC_BKP16R)

Q(RTC_BKP17R)

Q(RTC_BKP18R)

Q(RTC_BKP19R)

Q(RTC_BKP1R)

Q(RTC_BKP20R)

Q(RTC_BKP21R)

Q(RTC_BKP22R)

Q(RTC_BKP23R)

Q(RTC_BKP24R)

Q(RTC_BKP25R)

Q(RTC_BKP26R)

Q(RTC_BKP27R)

Q(RTC_BKP28R)

Q(RTC_BKP29R)

Q(RTC_BKP2R)

Q(RTC_BKP30R)

Q(RTC_BKP31R)

Q(RTC_BKP3R)

Q(RTC_BKP4R)

Q(RTC_BKP5R)

Q(RTC_BKP6R)

Q(RTC_BKP7R)

Q(RTC_BKP8R)

Q(RTC_BKP9R)

Q(RTC_CALR)

Q(RTC_CR)

Q(RTC_DR)

Q(RTC_ISR)

Q(RTC_OR)

Q(RTC_PRER)

Q(RTC_SHIFTR)

Q(RTC_SSR)

Q(RTC_TAMPCR)

Q(RTC_TR)

Q(RTC_TSDR)

Q(RTC_TSSSR)

Q(RTC_TSTR)

Q(RTC_WPR)

Q(RTC_WUTR)

Q(RTL)

Q(RTS)

Q(RTS)

Q(RuntimeError)

Q(RuntimeError)

Q(SAI1)

Q(SAI2)

Q(SATURATION)

Q(SAVE)

Q(SB)

Q(SB)

Q(SB)

Q(SB)

Q(SB)

Q(SB)

Q(SB_MODE)

Q(SCRL)

Q(SCRL)

Q(SDMMC1)

Q(SEL)

Q(SEL)

Q(SETTINGS)

Q(SHADOW)

Q(SHIFT)

Q(SHORT)

Q(SHORT_CLICKED)

Q(SHUFFLE)

Q(SIGNAL)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SKIP_LAST_TICK)

Q(SLAVE)

Q(SLAVE)

Q(SOCK_DGRAM)

Q(SOCK_RAW)

Q(SOCK_STREAM)

Q(SOFT_RESET)

Q(SPARSE_FULL)

Q(SPARSE_TINY)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI1)

Q(SPI2)

Q(SPI3)

Q(SPINNING_ARC)

Q(SPI_CR1)

Q(SPI_CR2)

Q(SPI_CRCPR)

Q(SPI_DR)

Q(SPI_RXCRCR)

Q(SPI_SR)

Q(SPI_TXCRCR)

Q(SRC)

Q(SROLL)

Q(SROLL_CIRC)

Q(START)

Q(STATE)

Q(STOP)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE)

Q(STYLE_CHG)

Q(SYMBOL)

Q(SYMBOL)

Q(SYSCFG)

Q(SYSCFG_CFGR1)

Q(SYSCFG_CFGR2)

Q(SYSCFG_EXTICR0)

Q(SYSCFG_EXTICR1)

Q(SYSCFG_EXTICR2)

Q(SYSCFG_EXTICR3)

Q(SYSCFG_MEMRMP)

Q(SYSCFG_SCSR)

Q(SYSCFG_SKR)

Q(SYSCFG_SWPR)

Q(SYSCFG_SWPR2)

Q(Signal)

Q(Signal)

Q(SoftSPI)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopIteration)

Q(StopIteration)

Q(StringIO)

Q(StringIO)

Q(Switch)

Q(Switch)

Q(SyntaxError)

Q(SyntaxError)

Q(SystemExit)

Q(SystemExit)

Q(TASK_PRIO)

Q(TA_CURSOR)

Q(TEXT)

Q(TEXT_UPPER)

Q(TGL_ENABLE)

Q(TGL_PR)

Q(TGL_PR)

Q(TGL_PR)

Q(TGL_REL)

Q(TGL_REL)

Q(TGL_REL)

Q(TGL_STATE)

Q(TIGHT)

Q(TIM1)

Q(TIM15)

Q(TIM16)

Q(TIM17)

Q(TIM2)

Q(TIM3)

Q(TIM4)

Q(TIM5)

Q(TIM6)

Q(TIM7)

Q(TIM8)

Q(TIM_ARR)

Q(TIM_BDTR)

Q(TIM_CCER)

Q(TIM_CCMR1)

Q(TIM_CCMR2)

Q(TIM_CCMR3)

Q(TIM_CCR1)

Q(TIM_CCR2)

Q(TIM_CCR3)

Q(TIM_CCR4)

Q(TIM_CCR5)

Q(TIM_CCR6)

Q(TIM_CNT)

Q(TIM_CR1)

Q(TIM_CR2)

Q(TIM_DCR)

Q(TIM_DIER)

Q(TIM_DMAR)

Q(TIM_EGR)

Q(TIM_OR1)

Q(TIM_OR2)

Q(TIM_OR3)

Q(TIM_PSC)

Q(TIM_RCR)

Q(TIM_SMCR)

Q(TIM_SR)

Q(TODAY_BOX)

Q(TOP)

Q(TOP)

Q(TOP)

Q(TOUT)

Q(TRACE)

Q(TRANSP)

Q(TRASH)

Q(TRUE_COLOR)

Q(TRUE_COLOR_ALPHA)

Q(TRUE_COLOR_CHROMA_KEYED)

Q(TSC)

Q(TXT_CMD_STATE)

Q(TXT_FLAG)

Q(TYPE)

Q(TYPE)

Q(TYPE)

Q(TextIOWrapper)

Q(TextIOWrapper)

Q(Timer)

Q(Timer)

Q(Timer)

Q(Timer)

Q(TimerChannel)

Q(TypeError)

Q(TypeError)

Q(UART)

Q(UART)

Q(UART)

Q(UART4)

Q(UART5)

Q(UINT)

Q(UINT16)

Q(UINT32)

Q(UINT64)

Q(UINT8)

Q(ULONG)

Q(ULONGLONG)

Q(UNDERLINE)

Q(UNHIDE)

Q(UNKNOWN)

Q(UNKNOWN)

Q(UNKNOWN)

Q(UP)

Q(UP)

Q(UP)

Q(UPDATE_MODE)

Q(UPLOAD)

Q(USART1)

Q(USART2)

Q(USART3)

Q(USART_BRR)

Q(USART_CR1)

Q(USART_CR2)

Q(USART_CR3)

Q(USART_GTPR)

Q(USART_ICR)

Q(USART_ISR)

Q(USART_PRESC)

Q(USART_RDR)

Q(USART_RQR)

Q(USART_RTOR)

Q(USART_TDR)

Q(USB_HID)

Q(USB_HID)

Q(USB_VCP)

Q(USB_VCP)

Q(USER_ENCODED_0)

Q(USER_ENCODED_1)

Q(USER_ENCODED_2)

Q(USER_ENCODED_3)

Q(USER_ENCODED_4)

Q(USER_ENCODED_5)

Q(USER_ENCODED_6)

Q(USER_ENCODED_7)

Q(USHORT)

Q(UnicodeError)

Q(UnicodeError)

Q(VALUE)

Q(VALUE_CHANGED)

Q(VARIABLE)

Q(VCP)

Q(VCP_plus_HID)

Q(VCP_plus_MSC)

Q(VER)

Q(VER)

Q(VERTICAL_LINE)

Q(VIDEO)

Q(VOID)

Q(VOLUME_MAX)

Q(VOLUME_MID)

Q(VREF)

Q(VREFBUF)

Q(ValueError)

Q(ValueError)

Q(VfsFat)

Q(VfsFat)

Q(ViperTypeError)

Q(ViperTypeError)

Q(WAIT)

Q(WARN)

Q(WARNING)

Q(WDT)

Q(WDT)

Q(WDT_RESET)

Q(WEAK)

Q(WEEK_BOX)

Q(WIFI)

Q(WR)

Q(WWDG)

Q(WWDG_CFR)

Q(WWDG_CR)

Q(WWDG_SR)

Q(ZeroDivisionError)

Q(ZeroDivisionError)

Q(_)

Q(_0)

Q(_0x0a_)

Q(_10)

Q(_100)

Q(_20)

Q(_30)

Q(_40)

Q(_50)

Q(_60)

Q(_70)

Q(_80)

Q(_90)

Q(__abs__)

Q(__add__)

Q(__aenter__)

Q(__aenter__)

Q(__aexit__)

Q(__aexit__)

Q(__aiter__)

Q(__and__)

Q(__anext__)

Q(__bases__)

Q(__bool__)

Q(__build_class__)

Q(__build_class__)

Q(__call__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__cast__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__contains__)

Q(__contains__)

Q(__contains__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__delattr__)

Q(__delattr__)

Q(__delattr__)

Q(__delete__)

Q(__delete__)

Q(__delitem__)

Q(__delitem__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dict__)

Q(__dir__)

Q(__divmod__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__eq__)

Q(__eq__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__file__)

Q(__file__)

Q(__file__)

Q(__floordiv__)

Q(__ge__)

Q(__get__)

Q(__get__)

Q(__getattr__)

Q(__getattr__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__gt__)

Q(__hash__)

Q(__iadd__)

Q(__import__)

Q(__import__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__int__)

Q(__invert__)

Q(__isub__)

Q(__iter__)

Q(__le__)

Q(__len__)

Q(__lshift__)

Q(__lt__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__matmul__)

Q(__mod__)

Q(__module__)

Q(__mul__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__neg__)

Q(__new__)

Q(__new__)

Q(__new__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__or__)

Q(__path__)

Q(__path__)

Q(__path__)

Q(__pos__)

Q(__pow__)

Q(__qualname__)

Q(__repl_print__)

Q(__repl_print__)

Q(__repr__)

Q(__repr__)

Q(__reversed__)

Q(__rshift__)

Q(__set__)

Q(__set__)

Q(__setattr__)

Q(__setattr__)

Q(__setattr__)

Q(__setitem__)

Q(__setitem__)

Q(__str__)

Q(__sub__)

Q(__traceback__)

Q(__truediv__)

Q(__xor__)

Q(_brace_open__colon__hash_b_brace_close_)

Q(_lt_dictcomp_gt_)

Q(_lt_genexpr_gt_)

Q(_lt_lambda_gt_)

Q(_lt_listcomp_gt_)

Q(_lt_module_gt_)

Q(_lt_setcomp_gt_)

Q(_lt_stdin_gt_)

Q(_lt_string_gt_)

Q(_onewire)

Q(_percent__hash_o)

Q(_percent__hash_x)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_slash_flash)

Q(_slash_flash)

Q(_slash_flash_slash_lib)

Q(_slash_sd)

Q(_slash_sd_slash_lib)

Q(_space_)

Q(_star_)

Q(_star_)

Q(_star_)

Q(a2b_base64)

Q(abs)

Q(abs_tol)

Q(accept)

Q(acos)

Q(acosh)

Q(act_obj)

Q(act_obj)

Q(act_point)

Q(act_point)

Q(act_scr)

Q(act_scr)

Q(act_time)

Q(act_time)

Q(activate)

Q(add)

Q(add)

Q(add)

Q(add_btn)

Q(add_btn)

Q(add_btns)

Q(add_char)

Q(add_element)

Q(add_itext)

Q(add_series)

Q(add_tab)

Q(add_text)

Q(add_text)

Q(addr)

Q(addr)

Q(addr)

Q(addr)

Q(addr)

Q(addr_size)

Q(addressof)

Q(addrsize)

Q(adv_w)

Q(adv_w)

Q(af)

Q(af)

Q(af)

Q(af_list)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(align_origo)

Q(all)

Q(alloc_emergency_exception_buf)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(allocate_ext_attr)

Q(alpha)

Q(alpha)

Q(alt)

Q(always_zero)

Q(always_zero)

Q(and_)

Q(anim_clear_playback)

Q(anim_clear_repeat)

Q(anim_core_init)

Q(anim_count_running)

Q(anim_create)

Q(anim_custom_del)

Q(anim_del)

Q(anim_init)

Q(anim_path_bounce)

Q(anim_path_ease_in)

Q(anim_path_ease_in_out)

Q(anim_path_ease_out)

Q(anim_path_linear)

Q(anim_path_overshoot)

Q(anim_path_step)

Q(anim_set_custom_exec_cb)

Q(anim_set_exec_cb)

Q(anim_set_path_cb)

Q(anim_set_playback)

Q(anim_set_ready_cb)

Q(anim_set_repeat)

Q(anim_set_time)

Q(anim_set_values)

Q(anim_speed_to_time)

Q(anim_t)

Q(antialiasing)

Q(antialiasing)

Q(any)

Q(any)

Q(any)

Q(append)

Q(append)

Q(append)

Q(arc)

Q(arc)

Q(arc)

Q(arc)

Q(area)

Q(area)

Q(area)

Q(area)

Q(area_copy)

Q(area_get_height)

Q(area_get_size)

Q(area_get_width)

Q(area_increment)

Q(area_intersect)

Q(area_is_in)

Q(area_is_on)

Q(area_is_point_on)

Q(area_join)

Q(area_set)

Q(area_set_height)

Q(area_set_pos)

Q(area_set_width)

Q(area_t)

Q(arg)

Q(args)

Q(argv)

Q(array)

Q(array)

Q(asin)

Q(asinh)

Q(asm_thumb)

Q(asr)

Q(async_call)

Q(async_xcb)

Q(async_xcb)

Q(atan)

Q(atan2)

Q(atan2)

Q(atanh)

Q(b)

Q(b2a_base64)

Q(background_b)

Q(background_b)

Q(background_defined)

Q(background_defined)

Q(background_g)

Q(background_g)

Q(background_r)

Q(background_r)

Q(bar)

Q(bar)

Q(bar)

Q(bar)

Q(base_line)

Q(base_line)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(bezier3)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bg)

Q(bidi_detect_base_dir)

Q(bidi_get_letter_dir)

Q(bidi_get_logical_pos)

Q(bidi_get_next_paragraph)

Q(bidi_get_visual_pos)

Q(bidi_letter_is_neutral)

Q(bidi_letter_is_rtl)

Q(bidi_letter_is_weak)

Q(bidi_process)

Q(bidi_process_paragraph)

Q(bin)

Q(bind)

Q(bitdepth)

Q(bitdepth)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bl)

Q(blit)

Q(blue)

Q(blue)

Q(board)

Q(board)

Q(body)

Q(body)

Q(bool)

Q(bool)

Q(bool)

Q(bool)

Q(bool)

Q(bootloader)

Q(bootloader)

Q(border)

Q(border)

Q(bottom)

Q(bottom)

Q(bound_method)

Q(box)

Q(box)

Q(box_h)

Q(box_h)

Q(box_w)

Q(box_w)

Q(bpp)

Q(bpp)

Q(brk)

Q(btn)

Q(btn)

Q(btn)

Q(btn)

Q(btn)

Q(btn)

Q(btn)

Q(btn)

Q(btn)

Q(btn)

Q(btn)

Q(btn)

Q(btn)

Q(btn)

Q(btn)

Q(btn)

Q(btn_id)

Q(btn_id)

Q(btn_points)

Q(btn_points)

Q(btnm)

Q(btnm)

Q(btnm)

Q(btnm)

Q(buf1)

Q(buf1)

Q(buf2)

Q(buf2)

Q(buf_act)

Q(buf_act)

Q(buf_alloc)

Q(buf_free)

Q(buf_get_img_size)

Q(buf_get_px_alpha)

Q(buf_get_px_color)

Q(buf_set_palette)

Q(buf_set_px_alpha)

Q(buf_set_px_color)

Q(buffer)

Q(buffer)

Q(buffer)

Q(buffering)

Q(builtins)

Q(builtins)

Q(button_read)

Q(bx)

Q(bytearray)

Q(bytearray)

Q(bytearray_at)

Q(bytecode)

Q(byteorder)

Q(bytes)

Q(bytes)

Q(bytes)

Q(bytes_at)

Q(cache_invalidate_src)

Q(cache_open)

Q(cache_set_size)

Q(calcsize)

Q(calendar)

Q(calendar)

Q(calendar)

Q(calendar)

Q(calendar_date_t)

Q(calibration)

Q(callable)

Q(callback)

Q(callback)

Q(callback)

Q(callback)

Q(callback)

Q(callback)

Q(callback)

Q(callback)

Q(can_have_alpha)

Q(canvas)

Q(canvas)

Q(capture)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cb)

Q(cb)

Q(cb)

Q(cb)

Q(ceil)

Q(cell)

Q(cell)

Q(center)

Q(center)

Q(cf)

Q(cf)

Q(ch)

Q(ch)

Q(channel)

Q(char_val)

Q(char_val)

Q(char_val)

Q(char_val)

Q(chart)

Q(chart)

Q(chart)

Q(chart)

Q(chart_series_t)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chdir)

Q(choice)

Q(chr)

Q(chrm_blue_x)

Q(chrm_blue_x)

Q(chrm_blue_y)

Q(chrm_blue_y)

Q(chrm_defined)

Q(chrm_defined)

Q(chrm_green_x)

Q(chrm_green_x)

Q(chrm_green_y)

Q(chrm_green_y)

Q(chrm_red_x)

Q(chrm_red_x)

Q(chrm_red_y)

Q(chrm_red_y)

Q(chrm_white_x)

Q(chrm_white_x)

Q(chrm_white_y)

Q(chrm_white_y)

Q(chunk_ancillary)

Q(chunk_append)

Q(chunk_check_crc)

Q(chunk_create)

Q(chunk_data)

Q(chunk_data_const)

Q(chunk_find)

Q(chunk_find_const)

Q(chunk_generate_crc)

Q(chunk_length)

Q(chunk_next)

Q(chunk_next_const)

Q(chunk_private)

Q(chunk_safetocopy)

Q(chunk_type)

Q(chunk_type_equals)

Q(classmethod)

Q(classmethod)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clear)

Q(clear)

Q(clear)

Q(clear_btn_ctrl)

Q(clear_btn_ctrl_all)

Q(clear_icc)

Q(clear_itext)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_protect)

Q(clear_selection)

Q(clear_serie)

Q(clear_text)

Q(click_focus)

Q(click_focus)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close_cb)

Q(close_cb)

Q(close_cb)

Q(close_cb)

Q(close_event_cb)

Q(closure)

Q(closure)

Q(clz)

Q(cmath)

Q(cmath)

Q(cmp)

Q(code)

Q(collect)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color32_t)

Q(color_brightness)

Q(color_chroma_key)

Q(color_chroma_key)

Q(color_convert)

Q(color_convert)

Q(color_format_get_px_size)

Q(color_format_has_alpha)

Q(color_format_is_chroma_keyed)

Q(color_hex)

Q(color_hex3)

Q(color_hsv_t)

Q(color_hsv_to_rgb)

Q(color_make)

Q(color_mix)

Q(color_mode_cleanup)

Q(color_mode_copy)

Q(color_mode_init)

Q(color_mode_make)

Q(color_rgb_to_hsv)

Q(color_t)

Q(color_to1)

Q(color_to16)

Q(color_to32)

Q(color_to8)

Q(color_to_hsv)

Q(colortype)

Q(colortype)

Q(compare)

Q(compare)

Q(compile)

Q(compile)

Q(complex)

Q(complex)

Q(compression_method)

Q(compression_method)

Q(connect)

Q(const)

Q(const)

Q(cont)

Q(cont)

Q(cont)

Q(cont)

Q(content)

Q(content)

Q(convert)

Q(coord_y)

Q(coord_y)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copy_buf)

Q(copysign)

Q(cos)

Q(cos)

Q(cosh)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(count_children_recursive)

Q(counter)

Q(country)

Q(cpicker)

Q(cpicker)

Q(cpsid)

Q(cpsie)

Q(cpu)

Q(cpu)

Q(crc)

Q(crc32)

Q(crc8)

Q(cursor)

Q(cursor)

Q(cursor)

Q(cursor)

Q(cursor)

Q(cursor)

Q(cursor_down)

Q(cursor_left)

Q(cursor_right)

Q(cursor_up)

Q(custom_context)

Q(custom_context)

Q(custom_inflate)

Q(custom_inflate)

Q(custom_zlib)

Q(custom_zlib)

Q(cut_text)

Q(dark)

Q(dark)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data_size)

Q(data_size)

Q(datetime)

Q(day)

Q(day)

Q(day)

Q(day)

Q(day_names)

Q(day_names)

Q(ddlist)

Q(ddlist)

Q(ddlist)

Q(ddlist)

Q(deadtime)

Q(debug)

Q(debug_check_null)

Q(debug_check_obj_type)

Q(debug_check_obj_valid)

Q(debug_check_str)

Q(debug_check_style)

Q(debug_log_error)

Q(debug_sentinel)

Q(debug_sentinel)

Q(dec_dsc)

Q(dec_dsc)

Q(decode)

Q(decode)

Q(decode)

Q(decode24)

Q(decode32)

Q(decode_memory)

Q(decoder)

Q(decoder)

Q(decoder)

Q(decoder)

Q(decoder_built_in_close)

Q(decoder_built_in_info)

Q(decoder_built_in_open)

Q(decoder_built_in_read_line)

Q(decoder_close)

Q(decoder_create)

Q(decoder_delete)

Q(decoder_get_info)

Q(decoder_init)

Q(decoder_open)

Q(decoder_read_line)

Q(decoder_set_close_cb)

Q(decoder_set_info_cb)

Q(decoder_set_open_cb)

Q(decoder_set_read_line_cb)

Q(decoder_settings_init)

Q(decompress)

Q(decompress_settings_init)

Q(decor)

Q(decor)

Q(decrement)

Q(deepsleep)

Q(def_event_cb)

Q(default)

Q(default_decompress_settings)

Q(degrees)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_async)

Q(del_char)

Q(del_char_forward)

Q(delattr)

Q(delay)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(delete)

Q(deleter)

Q(deque)

Q(deque)

Q(dht_readinto)

Q(dict)

Q(dict)

Q(dict)

Q(dict_view)

Q(difference)

Q(difference)

Q(difference_update)

Q(digest)

Q(dir)

Q(dir)

Q(dir_close_cb)

Q(dir_close_cb)

Q(dir_d)

Q(dir_d)

Q(dir_open_cb)

Q(dir_open_cb)

Q(dir_read_cb)

Q(dir_read_cb)

Q(disable)

Q(disable)

Q(disable_irq)

Q(disable_irq)

Q(disabled)

Q(disabled)

Q(discard)

Q(disp)

Q(disp)

Q(disp_assign_screen)

Q(disp_buf_init)

Q(disp_buf_t)

Q(disp_drv_init)

Q(disp_drv_register)

Q(disp_drv_t)

Q(disp_drv_update)

Q(disp_flush_ready)

Q(disp_get_antialiasing)

Q(disp_get_buf)

Q(disp_get_default)

Q(disp_get_hor_res)

Q(disp_get_inactive_time)

Q(disp_get_inv_buf_size)

Q(disp_get_layer_sys)

Q(disp_get_layer_top)

Q(disp_get_next)

Q(disp_get_refr_task)

Q(disp_get_scr_act)

Q(disp_get_ver_res)

Q(disp_is_double_buf)

Q(disp_is_true_double_buf)

Q(disp_load_scr)

Q(disp_pop_from_inv_buf)

Q(disp_refr_task)

Q(disp_remove)

Q(disp_set_default)

Q(disp_t)

Q(disp_trig_activity)

Q(display)

Q(display)

Q(div)

Q(divmod)

Q(dma)

Q(doc)

Q(down)

Q(drag_in_prog)

Q(drag_in_prog)

Q(drag_limit)

Q(drag_limit)

Q(drag_limit_out)

Q(drag_limit_out)

Q(drag_sum)

Q(drag_sum)

Q(drag_throw)

Q(drag_throw)

Q(drag_throw_vect)

Q(drag_throw_vect)

Q(draw_aa_get_opa)

Q(draw_aa_hor_seg)

Q(draw_aa_ver_seg)

Q(draw_arc)

Q(draw_arc)

Q(draw_fill)

Q(draw_free_buf)

Q(draw_get_buf)

Q(draw_img)

Q(draw_img)

Q(draw_label)

Q(draw_label_hint_t)

Q(draw_label_txt_sel_t)

Q(draw_letter)

Q(draw_line)

Q(draw_line)

Q(draw_map)

Q(draw_polygon)

Q(draw_polygon)

Q(draw_px)

Q(draw_rect)

Q(draw_rect)

Q(draw_text)

Q(draw_triangle)

Q(driver)

Q(driver)

Q(driver)

Q(driver)

Q(drv)

Q(drv)

Q(drv)

Q(drv)

Q(dsc)

Q(dsc)

Q(dump)

Q(dumps)

Q(dupterm)

Q(e)

Q(e)

Q(editing)

Q(editing)

Q(elapsed_micros)

Q(elapsed_millis)

Q(enable)

Q(enable)

Q(enable_irq)

Q(enable_irq)

Q(enc_diff)

Q(enc_diff)

Q(encode)

Q(encoding)

Q(encoding)

Q(end)

Q(end)

Q(end)

Q(end)

Q(end)

Q(endswith)

Q(endswith)

Q(enumerate)

Q(enumerate)

Q(erf)

Q(erfc)

Q(errno)

Q(error)

Q(error)

Q(error_msg)

Q(error_msg)

Q(error_text)

Q(errorcode)

Q(eval)

Q(eval)

Q(event_get_data)

Q(event_send)

Q(event_send_func)

Q(exec)

Q(exec)

Q(exec_cb)

Q(exec_cb)

Q(execfile)

Q(exit)

Q(exp)

Q(exp)

Q(expm1)

Q(extend)

Q(extend)

Q(fabs)

Q(factorial)

Q(fault_debug)

Q(feed)

Q(feedback_cb)

Q(feedback_cb)

Q(file)

Q(file)

Q(file)

Q(file_d)

Q(file_d)

Q(file_size)

Q(file_size)

Q(fill)

Q(fill_bg)

Q(fill_rect)

Q(filter)

Q(filter)

Q(filter_method)

Q(filter_method)

Q(find)

Q(find)

Q(firstbit)

Q(firstbit)

Q(firstbit)

Q(firstbit)

Q(flags)

Q(float)

Q(float)

Q(floor)

Q(flow)

Q(flow)

Q(flush)

Q(flush)

Q(flush)

Q(flush_cb)

Q(flush_cb)

Q(flushing)

Q(flushing)

Q(fmod)

Q(focus)

Q(focus)

Q(focus)

Q(focus_cb)

Q(focus_cb)

Q(font)

Q(font)

Q(font_get_bitmap_fmt_txt)

Q(font_get_glyph_bitmap)

Q(font_get_glyph_dsc)

Q(font_get_glyph_dsc_fmt_txt)

Q(font_get_glyph_width)

Q(font_get_line_height)

Q(font_glyph_dsc_t)

Q(font_roboto_16)

Q(font_roboto_28)

Q(font_t)

Q(format)

Q(format)

Q(frag_pct)

Q(frag_pct)

Q(framebuf)

Q(framebuf)

Q(free_biggest_size)

Q(free_biggest_size)

Q(free_cnt)

Q(free_cnt)

Q(free_size)

Q(free_size)

Q(free_space_cb)

Q(free_space_cb)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(frexp)

Q(from_bytes)

Q(fromkeys)

Q(frozen)

Q(frozen)

Q(frozenset)

Q(frozenset)

Q(fs_close)

Q(fs_dir_close)

Q(fs_dir_open)

Q(fs_dir_read)

Q(fs_dir_t)

Q(fs_drv_init)

Q(fs_drv_register)

Q(fs_drv_t)

Q(fs_file_t)

Q(fs_free_space)

Q(fs_get_drv)

Q(fs_get_ext)

Q(fs_get_last)

Q(fs_get_letters)

Q(fs_init)

Q(fs_is_ready)

Q(fs_open)

Q(fs_read)

Q(fs_remove)

Q(fs_rename)

Q(fs_seek)

Q(fs_size)

Q(fs_tell)

Q(fs_trunc)

Q(fs_up)

Q(fs_write)

Q(full)

Q(full)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(gama_defined)

Q(gama_defined)

Q(gama_gamma)

Q(gama_gamma)

Q(gamma)

Q(gauge)

Q(gauge)

Q(gauge)

Q(gauge)

Q(gc)

Q(gc)

Q(gencall)

Q(generator)

Q(generator)

Q(generator)

Q(generator)

Q(get)

Q(get_accepted_chars)

Q(get_active_btn)

Q(get_active_btn)

Q(get_active_btn_text)

Q(get_active_btn_text)

Q(get_align)

Q(get_align)

Q(get_align)

Q(get_angle_end)

Q(get_angle_offset)

Q(get_angle_start)

Q(get_anim_speed)

Q(get_anim_time)

Q(get_anim_time)

Q(get_anim_time)

Q(get_anim_time)

Q(get_anim_time)

Q(get_anim_time)

Q(get_anim_time)

Q(get_anim_time)

Q(get_anim_time)

Q(get_anim_time)

Q(get_anim_time)

Q(get_arc_length)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_realign)

Q(get_auto_size)

Q(get_auto_size)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_base_dir)

Q(get_body_draw)

Q(get_bpp)

Q(get_bright)

Q(get_btn_ctrl)

Q(get_btn_img)

Q(get_btn_index)

Q(get_btn_label)

Q(get_btn_selected)

Q(get_btn_size)

Q(get_btn_text)

Q(get_btn_text)

Q(get_btnm)

Q(get_btns_hidden)

Q(get_btns_pos)

Q(get_cell_align)

Q(get_cell_crop)

Q(get_cell_merge_right)

Q(get_cell_type)

Q(get_cell_value)

Q(get_channels)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_child_back)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_click)

Q(get_col_cnt)

Q(get_col_width)

Q(get_color)

Q(get_color_mode)

Q(get_color_mode_fixed)

Q(get_content)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_coords)

Q(get_critical_value)

Q(get_cursor_blink_time)

Q(get_cursor_click_pos)

Q(get_cursor_manage)

Q(get_cursor_pos)

Q(get_cursor_type)

Q(get_day_names)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_design_cb)

Q(get_dir)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_disp)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_dir)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_parent)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_drag_throw)

Q(get_draw_arrow)

Q(get_edge_flash)

Q(get_edge_flash)

Q(get_edge_flash)

Q(get_edge_flash)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_event_cb)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_attr)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_click_pad_top)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_ext_draw_pad)

Q(get_file_name)

Q(get_fit_bottom)

Q(get_fit_bottom)

Q(get_fit_height)

Q(get_fit_left)

Q(get_fit_left)

Q(get_fit_right)

Q(get_fit_right)

Q(get_fit_top)

Q(get_fit_top)

Q(get_fit_width)

Q(get_fix_height)

Q(get_from_btn)

Q(get_glyph_bitmap)

Q(get_glyph_bitmap)

Q(get_glyph_dsc)

Q(get_glyph_dsc)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_group)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_fit)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_hidden)

Q(get_highlighted_dates)

Q(get_highlighted_dates_num)

Q(get_hor_fit)

Q(get_hsv)

Q(get_hue)

Q(get_img)

Q(get_indic_colored)

Q(get_ink_in_time)

Q(get_ink_out_time)

Q(get_ink_wait_time)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_inner_coords)

Q(get_knob_in)

Q(get_label)

Q(get_label_count)

Q(get_layout)

Q(get_layout)

Q(get_layout)

Q(get_layout)

Q(get_letter_on)

Q(get_letter_pos)

Q(get_line_count)

Q(get_line_count)

Q(get_long_mode)

Q(get_map_array)

Q(get_map_array)

Q(get_margin)

Q(get_max_length)

Q(get_max_value)

Q(get_max_value)

Q(get_max_value)

Q(get_max_value)

Q(get_min_value)

Q(get_min_value)

Q(get_min_value)

Q(get_min_value)

Q(get_mode)

Q(get_month_names)

Q(get_needle_count)

Q(get_next_btn)

Q(get_offset_x)

Q(get_offset_y)

Q(get_one_line)

Q(get_one_toggle)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_opa_scale_enable)

Q(get_options)

Q(get_options)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_parent_event)

Q(get_placeholder_text)

Q(get_point_cnt)

Q(get_pressed_btn)

Q(get_pressed_date)

Q(get_prev_btn)

Q(get_preview)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_protect)

Q(get_pwd_mode)

Q(get_pwd_show_time)

Q(get_px)

Q(get_raw_size)

Q(get_recolor)

Q(get_recolor)

Q(get_recolor)

Q(get_row_cnt)

Q(get_saturation)

Q(get_sb_mode)

Q(get_sb_mode)

Q(get_sb_mode)

Q(get_sb_mode)

Q(get_sb_mode)

Q(get_scale_angle)

Q(get_scale_angle)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_screen)

Q(get_scrl)

Q(get_scrl_fit_bottom)

Q(get_scrl_fit_left)

Q(get_scrl_fit_right)

Q(get_scrl_fit_top)

Q(get_scrl_height)

Q(get_scrl_layout)

Q(get_scrl_width)

Q(get_scroll_propagation)

Q(get_scroll_propagation)

Q(get_scroll_propagation)

Q(get_selected)

Q(get_selected)

Q(get_selected_str)

Q(get_selected_str)

Q(get_series_darking)

Q(get_series_opa)

Q(get_series_width)

Q(get_showed_date)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_signal_cb)

Q(get_single_mode)

Q(get_size)

Q(get_sliding)

Q(get_spin_time)

Q(get_src)

Q(get_src)

Q(get_state)

Q(get_state)

Q(get_state)

Q(get_stay_open)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_style)

Q(get_sym)

Q(get_sym)

Q(get_ta)

Q(get_tab)

Q(get_tab_act)

Q(get_tab_count)

Q(get_text)

Q(get_text)

Q(get_text)

Q(get_text)

Q(get_text_sel_en)

Q(get_text_sel_end)

Q(get_text_sel_start)

Q(get_title)

Q(get_today_date)

Q(get_toggle)

Q(get_toggle)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_top)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_user_data_ptr)

Q(get_value)

Q(get_value)

Q(get_value)

Q(get_value)

Q(get_value)

Q(get_value)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_fit)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_y_invert)

Q(getaddrinfo)

Q(getattr)

Q(getcwd)

Q(getcwd)

Q(getcwd)

Q(getrandbits)

Q(getter)

Q(getvalue)

Q(glass)

Q(glass)

Q(globals)

Q(glue_obj)

Q(gpio)

Q(gpu_blend_cb)

Q(gpu_blend_cb)

Q(gpu_fill_cb)

Q(gpu_fill_cb)

Q(grad_color)

Q(grad_color)

Q(green)

Q(green)

Q(group)

Q(group)

Q(group)

Q(group)

Q(group)

Q(group_add_obj)

Q(group_create)

Q(group_del)

Q(group_focus_freeze)

Q(group_focus_next)

Q(group_focus_obj)

Q(group_focus_prev)

Q(group_get_click_focus)

Q(group_get_editing)

Q(group_get_focus_cb)

Q(group_get_focused)

Q(group_get_style_mod_cb)

Q(group_get_style_mod_edit_cb)

Q(group_get_user_data)

Q(group_get_wrap)

Q(group_init)

Q(group_mod_style)

Q(group_remove_all_objs)

Q(group_remove_obj)

Q(group_report_style_mod)

Q(group_send_data)

Q(group_set_click_focus)

Q(group_set_editing)

Q(group_set_focus_cb)

Q(group_set_refocus_policy)

Q(group_set_style_mod_cb)

Q(group_set_style_mod_edit_cb)

Q(group_set_wrap)

Q(group_t)

Q(h)

Q(h)

Q(h)

Q(h)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(handler)

Q(handler)

Q(hard)

Q(hard)

Q(hard_reset)

Q(has_palette_alpha)

Q(has_run)

Q(has_run)

Q(hasattr)

Q(hash)

Q(have_cdc)

Q(head)

Q(head)

Q(header)

Q(header)

Q(header)

Q(header)

Q(header)

Q(header)

Q(header)

Q(header)

Q(header_pr)

Q(header_pr)

Q(heap_lock)

Q(heap_unlock)

Q(heapify)

Q(heappop)

Q(heappush)

Q(help)

Q(hex)

Q(hexlify)

Q(hid)

Q(hid)

Q(hid_keyboard)

Q(hid_mouse)

Q(high)

Q(highlighted_days)

Q(highlighted_days)

Q(hint)

Q(hint)

Q(hline)

Q(hor_res)

Q(hor_res)

Q(hour)

Q(hour)

Q(iccp_defined)

Q(iccp_defined)

Q(iccp_name)

Q(iccp_name)

Q(iccp_profile)

Q(iccp_profile)

Q(iccp_profile_size)

Q(iccp_profile_size)

Q(id)

Q(id)

Q(id)

Q(id)

Q(idle)

Q(ignore_adler32)

Q(ignore_adler32)

Q(ignore_crc)

Q(ignore_crc)

Q(ignore_critical)

Q(ignore_critical)

Q(ignore_end)

Q(ignore_end)

Q(ignore_nlen)

Q(ignore_nlen)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(imag)

Q(image)

Q(image)

Q(img)

Q(img)

Q(img)

Q(img)

Q(img_cache_entry_t)

Q(img_data)

Q(img_data)

Q(img_decoder_dsc_t)

Q(img_decoder_t)

Q(img_dsc_t)

Q(img_header_t)

Q(imgbtn)

Q(imgbtn)

Q(imgbtn)

Q(imgbtn)

Q(implementation)

Q(ina)

Q(ina)

Q(ina)

Q(ina)

Q(ina)

Q(ina)

Q(ina)

Q(ina)

Q(ina)

Q(ina)

Q(ina)

Q(ina)

Q(inactive_days)

Q(inactive_days)

Q(increment)

Q(indev)

Q(indev)

Q(indev)

Q(indev_data_t)

Q(indev_drv_init)

Q(indev_drv_register)

Q(indev_drv_t)

Q(indev_drv_update)

Q(indev_enable)

Q(indev_get_act)

Q(indev_get_key)

Q(indev_get_next)

Q(indev_get_obj_act)

Q(indev_get_point)

Q(indev_get_read_task)

Q(indev_get_type)

Q(indev_get_vect)

Q(indev_init)

Q(indev_is_dragging)

Q(indev_proc_t)

Q(indev_read)

Q(indev_read)

Q(indev_read_task)

Q(indev_reset)

Q(indev_reset_long_press)

Q(indev_set_button_points)

Q(indev_set_cursor)

Q(indev_set_group)

Q(indev_t)

Q(indev_wait_release)

Q(index)

Q(index)

Q(index)

Q(index)

Q(index)

Q(indic)

Q(indic)

Q(indic)

Q(indic)

Q(indic)

Q(indic)

Q(indic)

Q(indic)

Q(inflate)

Q(info)

Q(info)

Q(info)

Q(info_cb)

Q(info_cb)

Q(info_cleanup)

Q(info_copy)

Q(info_init)

Q(info_png)

Q(info_png)

Q(info_raw)

Q(info_raw)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init_points)

Q(inner)

Q(inner)

Q(input)

Q(ins_text)

Q(insert)

Q(inspect)

Q(inspect_chunk)

Q(int)

Q(int)

Q(int)

Q(int)

Q(int)

Q(int_val)

Q(int_val)

Q(int_val)

Q(int_val)

Q(intense)

Q(intense)

Q(intensity)

Q(interlace_method)

Q(interlace_method)

Q(intersection)

Q(intersection)

Q(intersection_update)

Q(inv_area)

Q(inv_area_joined)

Q(inv_area_joined)

Q(inv_areas)

Q(inv_areas)

Q(inv_p)

Q(inv_p)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invalidate)

Q(invert)

Q(invert)

Q(ioctl)

Q(ioctl)

Q(ioctl)

Q(ipoll)

Q(irq)

Q(irq)

Q(irq)

Q(is_alpha_type)

Q(is_char_under_pos)

Q(is_checked)

Q(is_dragged)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_focused)

Q(is_greyscale_type)

Q(is_inactive)

Q(is_palette_type)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_protected)

Q(is_ready)

Q(isalpha)

Q(isalpha)

Q(isclose)

Q(isconnected)

Q(isdigit)

Q(isdigit)

Q(isdisjoint)

Q(isdisjoint)

Q(isenabled)

Q(isfinite)

Q(isinf)

Q(isinstance)

Q(islower)

Q(islower)

Q(isnan)

Q(isspace)

Q(isspace)

Q(issubclass)

Q(issubset)

Q(issubset)

Q(issuperset)

Q(issuperset)

Q(isupper)

Q(isupper)

Q(items)

Q(iter)

Q(iterable)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(itext_keys)

Q(itext_keys)

Q(itext_langtags)

Q(itext_langtags)

Q(itext_num)

Q(itext_num)

Q(itext_strings)

Q(itext_strings)

Q(itext_transkeys)

Q(itext_transkeys)

Q(join)

Q(join)

Q(joystick)

Q(joystick)

Q(kb)

Q(kb)

Q(kb)

Q(kb)

Q(kbd_intr)

Q(keepends)

Q(key)

Q(key)

Q(key)

Q(key)

Q(key_b)

Q(key_b)

Q(key_defined)

Q(key_defined)

Q(key_g)

Q(key_g)

Q(key_r)

Q(key_r)

Q(keypad)

Q(keypad)

Q(keys)

Q(keys)

Q(knob)

Q(knob)

Q(knob_off)

Q(knob_off)

Q(knob_on)

Q(knob_on)

Q(label)

Q(label)

Q(label)

Q(label)

Q(label)

Q(last_activity_time)

Q(last_activity_time)

Q(last_key)

Q(last_key)

Q(last_obj)

Q(last_obj)

Q(last_point)

Q(last_point)

Q(last_pressed)

Q(last_pressed)

Q(last_run)

Q(last_run)

Q(last_state)

Q(last_state)

Q(layer_sys)

Q(layer_top)

Q(ldexp)

Q(ldr)

Q(ldrb)

Q(ldrex)

Q(ldrh)

Q(led)

Q(led)

Q(led)

Q(led)

Q(left)

Q(left)

Q(len)

Q(len)

Q(letter)

Q(letter)

Q(letter_space)

Q(letter_space)

Q(lgamma)

Q(life)

Q(life)

Q(light)

Q(light)

Q(lightsleep)

Q(line)

Q(line)

Q(line)

Q(line)

Q(line)

Q(line)

Q(line)

Q(line)

Q(line_height)

Q(line_height)

Q(line_space)

Q(line_space)

Q(line_start)

Q(line_start)

Q(list)

Q(list)

Q(list)

Q(list)

Q(list)

Q(list)

Q(listdir)

Q(listen)

Q(little)

Q(little)

Q(little)

Q(little)

Q(ll_chg_list)

Q(ll_clear)

Q(ll_get_head)

Q(ll_get_len)

Q(ll_get_next)

Q(ll_get_prev)

Q(ll_get_tail)

Q(ll_init)

Q(ll_ins_head)

Q(ll_ins_prev)

Q(ll_ins_tail)

Q(ll_is_empty)

Q(ll_move_before)

Q(ll_rem)

Q(ll_t)

Q(lmeter)

Q(lmeter)

Q(lmeter)

Q(lmeter)

Q(load)

Q(loads)

Q(locals)

Q(localtime)

Q(lodepng)

Q(log)

Q(log)

Q(log10)

Q(log10)

Q(log2)

Q(log_add)

Q(log_register_print_cb)

Q(long_pr_sent)

Q(long_pr_sent)

Q(long_press_rep_time)

Q(long_press_rep_time)

Q(long_press_time)

Q(long_press_time)

Q(longpr_rep_timestamp)

Q(longpr_rep_timestamp)

Q(low)

Q(lower)

Q(lower)

Q(lsl)

Q(lsr)

Q(lstrip)

Q(lstrip)

Q(lv_anim_t)

Q(lv_anim_t_exec_cb)

Q(lv_anim_t_exec_cb)

Q(lv_anim_t_exec_cb)

Q(lv_anim_t_exec_cb)

Q(lv_anim_t_path_cb)

Q(lv_anim_t_path_cb)

Q(lv_anim_t_path_cb)

Q(lv_anim_t_ready_cb)

Q(lv_anim_t_ready_cb)

Q(lv_anim_t_ready_cb)

Q(lv_anim_t_ready_cb)

Q(lv_area_t)

Q(lv_calendar_date_t)

Q(lv_chart_series_t)

Q(lv_color32_ch_t)

Q(lv_color32_t)

Q(lv_color_hsv_t)

Q(lv_disp_buf_t)

Q(lv_disp_drv_t)

Q(lv_disp_drv_t_flush_cb)

Q(lv_disp_drv_t_flush_cb)

Q(lv_disp_drv_t_gpu_blend_cb)

Q(lv_disp_drv_t_gpu_blend_cb)

Q(lv_disp_drv_t_gpu_fill_cb)

Q(lv_disp_drv_t_gpu_fill_cb)

Q(lv_disp_drv_t_monitor_cb)

Q(lv_disp_drv_t_monitor_cb)

Q(lv_disp_drv_t_rounder_cb)

Q(lv_disp_drv_t_rounder_cb)

Q(lv_disp_drv_t_set_px_cb)

Q(lv_disp_drv_t_set_px_cb)

Q(lv_disp_t)

Q(lv_draw_label_hint_t)

Q(lv_draw_label_txt_sel_t)

Q(lv_font_glyph_dsc_t)

Q(lv_font_t)

Q(lv_font_t_get_glyph_bitmap)

Q(lv_font_t_get_glyph_bitmap)

Q(lv_font_t_get_glyph_dsc)

Q(lv_font_t_get_glyph_dsc)

Q(lv_fs_dir_t)

Q(lv_fs_drv_t)

Q(lv_fs_drv_t_close_cb)

Q(lv_fs_drv_t_close_cb)

Q(lv_fs_drv_t_dir_close_cb)

Q(lv_fs_drv_t_dir_close_cb)

Q(lv_fs_drv_t_dir_open_cb)

Q(lv_fs_drv_t_dir_open_cb)

Q(lv_fs_drv_t_dir_read_cb)

Q(lv_fs_drv_t_dir_read_cb)

Q(lv_fs_drv_t_free_space_cb)

Q(lv_fs_drv_t_free_space_cb)

Q(lv_fs_drv_t_open_cb)

Q(lv_fs_drv_t_open_cb)

Q(lv_fs_drv_t_read_cb)

Q(lv_fs_drv_t_read_cb)

Q(lv_fs_drv_t_ready_cb)

Q(lv_fs_drv_t_ready_cb)

Q(lv_fs_drv_t_remove_cb)

Q(lv_fs_drv_t_remove_cb)

Q(lv_fs_drv_t_rename_cb)

Q(lv_fs_drv_t_rename_cb)

Q(lv_fs_drv_t_seek_cb)

Q(lv_fs_drv_t_seek_cb)

Q(lv_fs_drv_t_size_cb)

Q(lv_fs_drv_t_size_cb)

Q(lv_fs_drv_t_tell_cb)

Q(lv_fs_drv_t_tell_cb)

Q(lv_fs_drv_t_trunc_cb)

Q(lv_fs_drv_t_trunc_cb)

Q(lv_fs_drv_t_write_cb)

Q(lv_fs_drv_t_write_cb)

Q(lv_fs_file_t)

Q(lv_group_t)

Q(lv_group_t_focus_cb)

Q(lv_group_t_focus_cb)

Q(lv_group_t_focus_cb)

Q(lv_group_t_style_mod_cb)

Q(lv_group_t_style_mod_cb)

Q(lv_group_t_style_mod_cb)

Q(lv_group_t_style_mod_edit_cb)

Q(lv_group_t_style_mod_edit_cb)

Q(lv_group_t_style_mod_edit_cb)

Q(lv_img_cache_entry_t)

Q(lv_img_decoder_dsc_t)

Q(lv_img_decoder_t)

Q(lv_img_decoder_t_close_cb)

Q(lv_img_decoder_t_close_cb)

Q(lv_img_decoder_t_close_cb)

Q(lv_img_decoder_t_info_cb)

Q(lv_img_decoder_t_info_cb)

Q(lv_img_decoder_t_info_cb)

Q(lv_img_decoder_t_open_cb)

Q(lv_img_decoder_t_open_cb)

Q(lv_img_decoder_t_open_cb)

Q(lv_img_decoder_t_read_line_cb)

Q(lv_img_decoder_t_read_line_cb)

Q(lv_img_decoder_t_read_line_cb)

Q(lv_img_dsc_t)

Q(lv_img_header_t)

Q(lv_indev_data_t)

Q(lv_indev_data_t)

Q(lv_indev_drv_t)

Q(lv_indev_drv_t_feedback_cb)

Q(lv_indev_drv_t_feedback_cb)

Q(lv_indev_drv_t_read_cb)

Q(lv_indev_drv_t_read_cb)

Q(lv_indev_proc_t)

Q(lv_indev_proc_types_keypad_t)

Q(lv_indev_proc_types_pointer_t)

Q(lv_indev_proc_types_t)

Q(lv_indev_t)

Q(lv_ll_t)

Q(lv_log_print_g_cb_t_print_cb)

Q(lv_log_print_g_cb_t_print_cb)

Q(lv_mem_monitor_t)

Q(lv_obj_t_design_cb)

Q(lv_obj_t_design_cb)

Q(lv_obj_t_event_cb)

Q(lv_obj_t_event_cb)

Q(lv_obj_t_signal_cb)

Q(lv_obj_t_signal_cb)

Q(lv_obj_type_t)

Q(lv_point_t)

Q(lv_style_body_border_t)

Q(lv_style_body_padding_t)

Q(lv_style_body_shadow_t)

Q(lv_style_body_t)

Q(lv_style_image_t)

Q(lv_style_line_t)

Q(lv_style_t)

Q(lv_style_text_t)

Q(lv_task_t)

Q(lv_task_t_task_cb)

Q(lv_task_t_task_cb)

Q(lv_task_t_task_cb)

Q(lv_theme_group_t)

Q(lv_theme_group_t_style_mod_edit_xcb)

Q(lv_theme_group_t_style_mod_edit_xcb)

Q(lv_theme_group_t_style_mod_xcb)

Q(lv_theme_group_t_style_mod_xcb)

Q(lv_theme_style_bar_t)

Q(lv_theme_style_btn_t)

Q(lv_theme_style_btnm_btn_t)

Q(lv_theme_style_btnm_t)

Q(lv_theme_style_calendar_t)

Q(lv_theme_style_cb_box_t)

Q(lv_theme_style_cb_t)

Q(lv_theme_style_ddlist_t)

Q(lv_theme_style_img_t)

Q(lv_theme_style_imgbtn_t)

Q(lv_theme_style_kb_btn_t)

Q(lv_theme_style_kb_t)

Q(lv_theme_style_label_t)

Q(lv_theme_style_line_t)

Q(lv_theme_style_list_btn_t)

Q(lv_theme_style_list_t)

Q(lv_theme_style_mbox_btn_t)

Q(lv_theme_style_mbox_t)

Q(lv_theme_style_page_t)

Q(lv_theme_style_roller_t)

Q(lv_theme_style_slider_t)

Q(lv_theme_style_spinbox_t)

Q(lv_theme_style_sw_t)

Q(lv_theme_style_t)

Q(lv_theme_style_ta_t)

Q(lv_theme_style_table_t)

Q(lv_theme_style_tabview_btn_t)

Q(lv_theme_style_tabview_t)

Q(lv_theme_style_tileview_t)

Q(lv_theme_style_win_btn_t)

Q(lv_theme_style_win_t)

Q(lv_theme_t)

Q(lvgl)

Q(lvgl)

Q(lvgl)

Q(lvgl)

Q(machine)

Q(machine)

Q(main)

Q(main_color)

Q(main_color)

Q(map)

Q(map)

Q(mapper)

Q(match)

Q(match)

Q(match)

Q(math)

Q(math)

Q(max)

Q(maximum_space_recursion_space_depth_space_exceeded)

Q(maxsize)

Q(mbox)

Q(mbox)

Q(mbox)

Q(mbox)

Q(mem)

Q(mem16)

Q(mem16)

Q(mem32)

Q(mem32)

Q(mem8)

Q(mem8)

Q(mem_alloc)

Q(mem_alloc)

Q(mem_defrag)

Q(mem_free)

Q(mem_free)

Q(mem_get_size)

Q(mem_info)

Q(mem_init)

Q(mem_monitor)

Q(mem_monitor_t)

Q(mem_read)

Q(mem_realloc)

Q(mem_write)

Q(memaddr)

Q(memaddr)

Q(memoryview)

Q(memoryview)

Q(mfx_event)

Q(micropython)

Q(micropython)

Q(micropython)

Q(micropython)

Q(micros)

Q(millis)

Q(min)

Q(minute)

Q(minute)

Q(miso)

Q(miso)

Q(miso)

Q(mkdir)

Q(mkdir)

Q(mkdir)

Q(mkfs)

Q(mkfs)

Q(mktime)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(modf)

Q(modify)

Q(module)

Q(modules)

Q(modules)

Q(monitor_cb)

Q(monitor_cb)

Q(month)

Q(month)

Q(month)

Q(month)

Q(mosi)

Q(mosi)

Q(mosi)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mov)

Q(mov)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_background)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(move_foreground)

Q(movt)

Q(movw)

Q(movwt)

Q(mpy)

Q(mrs)

Q(msc)

Q(my_flush_cb)

Q(n_size)

Q(n_size)

Q(name)

Q(name)

Q(name)

Q(namedtuple)

Q(names)

Q(native)

Q(network)

Q(network)

Q(next)

Q(nodename)

Q(nop)

Q(nss)

Q(obj)

Q(obj)

Q(obj_focus)

Q(obj_focus)

Q(obj_ll)

Q(obj_ll)

Q(obj_type_t)

Q(object)

Q(object)

Q(object)

Q(object)

Q(object)

Q(oct)

Q(off)

Q(off)

Q(off)

Q(off)

Q(off)

Q(ofs_x)

Q(ofs_x)

Q(ofs_y)

Q(ofs_y)

Q(on)

Q(on)

Q(on)

Q(on)

Q(on)

Q(on)

Q(on_edge)

Q(once)

Q(once)

Q(oneline)

Q(oneline)

Q(onewire)

Q(opa)

Q(opa)

Q(opa)

Q(opa)

Q(opa)

Q(opa)

Q(opa)

Q(opa)

Q(opa)

Q(opa)

Q(open)

Q(open)

Q(open)

Q(open)

Q(open)

Q(open_cb)

Q(open_cb)

Q(open_cb)

Q(open_cb)

Q(opt)

Q(opt_level)

Q(ord)

Q(pack)

Q(pack_into)

Q(padding)

Q(padding)

Q(page)

Q(page)

Q(page)

Q(page)

Q(palette)

Q(palette)

Q(palette_add)

Q(palette_clear)

Q(palettesize)

Q(palettesize)

Q(panel)

Q(panel)

Q(parity)

Q(part)

Q(part)

Q(partition)

Q(partition)

Q(path)

Q(path_cb)

Q(path_cb)

Q(peektime)

Q(pend_throw)

Q(period)

Q(period)

Q(period)

Q(period)

Q(period)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(phys_defined)

Q(phys_defined)

Q(phys_unit)

Q(phys_unit)

Q(phys_x)

Q(phys_x)

Q(phys_y)

Q(phys_y)

Q(pi)

Q(pi)

Q(pid)

Q(pin)

Q(pin)

Q(pin)

Q(pixel)

Q(platform)

Q(playback)

Q(playback)

Q(playback_now)

Q(playback_now)

Q(playback_pause)

Q(playback_pause)

Q(point)

Q(point)

Q(point_t)

Q(pointer)

Q(pointer)

Q(points)

Q(points)

Q(polar)

Q(polarity)

Q(polarity)

Q(polarity)

Q(polarity)

Q(polarity)

Q(polarity)

Q(poll)

Q(poll)

Q(poll)

Q(pop)

Q(pop)

Q(pop)

Q(pop)

Q(pop)

Q(popitem)

Q(popleft)

Q(port)

Q(port)

Q(pow)

Q(pow)

Q(pr)

Q(pr)

Q(pr)

Q(pr)

Q(pr)

Q(pr)

Q(pr)

Q(pr)

Q(pr)

Q(pr)

Q(pr)

Q(pr)

Q(pr)

Q(pr)

Q(pr)

Q(pr)

Q(pr)

Q(pr)

Q(pr_timestamp)

Q(pr_timestamp)

Q(preload)

Q(preload)

Q(preload)

Q(preload)

Q(prescaler)

Q(prescaler)

Q(prescaler)

Q(prim)

Q(prim)

Q(print)

Q(print_exception)

Q(prio)

Q(prio)

Q(proc)

Q(proc)

Q(property)

Q(property)

Q(ptr)

Q(ptr)

Q(ptr16)

Q(ptr16)

Q(ptr32)

Q(ptr32)

Q(ptr8)

Q(ptr8)

Q(ptr_val)

Q(ptr_val)

Q(ptr_val)

Q(ptr_val)

Q(pull)

Q(pull)

Q(pull)

Q(pulse_width)

Q(pulse_width)

Q(pulse_width_percent)

Q(pulse_width_percent)

Q(push)

Q(push)

Q(pyb)

Q(pyb)

Q(pyb)

Q(qstr_info)

Q(r)

Q(r)

Q(radians)

Q(radius)

Q(radius)

Q(randint)

Q(random)

Q(randrange)

Q(range)

Q(range)

Q(range)

Q(rbit)

Q(rddir_size)

Q(rddir_size)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read_buf_len)

Q(read_cb)

Q(read_cb)

Q(read_cb)

Q(read_cb)

Q(read_cb)

Q(read_channel)

Q(read_core_temp)

Q(read_core_vbat)

Q(read_core_vref)

Q(read_line_cb)

Q(read_line_cb)

Q(read_task)

Q(read_task)

Q(read_text_chunks)

Q(read_text_chunks)

Q(read_timed)

Q(read_timed_multi)

Q(read_u16)

Q(read_vref)

Q(readbit)

Q(readblocks)

Q(readblocks)

Q(readbyte)

Q(readchar)

Q(readfrom)

Q(readfrom_into)

Q(readfrom_mem)

Q(readfrom_mem_into)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readlines)

Q(readlines)

Q(readlines)

Q(readonly)

Q(ready_cb)

Q(ready_cb)

Q(ready_cb)

Q(ready_cb)

Q(real)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(realign)

Q(rect)

Q(rect)

Q(recv)

Q(recv)

Q(recv)

Q(recv)

Q(recv)

Q(recv)

Q(recv)

Q(recv)

Q(recvfrom)

Q(red)

Q(red)

Q(refocus_policy)

Q(refocus_policy)

Q(refr_get_disp_refreshing)

Q(refr_init)

Q(refr_now)

Q(refr_set_disp_refreshing)

Q(refr_task)

Q(refr_task)

Q(refresh)

Q(refresh)

Q(refresh)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_ext_draw_pad)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(refresh_style)

Q(reg)

Q(register)

Q(regs)

Q(rel)

Q(rel)

Q(rel)

Q(rel)

Q(rel)

Q(rel)

Q(rel)

Q(rel)

Q(rel)

Q(rel)

Q(rel)

Q(rel)

Q(rel)

Q(rel)

Q(rel)

Q(rel)

Q(rel)

Q(rel)

Q(rel_tol)

Q(release)

Q(remember_unknown_chunks)

Q(remember_unknown_chunks)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove_cb)

Q(remove_cb)

Q(rename)

Q(rename)

Q(rename)

Q(rename_cb)

Q(rename_cb)

Q(repeat)

Q(repeat)

Q(repeat_pause)

Q(repeat_pause)

Q(repl_info)

Q(repl_uart)

Q(replace)

Q(replace)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(report_style_mod)

Q(repr)

Q(reserved)

Q(reserved)

Q(reset)

Q(reset)

Q(reset_cause)

Q(reset_query)

Q(reset_query)

Q(reverse)

Q(reverse)

Q(reversed)

Q(reversed)

Q(rfind)

Q(rfind)

Q(right)

Q(right)

Q(rindex)

Q(rindex)

Q(rmdir)

Q(rmdir)

Q(rmdir)

Q(rng)

Q(rng)

Q(roller)

Q(roller)

Q(roller)

Q(roller)

Q(rotate)

Q(rotated)

Q(rotated)

Q(round)

Q(rounded)

Q(rounded)

Q(rounder_cb)

Q(rounder_cb)

Q(route)

Q(rpartition)

Q(rpartition)

Q(rsplit)

Q(rsplit)

Q(rstrip)

Q(rstrip)

Q(rxbuf)

Q(s)

Q(s)

Q(sb)

Q(sb)

Q(sb)

Q(sb)

Q(sb)

Q(sb)

Q(sb)

Q(sb)

Q(sb)

Q(sb)

Q(sb)

Q(sb)

Q(sb)

Q(sb)

Q(scan)

Q(scan)

Q(schedule)

Q(sck)

Q(sck)

Q(sck)

Q(scl)

Q(scl)

Q(scr)

Q(scr)

Q(scr_act)

Q(scr_ll)

Q(scr_ll)

Q(scr_load)

Q(scrl)

Q(scrl)

Q(scrl)

Q(scrl)

Q(scrl)

Q(scrl)

Q(scroll)

Q(scroll_hor)

Q(scroll_hor)

Q(scroll_ver)

Q(scroll_ver)

Q(sda)

Q(sda)

Q(sdiv)

Q(search)

Q(search)

Q(sec)

Q(sec)

Q(second)

Q(second)

Q(seed)

Q(seek)

Q(seek)

Q(seek_cb)

Q(seek_cb)

Q(sel)

Q(sel)

Q(sel)

Q(sel)

Q(sel_color)

Q(sel_color)

Q(select)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send_recv)

Q(sendbreak)

Q(sendto)

Q(sep)

Q(sep)

Q(set)

Q(set)

Q(set_accepted_chars)

Q(set_align)

Q(set_align)

Q(set_align)

Q(set_angle_offset)

Q(set_angles)

Q(set_anim_speed)

Q(set_anim_time)

Q(set_anim_time)

Q(set_anim_time)

Q(set_anim_time)

Q(set_anim_time)

Q(set_anim_time)

Q(set_anim_time)

Q(set_anim_time)

Q(set_anim_time)

Q(set_anim_time)

Q(set_anim_time)

Q(set_arc_length)

Q(set_array_text)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_realign)

Q(set_auto_size)

Q(set_auto_size)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_base_dir)

Q(set_body_draw)

Q(set_bright)

Q(set_btn_ctrl)

Q(set_btn_ctrl_all)

Q(set_btn_selected)

Q(set_btn_size)

Q(set_btn_width)

Q(set_btns_hidden)

Q(set_btns_pos)

Q(set_buffer)

Q(set_cell_align)

Q(set_cell_crop)

Q(set_cell_merge_right)

Q(set_cell_type)

Q(set_cell_value)

Q(set_checked)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_click)

Q(set_col_cnt)

Q(set_col_width)

Q(set_color)

Q(set_color_mode)

Q(set_color_mode_fixed)

Q(set_content_size)

Q(set_critical_value)

Q(set_ctrl_map)

Q(set_ctrl_map)

Q(set_cursor_blink_time)

Q(set_cursor_click_pos)

Q(set_cursor_manage)

Q(set_cursor_pos)

Q(set_cursor_type)

Q(set_day_names)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_design_cb)

Q(set_digit_format)

Q(set_dir)

Q(set_div_line_count)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_dir)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_parent)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_drag_throw)

Q(set_draw_arrow)

Q(set_edge_flash)

Q(set_edge_flash)

Q(set_edge_flash)

Q(set_edge_flash)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_event_cb)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_ext_click_area)

Q(set_fit)

Q(set_fit)

Q(set_fit2)

Q(set_fit2)

Q(set_fit4)

Q(set_fit4)

Q(set_fix_height)

Q(set_fix_width)

Q(set_fix_width)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_height)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_hidden)

Q(set_highlighted_dates)

Q(set_hsv)

Q(set_hue)

Q(set_icc)

Q(set_inactive)

Q(set_indic_colored)

Q(set_ink_in_time)

Q(set_ink_out_time)

Q(set_ink_wait_time)

Q(set_insert_replace)

Q(set_knob_in)

Q(set_layout)

Q(set_layout)

Q(set_layout)

Q(set_layout)

Q(set_long_mode)

Q(set_map)

Q(set_map)

Q(set_margin)

Q(set_max_length)

Q(set_mode)

Q(set_month_names)

Q(set_needle_count)

Q(set_next)

Q(set_offset_x)

Q(set_offset_y)

Q(set_one_line)

Q(set_one_toggle)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_opa_scale_enable)

Q(set_options)

Q(set_options)

Q(set_padding_left)

Q(set_palette)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_parent_event)

Q(set_placeholder_text)

Q(set_point_count)

Q(set_points)

Q(set_points)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pos)

Q(set_pressed)

Q(set_preview)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_protect)

Q(set_pwd_mode)

Q(set_pwd_show_time)

Q(set_px)

Q(set_px_cb)

Q(set_px_cb)

Q(set_range)

Q(set_range)

Q(set_range)

Q(set_range)

Q(set_range)

Q(set_range)

Q(set_recolor)

Q(set_recolor)

Q(set_recolor)

Q(set_row_cnt)

Q(set_saturation)

Q(set_sb_mode)

Q(set_sb_mode)

Q(set_sb_mode)

Q(set_sb_mode)

Q(set_sb_mode)

Q(set_scale)

Q(set_scale)

Q(set_scrl_fit)

Q(set_scrl_fit2)

Q(set_scrl_fit4)

Q(set_scrl_height)

Q(set_scrl_layout)

Q(set_scrl_width)

Q(set_scroll_propagation)

Q(set_scroll_propagation)

Q(set_scroll_propagation)

Q(set_secondary_y_tick_length)

Q(set_secondary_y_tick_texts)

Q(set_selected)

Q(set_selected)

Q(set_series_darking)

Q(set_series_opa)

Q(set_series_width)

Q(set_showed_date)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_signal_cb)

Q(set_single_mode)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_size)

Q(set_sliding)

Q(set_spin_time)

Q(set_src)

Q(set_src)

Q(set_state)

Q(set_state)

Q(set_static_text)

Q(set_static_text)

Q(set_stay_open)

Q(set_step)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_style)

Q(set_sym)

Q(set_sym)

Q(set_ta)

Q(set_tab_act)

Q(set_text)

Q(set_text)

Q(set_text)

Q(set_text)

Q(set_text_align)

Q(set_text_fmt)

Q(set_text_sel)

Q(set_text_sel_end)

Q(set_text_sel_start)

Q(set_tile_act)

Q(set_title)

Q(set_today_date)

Q(set_toggle)

Q(set_toggle)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_top)

Q(set_type)

Q(set_type)

Q(set_type)

Q(set_update_mode)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_user_data)

Q(set_valid_positions)

Q(set_value)

Q(set_value)

Q(set_value)

Q(set_value)

Q(set_value)

Q(set_value)

Q(set_visible_row_count)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_width)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x)

Q(set_x_tick_length)

Q(set_x_tick_texts)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y)

Q(set_y_invert)

Q(set_y_tick_length)

Q(set_y_tick_texts)

Q(setattr)

Q(setblocking)

Q(setdefault)

Q(setinterrupt)

Q(setsockopt)

Q(setter)

Q(settimeout)

Q(sha256)

Q(sha256)

Q(shadow)

Q(shadow)

Q(short_val)

Q(short_val)

Q(short_val)

Q(short_val)

Q(signal_send)

Q(sin)

Q(sin)

Q(single)

Q(sinh)

Q(size)

Q(size)

Q(size_cb)

Q(size_cb)

Q(sizeof)

Q(sleep)

Q(sleep)

Q(sleep_ms)

Q(sleep_us)

Q(slice)

Q(slice)

Q(slider)

Q(slider)

Q(slider)

Q(slider)

Q(socket)

Q(socket)

Q(soft_reset)

Q(sort)

Q(sorted)

Q(source_freq)

Q(spinbox)

Q(spinbox)

Q(spinbox)

Q(spinbox)

Q(spinner_anim)

Q(split)

Q(split)

Q(split)

Q(splitlines)

Q(splitlines)

Q(sqrt)

Q(sqrt)

Q(sqrt)

Q(src)

Q(src)

Q(src_get_type)

Q(src_type)

Q(src_type)

Q(srgb_defined)

Q(srgb_defined)

Q(srgb_intent)

Q(srgb_intent)

Q(stack_use)

Q(standby)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start_auto_close)

Q(start_edge_flash)

Q(start_point)

Q(start_point)

Q(startswith)

Q(startswith)

Q(stat)

Q(stat)

Q(stat)

Q(stat)

Q(state)

Q(state)

Q(state)

Q(state)

Q(state_cleanup)

Q(state_copy)

Q(state_init)

Q(staticmethod)

Q(staticmethod)

Q(statvfs)

Q(statvfs)

Q(statvfs)

Q(stderr)

Q(stdin)

Q(stdout)

Q(step)

Q(step)

Q(step_next)

Q(step_prev)

Q(stm)

Q(stm)

Q(stm)

Q(stop)

Q(stop)

Q(stop)

Q(stop)

Q(stop)

Q(stop_auto_close)

Q(str)

Q(str)

Q(str)

Q(str)

Q(str)

Q(str_val)

Q(str_val)

Q(str_val)

Q(str_val)

Q(strb)

Q(strex)

Q(strh)

Q(strip)

Q(strip)

Q(struct)

Q(struct)

Q(style)

Q(style)

Q(style)

Q(style)

Q(style_anim_clear_playback)

Q(style_anim_clear_repeat)

Q(style_anim_create)

Q(style_anim_init)

Q(style_anim_set_playback)

Q(style_anim_set_ready_cb)

Q(style_anim_set_repeat)

Q(style_anim_set_styles)

Q(style_anim_set_time)

Q(style_btn_ina)

Q(style_btn_pr)

Q(style_btn_rel)

Q(style_btn_tgl_pr)

Q(style_btn_tgl_rel)

Q(style_copy)

Q(style_init)

Q(style_mix)

Q(style_mod_cb)

Q(style_mod_cb)

Q(style_mod_edit_cb)

Q(style_mod_edit_cb)

Q(style_mod_edit_xcb)

Q(style_mod_edit_xcb)

Q(style_mod_xcb)

Q(style_mod_xcb)

Q(style_plain)

Q(style_plain_color)

Q(style_pretty)

Q(style_pretty_color)

Q(style_scr)

Q(style_t)

Q(style_tmp)

Q(style_tmp)

Q(style_transp)

Q(style_transp_fit)

Q(style_transp_tight)

Q(sub)

Q(sub)

Q(sub)

Q(sub)

Q(subpx)

Q(subpx)

Q(sum)

Q(super)

Q(super)

Q(super)

Q(sw)

Q(sw)

Q(sw)

Q(sw)

Q(swint)

Q(symmetric_difference)

Q(symmetric_difference)

Q(symmetric_difference_update)

Q(sync)

Q(sync)

Q(sync)

Q(sys)

Q(sys)

Q(sys_layer)

Q(sys_layer)

Q(sysname)

Q(ta)

Q(ta)

Q(ta)

Q(ta)

Q(table)

Q(table)

Q(table)

Q(table)

Q(tabview)

Q(tabview)

Q(tabview)

Q(tabview)

Q(tail)

Q(tail)

Q(tan)

Q(tanh)

Q(task_cb)

Q(task_cb)

Q(task_core_init)

Q(task_create)

Q(task_create_basic)

Q(task_del)

Q(task_enable)

Q(task_get_idle)

Q(task_handler)

Q(task_once)

Q(task_ready)

Q(task_reset)

Q(task_set_cb)

Q(task_set_period)

Q(task_set_prio)

Q(task_t)

Q(task_xcb)

Q(task_xcb)

Q(tell)

Q(tell_cb)

Q(tell_cb)

Q(text)

Q(text)

Q(text)

Q(text_is_selected)

Q(text_keys)

Q(text_keys)

Q(text_num)

Q(text_num)

Q(text_strings)

Q(text_strings)

Q(tgl_pr)

Q(tgl_pr)

Q(tgl_pr)

Q(tgl_pr)

Q(tgl_pr)

Q(tgl_pr)

Q(tgl_pr)

Q(tgl_pr)

Q(tgl_pr)

Q(tgl_pr)

Q(tgl_pr)

Q(tgl_pr)

Q(tgl_pr)

Q(tgl_pr)

Q(tgl_rel)

Q(tgl_rel)

Q(tgl_rel)

Q(tgl_rel)

Q(tgl_rel)

Q(tgl_rel)

Q(tgl_rel)

Q(tgl_rel)

Q(tgl_rel)

Q(tgl_rel)

Q(tgl_rel)

Q(tgl_rel)

Q(tgl_rel)

Q(tgl_rel)

Q(theme_alien_init)

Q(theme_default_init)

Q(theme_get_alien)

Q(theme_get_current)

Q(theme_get_default)

Q(theme_get_material)

Q(theme_get_mono)

Q(theme_get_nemo)

Q(theme_get_night)

Q(theme_get_templ)

Q(theme_get_zen)

Q(theme_material_init)

Q(theme_mono_init)

Q(theme_nemo_init)

Q(theme_night_init)

Q(theme_set_current)

Q(theme_t)

Q(theme_templ_init)

Q(theme_zen_init)

Q(threshold)

Q(throw)

Q(throw)

Q(ti)

Q(tick_elaps)

Q(tick_get)

Q(tick_hz)

Q(tick_hz)

Q(tick_inc)

Q(ticks_add)

Q(ticks_cpu)

Q(ticks_diff)

Q(ticks_ms)

Q(ticks_us)

Q(tileview)

Q(tileview)

Q(tileview)

Q(tileview)

Q(time)

Q(time)

Q(time)

Q(time)

Q(time)

Q(time_defined)

Q(time_defined)

Q(time_pulse_us)

Q(time_to_open)

Q(time_to_open)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout_char)

Q(timingr)

Q(to_bytes)

Q(today_box)

Q(today_box)

Q(toggle)

Q(toggle)

Q(toggle)

Q(toggle)

Q(toggle)

Q(top)

Q(top)

Q(top_layer)

Q(top_layer)

Q(total_size)

Q(total_size)

Q(trigger)

Q(trigger)

Q(trigger)

Q(trigo_sin)

Q(trunc)

Q(trunc_cb)

Q(trunc_cb)

Q(tuple)

Q(tuple)

Q(tuple)

Q(txt_cut)

Q(txt_get_next_line)

Q(txt_get_size)

Q(txt_get_width)

Q(txt_ins)

Q(txt_is_cmd)

Q(type)

Q(type)

Q(type)

Q(type)

Q(type)

Q(type)

Q(type)

Q(type)

Q(types)

Q(types)

Q(uarray)

Q(uarray)

Q(ubinascii)

Q(ubinascii)

Q(uchar_val)

Q(uchar_val)

Q(uchar_val)

Q(uchar_val)

Q(ucollections)

Q(ucollections)

Q(uctypes)

Q(uctypes)

Q(uctypes)

Q(udelay)

Q(udiv)

Q(uerrno)

Q(uerrno)

Q(uhashlib)

Q(uhashlib)

Q(uheapq)

Q(uheapq)

Q(uint)

Q(uint)

Q(uint)

Q(uint_val)

Q(uint_val)

Q(uint_val)

Q(uint_val)

Q(uio)

Q(uio)

Q(ujson)

Q(ujson)

Q(umachine)

Q(umachine)

Q(umachine)

Q(umount)

Q(umount)

Q(umount)

Q(uname)

Q(unhexlify)

Q(uniform)

Q(union)

Q(union)

Q(unique_id)

Q(unique_id)

Q(unknown_chunks_data)

Q(unknown_chunks_data)

Q(unknown_chunks_size)

Q(unknown_chunks_size)

Q(unlink)

Q(unpack)

Q(unpack_from)

Q(unregister)

Q(uos)

Q(uos)

Q(up)

Q(update)

Q(update)

Q(update)

Q(upper)

Q(upper)

Q(urandom)

Q(urandom)

Q(urandom)

Q(ure)

Q(ure)

Q(ure)

Q(usb_mode)

Q(used_cnt)

Q(used_cnt)

Q(used_pct)

Q(used_pct)

Q(uselect)

Q(uselect)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(ushort_val)

Q(ushort_val)

Q(ushort_val)

Q(ushort_val)

Q(usocket)

Q(usocket)

Q(ustruct)

Q(ustruct)

Q(utf_hyphen_8)

Q(utf_hyphen_8)

Q(utime)

Q(utime)

Q(utimeq)

Q(utimeq)

Q(utimeq)

Q(utimeq)

Q(uzlib)

Q(uzlib)

Q(v)

Q(v)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(values)

Q(var)

Q(var)

Q(vcmp)

Q(vcvt_f32_s32)

Q(vcvt_s32_f32)

Q(vect)

Q(vect)

Q(ver_res)

Q(ver_res)

Q(version)

Q(version)

Q(version)

Q(version_info)

Q(vid)

Q(viper)

Q(vldr)

Q(vline)

Q(vmov)

Q(vmrs)

Q(vneg)

Q(vsqrt)

Q(vstr)

Q(w)

Q(w)

Q(wait_until_release)

Q(wait_until_release)

Q(wakeup)

Q(week_box)

Q(week_box)

Q(wfi)

Q(wfi)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(win)

Q(win)

Q(win)

Q(win)

Q(wrap)

Q(wrap)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write_cb)

Q(write_cb)

Q(write_readinto)

Q(write_readinto)

Q(writebit)

Q(writeblocks)

Q(writeblocks)

Q(writebyte)

Q(writechar)

Q(writeto)

Q(writeto_mem)

Q(writevto)

Q(x)

Q(x)

Q(x1)

Q(x1)

Q(x2)

Q(x2)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y1)

Q(y1)

Q(y2)

Q(y2)

Q(year)

Q(year)

Q(year)

Q(year)

Q(zip)

Q(zip)

Q(zlib_decompress)

Q(zlibsettings)

Q(zlibsettings)
