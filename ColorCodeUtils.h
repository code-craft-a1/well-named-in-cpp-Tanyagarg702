#ifndef COLOR_CODE_UTILS_H
#define COLOR_CODE_UTILS_H

#include "ColorPair.h"

namespace TelCoColorCoder {
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    void PrintColorReferenceManual();
}

#endif // COLOR_CODE_UTILS_H
