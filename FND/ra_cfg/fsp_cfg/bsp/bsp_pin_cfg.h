/* generated configuration header file - do not edit */
#ifndef BSP_PIN_CFG_H_
#define BSP_PIN_CFG_H_
#if __has_include("r_ioport.h")
#include "r_ioport.h"
#elif __has_include("r_ioport_b.h")
#include "r_ioport_b.h"
#endif

/* Common macro for FSP header files. There is also a corresponding FSP_FOOTER macro at the end of this file. */
FSP_HEADER

#define OE (BSP_IO_PORT_00_PIN_15)
#define SRCLK (BSP_IO_PORT_01_PIN_02)
#define RCLK (BSP_IO_PORT_01_PIN_03)
#define SER_SDI (BSP_IO_PORT_01_PIN_04)
extern const ioport_cfg_t g_bsp_pin_cfg; /* R7FA2E1A72DFM.pincfg */

void BSP_PinConfigSecurityInit();

/* Common macro for FSP header files. There is also a corresponding FSP_HEADER macro at the top of this file. */
FSP_FOOTER
#endif /* BSP_PIN_CFG_H_ */
