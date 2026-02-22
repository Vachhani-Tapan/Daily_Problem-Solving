function sol(nums , index) {
    let res = [];
    for (let i = 0; i < nums.length; i++) {
        res.splice(index[i] , 0 , nums[i]);
    }
    return res;
}
console.log(sol([0,1,2,3,4], [0,1,2,2,1]))