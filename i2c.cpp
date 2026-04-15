#include "pxt.h"

namespace I2CEx {

    void _setFrequency(int freq) {

        // デバッグ用：LEDで確認（C++が動いている証拠）
        uBit.display.scroll(freq);

        // 実際のI2C設定（安全版）
        uBit.i2c.setFrequency(freq);
    }

}
