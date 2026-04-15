#include "pxt.h"

namespace I2CEx {

    void _setFrequency(int freq) {

        #if MICROBIT_CODAL
            uBit.i2c.setFrequency(freq);
        #else
            uBit.i2c.frequency(freq);
        #endif
    }
}
