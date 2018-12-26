// A project of measurements of consumption with internal oscillator of 10 MHz
// by Danilo Pena

#include "DSP28x_Project.h"     // Device Headerfile and Examples Include Files

#include "f2802x_common/include/clk.h"
#include "f2802x_common/include/flash.h"
#include "f2802x_common/include/gpio.h"
#include "f2802x_common/include/pie.h"
#include "f2802x_common/include/pll.h"
#include "f2802x_common/include/wdog.h"
#include <math.h>

void Gpio_setup(void);

CLK_Handle myClk;
FLASH_Handle myFlash;
GPIO_Handle myGpio;
PIE_Handle myPie;

void main(void)
{
    CPU_Handle myCpu;
    PLL_Handle myPll;
    WDOG_Handle myWDog;
    volatile float i = 0;

    myClk = CLK_init((void *)CLK_BASE_ADDR, sizeof(CLK_Obj));
    myCpu = CPU_init((void *)NULL, sizeof(CPU_Obj));
    myFlash = FLASH_init((void *)FLASH_BASE_ADDR, sizeof(FLASH_Obj));
    myGpio = GPIO_init((void *)GPIO_BASE_ADDR, sizeof(GPIO_Obj));
    myPie = PIE_init((void *)PIE_BASE_ADDR, sizeof(PIE_Obj));
    myPll = PLL_init((void *)PLL_BASE_ADDR, sizeof(PLL_Obj));
    myWDog = WDOG_init((void *)WDOG_BASE_ADDR, sizeof(WDOG_Obj));

    WDOG_disable(myWDog);
    CLK_enableAdcClock(myClk);
    (*Device_cal)();
    CLK_disableAdcClock(myClk);

    CLK_setOscSrc(myClk, CLK_OscSrc_Internal);

    // x10 /2 -> 50Mhz = 10Mhz * 10 / 2
//    PLL_setup(myPll, PLL_Multiplier_10, PLL_DivideSelect_ClkIn_by_2); // 50Mhz
    PLL_setup(myPll, PLL_Multiplier_9, PLL_DivideSelect_ClkIn_by_4);

    PIE_disable(myPie);
    PIE_disableAllInts(myPie);
    CPU_disableGlobalInts(myCpu);
    CPU_clearIntFlags(myCpu);

#ifdef _FLASH
    memcpy(&RamfuncsRunStart, &RamfuncsLoadStart, (size_t)&RamfuncsLoadSize);
#endif

    //PIE_setDebugIntVectorTable(myPie);
    //PIE_enable(myPie);

    Gpio_setup();

    while(1){
//    	if(i==0)
//    		i=4;
//    	else
//    		i = pow(i,2) - 2;
    }

}

void Gpio_setup(void)
{
	GPIO_setPullUp(myGpio, GPIO_Number_0, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_1, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_2, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_3, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_4, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_5, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_6, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_7, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_12, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_16, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_17, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_18, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_19, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_28, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_29, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_32, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_33, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_34, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_35, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_36, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_37, GPIO_PullUp_Enable);
	GPIO_setPullUp(myGpio, GPIO_Number_38, GPIO_PullUp_Enable);

    EALLOW;
    ((GPIO_Obj *)myGpio)->GPAMUX1 = 0x00000000;
    ((GPIO_Obj *)myGpio)->GPAMUX2 = 0x00000000;
    ((GPIO_Obj *)myGpio)->GPBMUX1 = 0x00000000;
    ((GPIO_Obj *)myGpio)->GPADIR = 0xFFFFFFFF;
    ((GPIO_Obj *)myGpio)->GPBDIR = 0x000000FF;

    ((GPIO_Obj *)myGpio)->GPADAT = 0xFFFFFFFF;
    ((GPIO_Obj *)myGpio)->GPBDAT = 0x000000FF;
    EDIS;
}

