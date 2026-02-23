function sol(nums) {
    let obj = {};
    let count = 0;
    for (let i = 0; i < nums.length; i++) {
        if(obj[nums[i]] == undefined){
            obj[nums[i]] = 1;
        }
        else{
            obj[nums[i]]++;
        }
    }
    for (const char in obj) {
        if(obj[char] == 1) return -1;
        count += Math.ceil(obj[char]/3);
    }
    return count;
}
console.log(sol([2,3,3,2,2,4,2,3,4]))