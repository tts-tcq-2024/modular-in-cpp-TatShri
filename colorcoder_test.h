// colorcoder_test.h
#ifndef COLORCODER_TEST_H
#define COLORCODER_TEST_H

#include "colorcoder.h" 

void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor);

void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber);

#endif // COLORCODER_TEST_H
