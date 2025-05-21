#include "ColorCodeUtils.h"
#include <iostream>
#include <iomanip>

namespace TelCoColorCoder {

    void PrintColorReferenceManual() {
        std::cout << std::left << std::setw(10) << "Pair#"
                  << std::setw(15) << "Major Color"
                  << std::setw(15) << "Minor Color" << "\n";
        std::cout << std::string(40, '-') << "\n";

        int pairNumber = 1;
        for (int i = 0; i < numberOfMajorColors; i++) {
            for (int j = 0; j < numberOfMinorColors; j++) {
                std::cout << std::left << std::setw(10) << pairNumber
                          << std::setw(15) << MajorColorNames[i]
                          << std::setw(15) << MinorColorNames[j] << "\n";
                pairNumber++;
            }
        }
    }

}
