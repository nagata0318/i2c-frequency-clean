namespace I2CEx {

    // ブロック確認用
    //% block="I2C周波数 %freq に設定"
    export function setFrequency(freq: number): void {
        _setFrequency(freq)
    }

    // shim（ここ重要：実装禁止）
    //% shim=I2CEx::_setFrequency
    function _setFrequency(freq: number): void;
}
