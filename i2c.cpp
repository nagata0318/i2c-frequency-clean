#include "pxt.h"

namespace I2CEx {

    //% 
    void _setFrequency(int freq) {
        // micro:bit runtimeのI2Cインスタンス取得
        uBit.i2c.setFrequency(freq);
    }
}
