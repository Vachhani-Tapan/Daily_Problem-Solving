function sol(nums) {
    let obj = {};
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] % 2 == 0) {
            if (obj[nums[i]] == undefined) {
                obj[nums[i]] = 1;
            }
            else {
                obj[nums[i]]++
            }
        }
    }
    let maxFreq = Math.max(...Object.values(obj));
    for (const key in obj) {
        if (obj[key] == maxFreq) {
            return Number(key);
        }
    }
    return -1;
}
console.log(sol([29,47,21,41,13,37,25,7]))