#include <stdint.h>

#define UINT32(x) ((uint32_t)(x))
#define RESERVED  0

extern uint32_t _estack;
extern uint32_t _sdata;
extern uint32_t _sidata;
extern uint32_t _edata;
extern uint32_t _sbss;
extern uint32_t _ebss;


int main(void);
void Default_Handler(void);


/* Exception and interrupt handlers */
/* Each handler is weakly linked and aliased to the Default_Handler function */
void Reset_Handler(void);
void NMI_Handler(void)__attribute__((weak, alias("Default_Handler")));
void HardFault_Handler(void)__attribute__((weak, alias("Default_Handler")));
void MemManage_Handler(void)__attribute__((weak, alias("Default_Handler")));
void BusFault_Handler(void)__attribute__((weak, alias("Default_Handler")));
void UsageFault_Handler(void)__attribute__((weak, alias("Default_Handler")));
void SVC_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DebugMon_Handler(void)__attribute__((weak, alias("Default_Handler")));
void PendSV_Handler(void)__attribute__((weak, alias("Default_Handler")));
void SysTick_Handler(void)__attribute__((weak, alias("Default_Handler")));
void WWDG_Handler(void)__attribute__((weak, alias("Default_Handler")));
void PVD_Handler(void)__attribute__((weak, alias("Default_Handler")));
void TAMP_STAMP_Handler(void)__attribute__((weak, alias("Default_Handler")));
void RTC_WKUP_Handler(void)__attribute__((weak, alias("Default_Handler")));
void FLASH_Handler(void)__attribute__((weak, alias("Default_Handler")));
void RCC_Handler(void)__attribute__((weak, alias("Default_Handler")));
void EXTI0_Handler(void)__attribute__((weak, alias("Default_Handler")));
void EXTI1_Handler(void)__attribute__((weak, alias("Default_Handler")));
void EXTI2_Handler(void)__attribute__((weak, alias("Default_Handler")));
void EXTI3_Handler(void)__attribute__((weak, alias("Default_Handler")));
void EXTI4_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DMA1_Stream0_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DMA1_Stream1_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DMA1_Stream2_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DMA1_Stream3_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DMA1_Stream4_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DMA1_Stream5_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DMA1_Stream6_Handler(void)__attribute__((weak, alias("Default_Handler")));
void ADC_Handler(void)__attribute__((weak, alias("Default_Handler")));
void CAN1_TX_Handler(void)__attribute__((weak, alias("Default_Handler")));
void CAN1_RX0_Handler(void)__attribute__((weak, alias("Default_Handler")));
void CAN1_RX1_Handler(void)__attribute__((weak, alias("Default_Handler")));
void CAN1_SCE_Handler(void)__attribute__((weak, alias("Default_Handler")));
void EXTI9_5_Handler(void)__attribute__((weak, alias("Default_Handler")));
void TIM1_BRK_TIM9_Handler(void)__attribute__((weak, alias("Default_Handler")));
void TIM1_UP_TIM10_Handler(void)__attribute__((weak, alias("Default_Handler")));
void TIM1_TRG_COM_TIM11_Handler(void)__attribute__((weak, alias("Default_Handler")));
void TIM1_CC_Handler(void)__attribute__((weak, alias("Default_Handler")));
void TIM2_Handler(void)__attribute__((weak, alias("Default_Handler")));
void TIM3_Handler(void)__attribute__((weak, alias("Default_Handler")));
void TIM4_Handler(void)__attribute__((weak, alias("Default_Handler")));
void I2C1_EV_Handler(void)__attribute__((weak, alias("Default_Handler")));
void I2C1_ER_Handler(void)__attribute__((weak, alias("Default_Handler")));
void I2C2_EV_Handler(void)__attribute__((weak, alias("Default_Handler")));
void I2C2_ER_Handler(void)__attribute__((weak, alias("Default_Handler")));
void SPI1_Handler(void)__attribute__((weak, alias("Default_Handler")));
void SPI2_Handler(void)__attribute__((weak, alias("Default_Handler")));
void USART1_Handler(void)__attribute__((weak, alias("Default_Handler")));
void USART2_Handler(void)__attribute__((weak, alias("Default_Handler")));
void USART3_Handler(void)__attribute__((weak, alias("Default_Handler")));
void EXTI15_10_Handler(void)__attribute__((weak, alias("Default_Handler")));
void RTC_Alarm_Handler(void)__attribute__((weak, alias("Default_Handler")));
void OTG_FS_WKUP_Handler(void)__attribute__((weak, alias("Default_Handler")));
void TIM8_BRK_TIM12_Handler(void)__attribute__((weak, alias("Default_Handler")));
void TIM8_UP_TIM13_Handler(void)__attribute__((weak, alias("Default_Handler")));
void TIM8_TRG_COM_TIM14_Handler(void)__attribute__((weak, alias("Default_Handler")));
void TIM8_CC_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DMA1_Stream7_Handler(void)__attribute__((weak, alias("Default_Handler")));
void FMC_Handler(void)__attribute__((weak, alias("Default_Handler")));
void SDIO_Handler(void)__attribute__((weak, alias("Default_Handler")));
void TIM5_Handler(void)__attribute__((weak, alias("Default_Handler")));
void SPI3_Handler(void)__attribute__((weak, alias("Default_Handler")));
void UART4_Handler(void)__attribute__((weak, alias("Default_Handler")));
void UART5_Handler(void)__attribute__((weak, alias("Default_Handler")));
void TIM6_DAC_Handler(void)__attribute__((weak, alias("Default_Handler")));
void TIM7_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DMA2_Stream0_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DMA2_Stream1_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DMA2_Stream2_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DMA2_Stream3_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DMA2_Stream4_Handler(void)__attribute__((weak, alias("Default_Handler")));
void CAN2_TX_Handler(void)__attribute__((weak, alias("Default_Handler")));
void CAN2_RX0_Handler(void)__attribute__((weak, alias("Default_Handler")));
void CAN2_RX1_Handler(void)__attribute__((weak, alias("Default_Handler")));
void CAN2_SCE_Handler(void)__attribute__((weak, alias("Default_Handler")));
void OTG_FS_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DMA2_Stream5_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DMA2_Stream6_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DMA2_Stream7_Handler(void)__attribute__((weak, alias("Default_Handler")));
void USART6_Handler(void)__attribute__((weak, alias("Default_Handler")));
void I2C3_EV_Handler(void)__attribute__((weak, alias("Default_Handler")));
void I2C3_ER_Handler(void)__attribute__((weak, alias("Default_Handler")));
void OTG_HS_EP1_OUT_Handler(void)__attribute__((weak, alias("Default_Handler")));
void OTG_HS_EP1_IN_Handler(void)__attribute__((weak, alias("Default_Handler")));
void OTG_HS_WKUP_Handler(void)__attribute__((weak, alias("Default_Handler")));
void OTG_HS_Handler(void)__attribute__((weak, alias("Default_Handler")));
void DCMI_Handler(void)__attribute__((weak, alias("Default_Handler")));
void FPU_Handler(void)__attribute__((weak, alias("Default_Handler")));
void SPI4_Handler(void)__attribute__((weak, alias("Default_Handler")));
void SAI1_Handler(void)__attribute__((weak, alias("Default_Handler")));
void SAI2_Handler(void)__attribute__((weak, alias("Default_Handler")));
void QUADSPI_Handler(void)__attribute__((weak, alias("Default_Handler")));
void CEC_Handler(void)__attribute__((weak, alias("Default_Handler")));
void SPDIF_RX_Handler(void)__attribute__((weak, alias("Default_Handler")));
void FMPI2C1_EV_Handler(void)__attribute__((weak, alias("Default_Handler")));
void FMPI2C1_ER_Handler(void)__attribute__((weak, alias("Default_Handler")));


/* Vector table */
/* used -> compile-side protection; .isr_vector already protected on the linker-side */
const uint32_t vector_tbl[]__attribute__((used, section(".isr_vector"))) = {
    UINT32(&_estack),
    UINT32(&Reset_Handler),
    UINT32(&NMI_Handler),
    UINT32(&HardFault_Handler),
    UINT32(&MemManage_Handler),
    UINT32(&BusFault_Handler),
    UINT32(&UsageFault_Handler),
    RESERVED,
    RESERVED,
    RESERVED,
    RESERVED,
    UINT32(&SVC_Handler),
    UINT32(&DebugMon_Handler),
    RESERVED,
    UINT32(&PendSV_Handler),
    UINT32(&SysTick_Handler),
    UINT32(&WWDG_Handler),
    UINT32(&PVD_Handler),
    UINT32(&TAMP_STAMP_Handler),
    UINT32(&RTC_WKUP_Handler),
    UINT32(&FLASH_Handler),
    UINT32(&RCC_Handler),
    UINT32(&EXTI0_Handler),
    UINT32(&EXTI1_Handler),
    UINT32(&EXTI2_Handler),
    UINT32(&EXTI3_Handler),
    UINT32(&EXTI4_Handler),
    UINT32(&DMA1_Stream0_Handler),
    UINT32(&DMA1_Stream1_Handler),
    UINT32(&DMA1_Stream2_Handler),
    UINT32(&DMA1_Stream3_Handler),
    UINT32(&DMA1_Stream4_Handler),
    UINT32(&DMA1_Stream5_Handler),
    UINT32(&DMA1_Stream6_Handler),
    UINT32(&ADC_Handler),
    UINT32(&CAN1_TX_Handler),
    UINT32(&CAN1_RX0_Handler),
    UINT32(&CAN1_RX1_Handler),
    UINT32(&CAN1_SCE_Handler),
    UINT32(&EXTI9_5_Handler),
    UINT32(&TIM1_BRK_TIM9_Handler),
    UINT32(&TIM1_UP_TIM10_Handler),
    UINT32(&TIM1_TRG_COM_TIM11_Handler),
    UINT32(&TIM1_CC_Handler),
    UINT32(&TIM2_Handler),
    UINT32(&TIM3_Handler),
    UINT32(&TIM4_Handler),
    UINT32(&I2C1_EV_Handler),
    UINT32(&I2C1_ER_Handler),
    UINT32(&I2C2_EV_Handler),
    UINT32(&I2C2_ER_Handler),
    UINT32(&SPI1_Handler),
    UINT32(&SPI2_Handler),
    UINT32(&USART1_Handler),
    UINT32(&USART2_Handler),
    UINT32(&USART3_Handler),
    UINT32(&EXTI15_10_Handler),
    UINT32(&RTC_Alarm_Handler),
    UINT32(&OTG_FS_WKUP_Handler),
    UINT32(&TIM8_BRK_TIM12_Handler),
    UINT32(&TIM8_UP_TIM13_Handler),
    UINT32(&TIM8_TRG_COM_TIM14_Handler),
    UINT32(&TIM8_CC_Handler),
    UINT32(&DMA1_Stream7_Handler),
    UINT32(&FMC_Handler),
    UINT32(&SDIO_Handler),
    UINT32(&TIM5_Handler),
    UINT32(&SPI3_Handler),
    UINT32(&UART4_Handler),
    UINT32(&UART5_Handler),
    UINT32(&TIM6_DAC_Handler),
    UINT32(&TIM7_Handler),
    UINT32(&DMA2_Stream0_Handler),
    UINT32(&DMA2_Stream1_Handler),
    UINT32(&DMA2_Stream2_Handler),
    UINT32(&DMA2_Stream3_Handler),
    UINT32(&DMA2_Stream4_Handler),
    RESERVED,
    RESERVED,
    UINT32(&CAN2_TX_Handler),
    UINT32(&CAN2_RX0_Handler),
    UINT32(&CAN2_RX1_Handler),
    UINT32(&CAN2_SCE_Handler),
    UINT32(&OTG_FS_Handler),
    UINT32(&DMA2_Stream5_Handler),
    UINT32(&DMA2_Stream6_Handler),
    UINT32(&DMA2_Stream7_Handler),
    UINT32(&USART6_Handler),
    UINT32(&I2C3_EV_Handler),
    UINT32(&I2C3_ER_Handler),
    UINT32(&OTG_HS_EP1_OUT_Handler),
    UINT32(&OTG_HS_EP1_IN_Handler),
    UINT32(&OTG_HS_WKUP_Handler),
    UINT32(&OTG_HS_Handler),
    UINT32(&DCMI_Handler),
    RESERVED,
    RESERVED,
    UINT32(&FPU_Handler),
    RESERVED,
    RESERVED,
    UINT32(&SPI4_Handler),
    RESERVED,
    RESERVED,
    UINT32(&SAI1_Handler),
    RESERVED,
    RESERVED,
    RESERVED,
    UINT32(&SAI2_Handler),
    UINT32(&QUADSPI_Handler),
    UINT32(&CEC_Handler),
    UINT32(&SPDIF_RX_Handler),
    UINT32(&FMPI2C1_EV_Handler),
    UINT32(&FMPI2C1_ER_Handler),
};


void Default_Handler(void)
{
    while (1) {}
}


void Reset_Handler(void)
{
    uint32_t data_mem_size = UINT32(&_edata) - UINT32(&_sdata);
    uint32_t bss_mem_size  = UINT32(&_ebss) - UINT32(&_sbss);

    uint32_t *p_src_mem  = &_sidata;
    uint32_t *p_dest_mem = &_sdata;

    /* Counter increment accounts for address increment (+4 bytes) */
    for (volatile uint32_t i = 0; i < data_mem_size; i += 4) {
        *(p_dest_mem++) = *(p_src_mem++);
    }

    p_dest_mem = &_sbss;
    for (volatile uint32_t i = 0; i < bss_mem_size; i += 4) {
        *(p_dest_mem++) = 0;
    }

    main();

    while (1) {} /* Handle a return from main() */
}
