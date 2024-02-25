/*
 * TIMER0_private.h
 *
 * Created: 2/25/2024 
 *  Author: AMR HASSAN
 */ 


#ifndef TIMER0_PRIVATE_H_
#define TIMER0_PRIVATE_H_

#define TCCR0_REG  *((volatile u8*)0X53)
#define TCNT0_REG  *((volatile u8*)0X52)
#define OCR0_REG   *((volatile u8*)0X5C)
#define TIMSK_REG  *((volatile u8*)0X59)
#define TIFR_REG   *((volatile u8*)0X58)




#endif /* TIMER0_PRIVATE_H_ */