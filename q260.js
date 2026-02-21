function sol(nums) {
    if(nums.length == 2 && nums[0] != nums[1]) return nums;
    let obj = {};
    let res = [];
    for (let i = 0; i < nums.length; i++) {
        if (obj[nums[i]] == undefined) {
            obj[nums[i]] = 1;
        }
        else{
            obj[nums[i]]++
        }
    }
    for (const char in obj) {
        if(obj[char] == 1){
            res.push(Number(char));
        }
    }
    return res;
}
console.log(sol([1,2,1,3,2,5]));