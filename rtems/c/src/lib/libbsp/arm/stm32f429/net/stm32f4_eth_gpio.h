#ifndef _BSP_STM32F4_ETH_GPIO_H
#define _BSP_STM32F4_ETH_GPIO_H

#define STM32F4_PIN_ETH(port, idx, altfunc) \
  { \
    { \
      .pin_first = STM32F4_GPIO_PIN(port, idx), \
      .pin_last = STM32F4_GPIO_PIN(port, idx), \
      .mode = STM32F4_GPIO_MODE_AF, \
      .otype = STM32F4_GPIO_OTYPE_PUSH_PULL, \
      .ospeed = STM32F4_GPIO_OSPEED_100_MHZ, \
      .pupd = STM32F4_GPIO_NO_PULL, \
      .af = altfunc \
    } \
  } 


/* MCO PA8 */
#define STM32F4_PIN_ETH_MCO_PA8 \
	STM32F4_PIN_ETH(0, 8, STM32F4_GPIO_AF_SYSTEM)

/*
 * PAx
 */
#define STM32F4_PIN_ETH_PA0 \
	STM32F4_PIN_ETH(0, 0, STM32F4_GPIO_AF_ETH)
#define STM32F4_PIN_ETH_PA1 \
	STM32F4_PIN_ETH(0, 1, STM32F4_GPIO_AF_ETH)
#define STM32F4_PIN_ETH_PA2 \
	STM32F4_PIN_ETH(0, 2, STM32F4_GPIO_AF_ETH)
#define STM32F4_PIN_ETH_PA3 \
	STM32F4_PIN_ETH(0, 3, STM32F4_GPIO_AF_ETH)
#define STM32F4_PIN_ETH_PA7 \
	STM32F4_PIN_ETH(0, 7, STM32F4_GPIO_AF_ETH)

/*
 * PBx
 */
#define STM32F4_PIN_ETH_PB8 \
	STM32F4_PIN_ETH(1, 8, STM32F4_GPIO_AF_ETH)
#define STM32F4_PIN_ETH_PB10 \
	STM32F4_PIN_ETH(1, 10, STM32F4_GPIO_AF_ETH)
#define STM32F4_PIN_ETH_PB11 \
	STM32F4_PIN_ETH(1, 11, STM32F4_GPIO_AF_ETH)

/*
 * PCx
 */
#define STM32F4_PIN_ETH_PC1 \
	STM32F4_PIN_ETH(2, 1, STM32F4_GPIO_AF_ETH)
#define STM32F4_PIN_ETH_PC2 \
	STM32F4_PIN_ETH(2, 2, STM32F4_GPIO_AF_ETH)
#define STM32F4_PIN_ETH_PC3 \
	STM32F4_PIN_ETH(2, 3, STM32F4_GPIO_AF_ETH)
#define STM32F4_PIN_ETH_PC4 \
	STM32F4_PIN_ETH(2, 4, STM32F4_GPIO_AF_ETH)
#define STM32F4_PIN_ETH_PC5 \
	STM32F4_PIN_ETH(2, 5, STM32F4_GPIO_AF_ETH)

/*
 * PGx
 */
#define STM32F4_PIN_ETH_PG13 \
	STM32F4_PIN_ETH(6, 13, STM32F4_GPIO_AF_ETH)
#define STM32F4_PIN_ETH_PG14 \
	STM32F4_PIN_ETH(6, 14, STM32F4_GPIO_AF_ETH)

/*
 * PHx
 */
#define STM32F4_PIN_ETH_PH6 \
	STM32F4_PIN_ETH(7, 6, STM32F4_GPIO_AF_ETH)
#define STM32F4_PIN_ETH_PH7 \
	STM32F4_PIN_ETH(7, 7, STM32F4_GPIO_AF_ETH)


#define STM32F4_PIN_ETH_GPIO \
	STM32F4_PIN_ETH_MCO_PA8, \
	STM32F4_PIN_ETH_PA0,  \
	STM32F4_PIN_ETH_PA1,  \
	STM32F4_PIN_ETH_PA2,  \
	STM32F4_PIN_ETH_PA3,  \
	STM32F4_PIN_ETH_PA7,  \
	STM32F4_PIN_ETH_PB8,  \
	STM32F4_PIN_ETH_PB10, \
	STM32F4_PIN_ETH_PB11, \
	STM32F4_PIN_ETH_PC1,  \
	STM32F4_PIN_ETH_PC2,  \
	STM32F4_PIN_ETH_PC3,  \
	STM32F4_PIN_ETH_PC4,  \
	STM32F4_PIN_ETH_PC5,  \
	STM32F4_PIN_ETH_PG13, \
	STM32F4_PIN_ETH_PG14, \
	STM32F4_PIN_ETH_PH6,  \
	STM32F4_PIN_ETH_PH7


#if 0
typedef enum {
	STM32F4_RCC_CFGR_MCO1,
	STM32F4_RCC_CFGR_MCO2
}stm32f4_rcc_mco;

typedef enum {
	STM32F4_SYSCFG_MII_ENABLE,
	STM32F4_SYSCFG_RMII_ENABLE
}stm32f4_mii_mode;

static inline void stm32f4_rcc_config_mco(stm32f4_rcc_mco mco, uint32_t div)
{
	uint32_t treg = STM32F4_RCC->cfgr;

	if (mco == STM32F4_RCC_CFGR_MCO1) {
		STM32F4_RCC_CFGR_MCO1_SET(treg, 2);
		STM32F4_RCC_CFGR_MCO1_PRE_SET(treg, div);
		STM32F4_RCC->cfgr = treg;
	}
}

static inline void stm32f4_syscfg_mii_sel(stm32f4_mii_mode mode)
{
	uint32_t treg = STM32F4_SYSCFG->pmc;

	if (mode == STM32F4_SYSCFG_MII_ENABLE) 
		STM32F4_SYSCFG->pmc = treg & ~STM32F4_SYSCFG_RMII_SEL;
	else if (mode == STM32F4_SYSCFG_RMII_ENABLE) 
		STM32F4_SYSCFG->pmc = treg | STM32F4_SYSCFG_RMII_SEL;
}
#endif

#endif