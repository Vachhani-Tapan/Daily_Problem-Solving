function sol(celsius) {
    let res = [celsius+273.15 , celsius * 1.80 + 32.00]
    return res;
}
console.log(sol(36.5))