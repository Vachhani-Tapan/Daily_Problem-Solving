function sol(nums) {
        let max = -1;
        for (let i = 0; i < nums.length; i++) {
            for (let j = i + 1; j < nums.length; j++) {
                if (nums[i] < nums[j] && Math.abs(nums[j] - nums[i]) > max) {
                    max = Math.abs(nums[j] - nums[i]);
                }
            }
        }
        return max;
}
console.log(sol([9,4,3,2]))