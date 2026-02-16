function sol(nums) {
    let obj = {};
    for(let i = 0 ; i < nums.length ; i++){
        if(obj[nums[i]] == undefined){
            obj[nums[i]] = 1;
        }
        else{
            obj[nums[i]]++
        }
    }
    let res = [];
    for(let i in obj){
        if(obj[i] == 2){
            res.push(Number(i));
        }
    }
    return res;
}
console.log(sol([4,3,2,7,8,2,3,1]))