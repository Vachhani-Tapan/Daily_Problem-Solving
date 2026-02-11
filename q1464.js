function sol(nums) {
    let prod = 0;
    let i1 = 0;
    let i2 = 0;
    for (let i = 0; i < nums.length; i++) {
        for (let j = i + 1; j < nums.length; j++) {
            if(nums[i] * nums[j] > prod){
                prod = nums[i] * nums[j];
                i1 = i;
                i2 = j;
            }
        }
    }
    return (nums[i1]-1) * (nums[i2]-1);
}
console.log(sol([3,4,5,2]));