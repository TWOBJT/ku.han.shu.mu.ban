#include "stm32f10x.h"
#include "LED.h"
void delay(u32 i)
{
while(i--);
}
int main()
{
	LED_Init();
	
	while(1)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_5);
		GPIO_SetBits(GPIOE,GPIO_Pin_5);
		delay(0xfffff);
		GPIO_ResetBits(GPIOE,GPIO_Pin_5);
		GPIO_SetBits(GPIOB,GPIO_Pin_5);
		delay(0xfffff);
	}
}
