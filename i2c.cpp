#include "pxt.h"

namespace I2CEx {

    // externで公開（これが無いとリンクされない）
    void _setFrequency(int freq) {

        // micro:bit v1 / v2 両対応
        #if MICROBIT_CODAL
            uBit.i2c.setFrequency(freq);
        #else
            uBit.i2c.frequency(freq);
        #endif
    }
}
