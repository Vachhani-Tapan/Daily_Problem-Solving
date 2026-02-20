function sol(nums) {
    let sum = 0;
    let j = nums.length - 1;
    let i = 0;
    while (i < j) {
        sum += Number(String(nums[i]) + String(nums[j]))
        j--
        i++
    }
    if (i === j) {
        sum += nums[i];
    }
    return sum;
}
console.log(sol([5, 14, 13, 8, 12]))