#include "ColorCodeUtils.h"
#include <iostream>

void runAllTests();

int main() {
    std::cout << "Starting TelCo Color Code Tests...\n";
    runAllTests();

    std::cout << "\nGenerating Color Code Reference Manual:\n";
    TelCoColorCoder::PrintColorReferenceManual();

    return 0;
}
