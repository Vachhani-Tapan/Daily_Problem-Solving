function sol(n) {
    let rev = 0;
    let i = n;
    while (i > 0) {
        rev = (rev * 10) + i % 10;
        i = Math.floor(i / 10);
    }
    return Math.abs(n - rev);
}
console.log(sol(25));