/*
 * File:   newmain.c
 * Author: User 1
 *
 * Created on January 10, 2022, 6:37 PM
 */


// PIC16F628A Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = EXTRCCLK  // Oscillator Selection bits (RC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, Resistor and Capacitor on RA7/OSC1/CLKIN)
#pragma config WDTE = ON        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RA5/MCLR/VPP Pin Function Select bit (RA5/MCLR/VPP pin function is MCLR)
#pragma config BOREN = ON       // Brown-out Detect Enable bit (BOD enabled)
#pragma config LVP = ON         // Low-Voltage Programming Enable bit (RB4/PGM pin has PGM function, low-voltage programming enabled)
#pragma config CPD = OFF        // Data EE Memory Code Protection bit (Data memory code protection off)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)
#define _XTAL_FREQ 4000000
// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>

void dot()
{
 PORTAbits.RA1=1;
 __delay_ms(50);
PORTAbits.RA1=0;
return ;
}


void dash()
{
 PORTAbits.RA1=1;
 __delay_ms(200);
PORTAbits.RA1=0;
return ;
}




void main(void) {
   
     TRISB = 0x00;
    PORTB = 0x00;
    TRISA &= ~0x03;
    PORTA &= ~0x03;
    
    while(1)
    {
       /**/
        dot();
        dash();
    
    }
    
    
    return;
}
