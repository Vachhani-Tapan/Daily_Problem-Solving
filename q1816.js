function sol(s,k) {
    let res = [];
    s = s.split(' ');
    for (let i = 0; i < k; i++) {
        res.push(s[i]);
    }
    return res.join(' ');
}
console.log(sol("What is the solution to this problem", 4))