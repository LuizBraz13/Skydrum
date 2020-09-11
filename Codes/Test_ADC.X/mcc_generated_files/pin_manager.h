/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.3
        Device            :  PIC18F27K42
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.20 and above
        MPLAB 	          :  MPLAB X 5.40	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set analog0 aliases
#define analog0_TRIS                 TRISAbits.TRISA0
#define analog0_LAT                  LATAbits.LATA0
#define analog0_PORT                 PORTAbits.RA0
#define analog0_WPU                  WPUAbits.WPUA0
#define analog0_OD                   ODCONAbits.ODCA0
#define analog0_ANS                  ANSELAbits.ANSELA0
#define analog0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define analog0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define analog0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define analog0_GetValue()           PORTAbits.RA0
#define analog0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define analog0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define analog0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define analog0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define analog0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define analog0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define analog0_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define analog0_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set analog1 aliases
#define analog1_TRIS                 TRISAbits.TRISA1
#define analog1_LAT                  LATAbits.LATA1
#define analog1_PORT                 PORTAbits.RA1
#define analog1_WPU                  WPUAbits.WPUA1
#define analog1_OD                   ODCONAbits.ODCA1
#define analog1_ANS                  ANSELAbits.ANSELA1
#define analog1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define analog1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define analog1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define analog1_GetValue()           PORTAbits.RA1
#define analog1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define analog1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define analog1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define analog1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define analog1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define analog1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define analog1_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define analog1_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set led0 aliases
#define led0_TRIS                 TRISCbits.TRISC0
#define led0_LAT                  LATCbits.LATC0
#define led0_PORT                 PORTCbits.RC0
#define led0_WPU                  WPUCbits.WPUC0
#define led0_OD                   ODCONCbits.ODCC0
#define led0_ANS                  ANSELCbits.ANSELC0
#define led0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define led0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define led0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define led0_GetValue()           PORTCbits.RC0
#define led0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define led0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define led0_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define led0_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define led0_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define led0_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define led0_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define led0_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set led1 aliases
#define led1_TRIS                 TRISCbits.TRISC1
#define led1_LAT                  LATCbits.LATC1
#define led1_PORT                 PORTCbits.RC1
#define led1_WPU                  WPUCbits.WPUC1
#define led1_OD                   ODCONCbits.ODCC1
#define led1_ANS                  ANSELCbits.ANSELC1
#define led1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define led1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define led1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define led1_GetValue()           PORTCbits.RC1
#define led1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define led1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define led1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define led1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define led1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define led1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define led1_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define led1_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/