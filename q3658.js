function sol(n) {
    let OddSum = n * n;
    let evenSum = n*(n + 1);
    let smallest = Math.min(OddSum, evenSum);
    for (let i = smallest; i >= 1; i--) {
        if ((OddSum % i == 0) && (evenSum % i == 0)) {
            return i;
        }
    }
}
console.log(sol(5))