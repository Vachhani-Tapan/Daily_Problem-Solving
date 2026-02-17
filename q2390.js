function sol(s) {
    let res = [];
    s = s.split('');
    for (let i = 0; i < s.length; i++) {
        if (s[i] == '*') {
            res.pop();
        }
        else{
            res.push(s[i]);
        }
    }
    return res.join('');
}
console.log(sol('leet**cod*e'))