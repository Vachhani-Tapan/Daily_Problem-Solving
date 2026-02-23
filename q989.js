function sol(num, k) {
    let r_num = '';
    for (let i = 0; i < num.length; i++) {
        r_num += num[i];
    }
    let sum = BigInt(r_num) + BigInt(k);
    let ans = String(sum).split('').map(Number);
    return ans;
}
console.log(sol([1, 2, 0, 0], 34));