function sol(s) {
    s = s.split(' ');
    let res = [];
    for (let i = 0; i < s.length; i++) {
        if (!isNaN(s[i])) {
            res.push(Number(s[i]));
        }
    }
    for (let i = 1; i < res.length; i++) {
        if (res[i] <= res[i - 1]) {
            return false;
        }
    }
    return true;
}
console.log(sol("sweet 90 tell 89"))