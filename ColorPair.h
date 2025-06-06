#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

#include <string>

namespace TelCoColorCoder {

    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];
    extern const int numberOfMajorColors;
    extern const int numberOfMinorColors;

    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor);
            MajorColor getMajor() const;
            MinorColor getMinor() const;
            std::string ToString() const;
    };

}

#endif // COLOR_PAIR_H
