#ifndef __B_LUX_V20_H
#define __B_LUX_V20_H

#include "sensor.h"
/*************************************************************/

#define BHAddWrite     0x46      //????+??????
#define BHAddRead      0x47      //????+??????
#define BHPowDown      0x00      //????
#define BHPowOn        0x01      //??????????
#define BHReset        0x07      //?????????PowerOn?????
#define BHModeH1       0x10      //???? ??1lx ????120ms
#define BHModeH2       0x11      //??????2 ??0.5lx ????120ms
#define BHModeL        0x13      //???? ??4lx ????16ms
#define BHSigModeH     0x20      //?????? ?? ??????? PowerDown??
#define BHSigModeH2    0x21      //????
#define BHSigModeL     0x23      // ???
/*************************************************************/
void         B_Lux_init(void);
void         B_Lux_configuration(int time);
uint16_t     B_Lux_read(void);
SensorState  B_Lux_update(void);

#endif
