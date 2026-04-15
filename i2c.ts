//% weight=100 color=#0fbc11 icon="\uf1eb"
namespace I2CEx {

    /**
     * I2C周波数設定
     */
    //% block="I2C周波数を %freq Hz に設定"
    export function setFrequency(freq: number): void {
        _setFrequency(freq)
    }

    // ★ここが最重要ポイント
    //% shim=I2CEx::_setFrequency
    function _setFrequency(freq: number): void; // ← セミコロンのみ
}
