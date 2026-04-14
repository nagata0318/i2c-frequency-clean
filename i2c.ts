//% weight=100 color=#0fbc11 icon="\uf1eb"
namespace I2CEx {

    //% block="I2C周波数を %hz Hz に設定"
    export function setFrequency(hz: number): void {
        _setFrequency(hz)
    }

    //% shim=I2CEx::_setFrequency
    function _setFrequency(hz: number): void {
        return
    }
}
