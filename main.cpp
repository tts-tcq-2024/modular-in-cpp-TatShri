#include <iostream>
#include <assert.h>
#include "colorcoder.h"


int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    //If reference manual needs to be printed
    /*
    std::string manual = TelCoColorCoder::GetReferenceManual();
    std::cout << manual;
    */
    return 0;
}
