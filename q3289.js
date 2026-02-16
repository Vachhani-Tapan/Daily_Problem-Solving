function sol(nums) {
    let obj = {}
    for (let i = 0; i < nums.length; i++) {
        if(obj[nums[i]] == undefined){
            obj[nums[i]] = 1;
        }
        else{
            obj[nums[i]]++;
        }
    }
    let res = [];
    for (const i in obj) {
        if(res.lenght > 2) break;
        if(obj[i] == 2 ){
            res.push(Number(i));
        }
    }
    return res;
}
console.log(sol([0,3,2,1,3,2]));