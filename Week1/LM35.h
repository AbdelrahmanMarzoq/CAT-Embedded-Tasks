/*
 * LM35.h
 *
 * Created: 3/1/2025 12:58:19 AM
 *  Author: Abdelrhman Marzoq
 */ 


#ifndef LM35_H_
#define LM35_H_

#include "ADC.h"


typedef struct  
{
	CH_t CHx;
}LM35_t;

void LM35_init(LM35_t *LM35);
int LM35_Get_Temp(LM35_t * LM35);




#endif /* LM35_H_ */