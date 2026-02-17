function sol(nums) {
    let min = Math.min(...nums);
    let max = Math.max(...nums);
    for (let i = min; i >= 1; i--) {
        if((min % i == 0) && (max % i == 0)){
            return i;
        }
    }
}
console.log(sol([3,3]))