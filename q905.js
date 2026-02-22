function sol(nums) {
    let res = [];
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] % 2 == 0) {
            res.push(nums[i]);
        }
    }
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] % 2 != 0) {
            res.push(nums[i]);
        }
    }
    return res;
}
console.log(sol([3,1,2,4]));