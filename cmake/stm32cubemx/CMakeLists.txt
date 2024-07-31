cmake_minimum_required(VERSION 3.22)

project(stm32cubemx)
add_library(stm32cubemx INTERFACE)

# Enable CMake support for ASM, C and C++ languages
enable_language(C CXX ASM)

target_compile_definitions(stm32cubemx INTERFACE 
	USE_HAL_DRIVER 
	STM32F750xx
    $<$<CONFIG:Debug>:DEBUG>
)

target_include_directories(stm32cubemx INTERFACE
    ../../Core/Inc
    ../../LIBJPEG/App
    ../../LIBJPEG/Target
    ../../TouchGFX/App
    ../../TouchGFX/target/generated
    ../../TouchGFX/target
    ../../Drivers/STM32F7xx_HAL_Driver/Inc
    ../../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy
    ../../Middlewares/Third_Party/FreeRTOS/Source/include
    ../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2
    ../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1
    ../../Middlewares/Third_Party/LibJPEG/include
    ../../Drivers/CMSIS/Device/ST/STM32F7xx/Include
    ../../Drivers/CMSIS/Include
)

target_sources(stm32cubemx INTERFACE
    ../../Core/Src/main.c
    ../../Core/Src/freertos.c
    ../../Core/Src/stm32f7xx_it.c
    ../../Core/Src/stm32f7xx_hal_msp.c
    ../../Core/Src/stm32f7xx_hal_timebase_tim.c
    ../../TouchGFX/target/TouchGFXHAL.cpp
    ../../TouchGFX/target/STM32TouchController.cpp
    ../../TouchGFX/target/TouchGFXGPIO.cpp
    ../../TouchGFX/target/generated/TouchGFXConfiguration.cpp
    ../../TouchGFX/target/generated/TouchGFXGeneratedHAL.cpp
    ../../TouchGFX/target/generated/STM32DMA.cpp
    ../../TouchGFX/target/generated/OSWrappers.cpp
    ../../TouchGFX/App/app_touchgfx.c
    ../../LIBJPEG/App/libjpeg.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_cortex.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_crc.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_crc_ex.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rcc.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rcc_ex.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_flash.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_flash_ex.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_gpio.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dma.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dma_ex.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pwr.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pwr_ex.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_i2c.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_i2c_ex.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_exti.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dma2d.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_tim.c
    ../../Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_tim_ex.c
    ../../Core/Src/system_stm32f7xx.c
    ../../Middlewares/Third_Party/FreeRTOS/Source/croutine.c
    ../../Middlewares/Third_Party/FreeRTOS/Source/event_groups.c
    ../../Middlewares/Third_Party/FreeRTOS/Source/list.c
    ../../Middlewares/Third_Party/FreeRTOS/Source/queue.c
    ../../Middlewares/Third_Party/FreeRTOS/Source/stream_buffer.c
    ../../Middlewares/Third_Party/FreeRTOS/Source/tasks.c
    ../../Middlewares/Third_Party/FreeRTOS/Source/timers.c
    ../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c
    ../../Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/heap_4.c
    ../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1/port.c
    ../../Middlewares/Third_Party/LibJPEG/source/jcapimin.c
    ../../Middlewares/Third_Party/LibJPEG/source/jcapistd.c
    ../../Middlewares/Third_Party/LibJPEG/source/jdapimin.c
    ../../Middlewares/Third_Party/LibJPEG/source/jdapistd.c
    ../../Middlewares/Third_Party/LibJPEG/source/jcomapi.c
    ../../Middlewares/Third_Party/LibJPEG/source/jcparam.c
    ../../Middlewares/Third_Party/LibJPEG/source/jctrans.c
    ../../Middlewares/Third_Party/LibJPEG/source/jdtrans.c
    ../../Middlewares/Third_Party/LibJPEG/source/jcinit.c
    ../../Middlewares/Third_Party/LibJPEG/source/jcmaster.c
    ../../Middlewares/Third_Party/LibJPEG/source/jcmainct.c
    ../../Middlewares/Third_Party/LibJPEG/source/jcprepct.c
    ../../Middlewares/Third_Party/LibJPEG/source/jccoefct.c
    ../../Middlewares/Third_Party/LibJPEG/source/jccolor.c
    ../../Middlewares/Third_Party/LibJPEG/source/jcsample.c
    ../../Middlewares/Third_Party/LibJPEG/source/jcdctmgr.c
    ../../Middlewares/Third_Party/LibJPEG/source/jfdctint.c
    ../../Middlewares/Third_Party/LibJPEG/source/jfdctfst.c
    ../../Middlewares/Third_Party/LibJPEG/source/jfdctflt.c
    ../../Middlewares/Third_Party/LibJPEG/source/jchuff.c
    ../../Middlewares/Third_Party/LibJPEG/source/jcarith.c
    ../../Middlewares/Third_Party/LibJPEG/source/jcmarker.c
    ../../Middlewares/Third_Party/LibJPEG/source/jdatadst.c
    ../../Middlewares/Third_Party/LibJPEG/source/jdmaster.c
    ../../Middlewares/Third_Party/LibJPEG/source/jdinput.c
    ../../Middlewares/Third_Party/LibJPEG/source/jdmainct.c
    ../../Middlewares/Third_Party/LibJPEG/source/jdcoefct.c
    ../../Middlewares/Third_Party/LibJPEG/source/jdpostct.c
    ../../Middlewares/Third_Party/LibJPEG/source/jdmarker.c
    ../../Middlewares/Third_Party/LibJPEG/source/jdhuff.c
    ../../Middlewares/Third_Party/LibJPEG/source/jdarith.c
    ../../Middlewares/Third_Party/LibJPEG/source/jddctmgr.c
    ../../Middlewares/Third_Party/LibJPEG/source/jidctint.c
    ../../Middlewares/Third_Party/LibJPEG/source/jidctfst.c
    ../../Middlewares/Third_Party/LibJPEG/source/jidctflt.c
    ../../Middlewares/Third_Party/LibJPEG/source/jdsample.c
    ../../Middlewares/Third_Party/LibJPEG/source/jdcolor.c
    ../../Middlewares/Third_Party/LibJPEG/source/jdmerge.c
    ../../Middlewares/Third_Party/LibJPEG/source/jquant1.c
    ../../Middlewares/Third_Party/LibJPEG/source/jquant2.c
    ../../Middlewares/Third_Party/LibJPEG/source/jdatasrc.c
    ../../Middlewares/Third_Party/LibJPEG/source/jaricom.c
    ../../Middlewares/Third_Party/LibJPEG/source/jerror.c
    ../../Middlewares/Third_Party/LibJPEG/source/jmemmgr.c
    ../../Middlewares/Third_Party/LibJPEG/source/jutils.c
    ../../Middlewares/Third_Party/LibJPEG/source/jmemnobs.c
    ../../Core/Src/sysmem.c
    ../../Core/Src/syscalls.c
    ../../startup_stm32f750xx.s
)

target_link_directories(stm32cubemx INTERFACE
)

target_link_libraries(stm32cubemx INTERFACE
)

# Validate that STM32CubeMX code is compatible with C standard
if(CMAKE_C_STANDARD LESS 11)
    message(ERROR "Generated code requires C11 or higher")
endif()

# Validate that STM32CubeMX code is compatible with C++ standard
if(CMAKE_CXX_STANDARD LESS 11)
    message(ERROR "Generated code requires C++11 or higher")
endif()
