function sol(nums) {
    let n = nums.length;
    nums = nums.sort((a, b) => a - b);
    let j = 0;
    for (let i = 0; i <= n; i++) {
        if (nums[j] == i) {
            j++;
        }
        else {
            return i;
        }
    }
}
console.log(sol([1,3,4]));