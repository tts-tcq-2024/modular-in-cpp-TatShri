#include "colorcoder.h"
#include <sstream>
//Reference manual for wiring personnel
namespace TelCoColorCoder {
    std::string GetReferenceManual() {
        std::ostringstream manual;
        for (int majorIndex = 0; majorIndex < numberOfMajorColors; ++majorIndex) {
            for (int minorIndex = 0; minorIndex < numberOfMinorColors; ++minorIndex) {
                ColorPair colorPair = ColorPair((MajorColor)majorIndex, (MinorColor)minorIndex);
                int pairNumber = GetPairNumberFromColor((MajorColor)majorIndex, (MinorColor)minorIndex);
                manual << pairNumber << ": " << colorPair.ToString() << "\n";
            }
        }
        return manual.str();
    }
}
