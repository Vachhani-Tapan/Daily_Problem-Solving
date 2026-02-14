function sol(s , spaces) {
    let j = 0;
    let res = '';
    for (let i = 0; i < s.length; i++) {
        if(i == spaces[j]){
            res += ' ';
            j++;
            i--
        }
        else{
            res += s[i];
        }
    }
    return res;
}
console.log(sol("LeetcodeHelpsMeLearn", [8,13,15]))