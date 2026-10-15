#define PERIPH_BASE         (0x40000000UL)

#define AHB1PERIPH_OFFSET   (0x00020000UL)
#define GPIOA_OFFSET        (0x0000UL)
#define RCC_OFFSET          (0x3800UL)
#define AHB1ENR_OFFSET      (0x30UL)
#define MODER_OFFSET        (0x00UL)
#define ODR_OFFSET          (0x14UL)

#define AHB1PERIPH_BASE     (PERIPH_BASE + AHB1PERIPH_OFFSET)
#define GPIOA_BASE          (AHB1PERIPH_BASE + GPIOA_OFFSET)
#define RCC_BASE            (AHB1PERIPH_BASE + RCC_OFFSET)

#define RCC_AHB1ENR         (*(volatile unsigned int *)(RCC_BASE + AHB1ENR_OFFSET))
#define GPIOA_MODER         (*(volatile unsigned int *)(GPIOA_BASE + MODER_OFFSET))
#define GPIOA_ODR           (*(volatile unsigned int *)(GPIOA_BASE + ODR_OFFSET))

int main(void)
{
    RCC_AHB1ENR |= (1U<<0);     // Enable clock access for GPIOA

    GPIOA_MODER |= (1U<<10);    // Set bit 10
    GPIOA_MODER &= ~(1U<<11);   // Clear bit 11

    while (1) {
        GPIOA_ODR ^= (1U<<5);   // PA5 == HIGH
        for (volatile int i = 0; i < 1000000; i++);
    }
}
