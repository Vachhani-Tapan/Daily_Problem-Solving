function sol(nums) {
    let temp = []
    let count = nums.length;
    while (count > 1) {
        for (let i = 0; i < nums.length - 1; i++) {
            temp.push((nums[i] + nums[i + 1]) % 10);
        }
        count--;
        nums = temp;
        temp = [];
    }
    return nums[0];
}
console.log(sol([1, 2, 3, 4, 5]));