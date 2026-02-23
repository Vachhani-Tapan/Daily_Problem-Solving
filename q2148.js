function sol(nums) {
    let count = 0;
    let max = Math.max(...nums);
    let min = Math.min(...nums);
    for (let i = 0; i < nums.length; i++) {
        if(nums[i] > min && nums[i] < max){
            count++;
        }
    }
    return count;
}
console.log(sol([-3,3,3,90]))