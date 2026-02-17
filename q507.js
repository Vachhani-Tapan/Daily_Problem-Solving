function sol(num) {
    let sum = 0;
    for (let i = 0; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}
console.log(sol(27));