/* 
 * File:   main.c
 * Author: StjerneIdioten
 *
 * Created on 20. februar 2015, 23:26
 */


// PIC16F1455 Configuration Bit Settings

// 'C' source line config statements
#define _XTAL_FREQ 8000000

#define RS RC3
#define EN RC2
#define D4 RC1
#define D5 RC0
#define D6 RA6
#define D7 RA7

// PIC16F886 Configuration Bit Settings

// 'C' source line config statements

#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include "lcd.h"
// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

// CONFIG1
#pragma config FOSC = INTRC_NOCLKOUT// Oscillator Selection bits (INTOSCIO oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RE3/MCLR pin function select bit (RE3/MCLR pin function is MCLR)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = ON       // Brown Out Reset Selection bits (BOR enabled)
#pragma config IESO = OFF        // Internal External Switchover bit (Internal/External Switchover mode is enabled)
#pragma config FCMEN = OFF       // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is enabled)
#pragma config LVP = OFF         // Low Voltage Programming Enable bit (RB3/PGM pin has PGM function, low voltage programming enabled)

// CONFIG2
#pragma config BOR4V = BOR40V   // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)
#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)

/*
 * 
 */

int main(int argc, char** argv) {
    OSCCON = 0b01110111;
    TRISC = 0b00000000;
    TRISA = 0b00000000;

    Lcd_Init();
    Lcd_Clear();
    Lcd_Set_Cursor(1,4);
    Lcd_Write_String("StjerneIdioten");

    while(1) {
        
    }
    return (EXIT_SUCCESS);
}

