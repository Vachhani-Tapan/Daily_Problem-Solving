function sol(nums) {
    let max = Math.max(...nums);
    let min = Math.min(...nums);
    let j = 0;
    let res = [];
    nums = nums.sort((a,b) => a-b);
    for (let i = min; i < max; i++) {
        if(nums[j] == i){
            j++;
        }
        else{
            res.push(i)
        }
    }
    return res;
}
console.log(sol([1,5]));