function sol(nums) {
    let count = 0;
    for (let i = 0; i < nums.length; i++) {
        if ((nums[i] - 1) % 3 == 0) {
            count++;
        }
        if ((nums[i] + 1) % 3 == 0) {
            count++;
        }
    }
    return count;
}
console.log(sol([3,6,9]));