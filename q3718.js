function sol(nums , k) {
    for (let i = k; ; i += k) {
        if(!nums.includes(i)){
            return i;
        }
    }
}
console.log(sol([8,2,3,4,6], 2))