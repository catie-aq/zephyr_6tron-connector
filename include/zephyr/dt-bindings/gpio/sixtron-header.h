/*
 * Copyright (c) 2024 CATIE
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef INCLUDE_ZEPHYR_DT_BINDINGS_GPIO_SIXTRON_HEADER_H_
#define INCLUDE_ZEPHYR_DT_BINDINGS_GPIO_SIXTRON_HEADER_H_

/**
 * @name 6TRON pin identifiers
 * @{
 */
#define CAN_RX   79
#define CAN_TX   77
#define I2C_SCL  75
#define I2C_SDA  73
#define UART_RX  71
#define UART_TX  69
#define SPI_MOSI 67
#define SPI_MISO 65
#define SPI_SCK  63
#define SPI_SS   61
#define PWM1     59
#define PWM2     57
#define PWM3     55
#define ICAP     53
#define WKUP     51
#define ADC1     39
#define ADC2     37
#define ADC3     35
#define ADC4     33
#define DAC      31
#define DIO1     49
#define DIO2     47
#define DIO3     45
#define DIO4     43
#define DIO5     17
#define DIO6     13
#define DIO7     11
#define DIO8     9
#define DIO9     12
#define DIO10    14
#define DIO11    16
#define DIO12    18
#define DIO13    28
#define DIO14    30
#define DIO15    32
#define DIO16    34
#define DIO17    36
#define DIO18    38
#define DIO19    46
#define DIO20    48
#define DIO21    50
#define DIO22    52
#define DIO23    54
#define DIO24    56
#define DIO25    58
#define DIO26    60
#define DIO27    62
#define DIO28    64
#define DIO29    66
#define DIO30    68
#define DIO31    70
#define DIO32    72
#define DIO33    74
#define DIO34    76
#define DIO35    78
#define DIO36    80

// Alternate functions

#define DIO13_PWM 28
#define DIO7_PWM  11
#define DIO8_PWM  9

#define DIO12_UART_RX 18
#define DIO18_UART_TX 38

#define DIO10_DFSDM1_DATIN  14
#define DIO11_DFSDM1_CLKOUT 16

#define DIO12_DCMI_VSYNC 18
#define DIO13_DCMI_D0    28
#define DIO14_DCMI_D1    30
#define DIO15_DCMI_D2    32
#define DIO16_DCMI_D3    34
#define DIO17_DCMI_D4    36
#define DIO18_DCMI_D5    38
#define DIO19_DCMI_D6    46
#define DIO20_DCMI_D7    48
#define DIO7_DCMI_PIXCLK 11
#define DIO8_DCMI_HSYNC  9

#define DIO25_OSPI_IO0  58
#define DIO26_OSPI_IO1  60
#define DIO27_OSPI_IO2  62
#define DIO28_OSPI_IO3  64
#define DIO29_OSPI_IO4  66
#define DIO30_OSPI_IO5  68
#define DIO31_OSPI_IO6  70
#define DIO32_OSPI_IO7  72
#define DIO33_OSPI_DQS  74
#define DIO34_OSPI_NCS  76
#define DIO35_OSPI_CK   78
#define DIO36_OSPI_NCLK 80

#define DIO5_RCC_MCO 17

#define DIO7_ADC 11

/** @} */

#endif /* INCLUDE_ZEPHYR_DT_BINDINGS_GPIO_SIXTRON_HEADER_H_ */
