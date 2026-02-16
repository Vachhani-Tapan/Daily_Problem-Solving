function sol(s) {
    while (s.length > 2) {
        let res = '';
        for (let i = 1; i < s.length; i++) {
            res += (Number(s[i]) + Number(s[i - 1])) % 10;
        }
        s = res;
    }
    return s[0] == s[1];    
}
console.log(sol('34789'))