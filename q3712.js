function sol(nums,k) {
    let obj = {};
    for (let i = 0; i < nums.length; i++) {
        if(obj[nums[i]] == undefined){
            obj[nums[i]] = 1;
        }
        else{
            obj[nums[i]]++;
        }
    }
    let sum = 0;
    for (let j in obj) {
        if(obj[j] % k == 0){
            sum += Number(j) * obj[j];
        }
    }
    return sum;
}
console.log(sol([1,2,3,4,5], 2))