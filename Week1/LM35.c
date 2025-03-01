/*
 * LM35.c
 *
 * Created: 3/1/2025 12:58:10 AM
 *  Author: Abdelrhman Marzoq
 */ 

#include "LM35.h"


void LM35_init(LM35_t *LM35)
{
	ADC_Pin ADCx;
	ADCx.CHx = LM35->CHx;
	ADCx.Factor = Clock_Prescaller_By_2;
	ADCx.IRQ_Mode = IRQ_Disable;
	ADCx.Vref_Mode = Vref_5;
	ADC_init(&ADCx);	
}

int LM35_Get_Temp(LM35_t * LM35)
{
	ADC_Pin ADCx;
	ADCx.CHx = LM35->CHx;
	ADCx.Factor = Clock_Prescaller_By_2;
	ADCx.IRQ_Mode = IRQ_Disable;
	ADCx.Vref_Mode = Vref_5;
	
	
	int Temp;
	Temp = ADC_Read(&ADCx);
	
	Temp = (5000/1024) * Temp;
	Temp /= 10;
	return Temp;
}

