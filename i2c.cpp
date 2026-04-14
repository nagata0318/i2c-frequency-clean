#include "pxt.h"
#include "MicroBit.h"

namespace I2CEx {

    void _setFrequency(int hz) {

        // 周波数制限（安全側）
        if (hz <= 100000) {
            hz = 100000;
        } else if (hz <= 400000) {
            hz = 400000;
        } else {
            hz = 400000;
        }

        // CODAL I2Cへ直接アクセス
        if (uBit.i2c.setFrequency) {
            uBit.i2c.setFrequency(hz);
        }
    }
}
