function sol(nums) {
    let count = 0;
    for (let i = 1; i < nums.length; i++) {
        let left = 0;   let right = 0;
        for (let j = 0; j < i; j++) {
            left += nums[j];
        }
        for (let k = i; k < nums.length; k++) {
            right += nums[k];
        }
        if ((left - right) % 2 === 0) {
            count++
        }
    }
    return count;
}
console.log(sol([1,2,2]));