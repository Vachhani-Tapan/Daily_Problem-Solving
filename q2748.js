function sol(nums) {
    let count = 0;

    function gcd(n1,n2) {
        let min = Math.min(n1,n2);
        for (let i = min; i >= 1; i--) {
            if(n1 % i == 0 && n2 % i == 0){
                return i;
            }
        }
    }

    for (let i = 0; i < nums.length-1; i++) {
        for (let j = i+1; j < nums.length; j++) {
            let m = Number(String(nums[i])[0]);
            let n = nums[j] % 10;
            if(gcd(m , n) == 1){
                count++;
            }
        }
    }
    return count;
}
console.log(sol([2,5,1,4]))