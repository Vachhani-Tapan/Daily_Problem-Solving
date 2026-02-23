function sol(s) {
    let obj = {};
    for (let i = 0; i < s.length-1; i++) {
        if(obj[s[i]] == undefined){
            obj[s[i]] = 1;
        }
        else{
            obj[s[i]]++;
        }
        if(obj[s[i]] == 2){
            return s[i];
        }
    }
}
console.log(sol('abccbaacz'))