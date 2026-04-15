namespace I2CEx {

    //% block="I2C周波数を %freq Hz に設定"
    export function setFrequency(freq: number): void {
        _setFrequency(freq)
    }

    //% shim=I2CEx::_setFrequency
    function _setFrequency(freq: number): void;
}
