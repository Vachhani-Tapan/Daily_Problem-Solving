function sol(s1,s2) {
    let obj = {};
    s1 = s1.split(' ')
    s2 = s2.split(' ')
    for (let i = 0; i < s1.length; i++) {
        if(obj[s1[i]] == undefined){
            obj[s1[i]] = 1;
        }
        else{
            obj[s1[i]]++;
        }
    }
    for (let i = 0; i < s2.length; i++) {
        if(obj[s2[i]] == undefined){
            obj[s2[i]] = 1;
        }
        else{
            obj[s2[i]]++;
        }
    }
    let res = []
    for (const char in obj) {
        if(obj[char] == 1){
            res.push(char);
        }
    }
    return res;
}
console.log(sol("this apple is sweet", "this apple is sour"))