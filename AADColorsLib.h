// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef _AADColorsLib_H_
#define _AADColorsLib_H_
#include "Arduino.h"
//add your includes for the project AADColorsLib here


#define RGB(r,g,b)   (uint16_t)((r >> 3) |((g >> 2) << 5) |((b >> 3) << 11))

#define COL_BLACK   RGB(0,0,0)
#define COL_WHITE   RGB(255,255,255)
#define COL_RED      RGB(255,0,0)
#define COL_BLUE   RGB(0,0,255)
#define COL_GREEN   RGB(0,255,0)

#define COL_YELLOW   RGB(255,255,0)
#define COL_MAGENTA   RGB(255,0,255)
#define COL_AQUA   RGB(0,255,255)

#define COL_PURPLE   RGB(160,32,240)
#define COL_REDPINK RGB(255,50,50)
#define COL_ORANGE  RGB(255,165,0)




//Do not add code below this line
#endif /* _AADColorsLib_H_ */
