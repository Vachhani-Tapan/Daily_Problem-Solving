function sol(nums, target) {
    nums = nums.sort((a, b) => a - b);
    let res = [];
    for (let i = 0; i < nums.length; i++) {
        if(nums[i] == target){
            res.push(i);
        }
    }
    return res;
}
console.log(sol([1,2,5,2,3],2))