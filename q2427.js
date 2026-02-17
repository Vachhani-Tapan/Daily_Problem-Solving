function sol(a,b) {
    let min = Math.min(a,b);
    let count = 0;
    for (let i = 0; i <= min; i++) {
        if(a % i == 0 && b % i == 0){
            count++
        }
    }
    return count;
}
console.log(sol(25,30));