/**
  ******************************************************************************
  * @file    main.c
  * @author  Bouchagra Mohamed
  * @brief   Gpio driver
  * @version V1.0.0
  * @date    17-11-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"
#include "gpio.h"
/*----------------Private Functions Prototype---------------------------------*/


/* Private define ------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/


int main()
{
GPIO_Clock_Enable(GPIOD);
GPIO_Config(GPIOD,PIN12,OUTPUT,OUTPUT_PUSH_PULL, LOW_SPEED);
GPIO_Write_Pin(GPIOD,PIN12,SET);
GPIO_Write_Pin(GPIOD,PIN12,RESET);
GPIO_Config(GPIOD,PIN10,INPUT,OUTPUT_PUSH_PULL,LOW_SPEED);

uint8_t ReadPinTest = GPIO_Read_Pin(GPIOD,PIN10);
  while(1)
  {
  
  }
}

/**************************************END OF FILE**************************************/
