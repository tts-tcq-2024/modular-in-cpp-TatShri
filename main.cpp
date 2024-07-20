#include <iostream>
#include <assert.h>
#include "colorcoder_test.h"


int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    // Additional test cases
    // Boundary test - minimum pair number
    testNumberToPair(1, TelCoColorCoder::WHITE, TelCoColorCoder::BLUE);
    testPairToNumber(TelCoColorCoder::WHITE, TelCoColorCoder::BLUE, 1);

    // Boundary test - maximum pair number
    int maxPairNumber = TelCoColorCoder::numberOfMajorColors * TelCoColorCoder::numberOfMinorColors;
    testNumberToPair(maxPairNumber, TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, maxPairNumber);

    // Random pair number in the middle
    int middlePairNumber = (TelCoColorCoder::numberOfMajorColors * TelCoColorCoder::numberOfMinorColors) / 2;
    testNumberToPair(middlePairNumber, TelCoColorCoder::BLACK, TelCoColorCoder::GREEN); // Adjust as needed
    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::GREEN, middlePairNumber);

    //If reference manual needs to be printed
    /*
    std::string manual = TelCoColorCoder::GetReferenceManual();
    std::cout << manual;
    */
    return 0;
}
