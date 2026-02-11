function sol(nums) {
    nums = nums.sort((a,b)=>a-b);
    for (let i = 0; i < nums.length; i= i +2) {
        let temp=nums[i]
        nums[i]=nums[i+1]
        nums[i+1]= temp;
    }
    return nums;
}
console.log(sol([2,5]));