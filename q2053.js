function sol(arr , k) {
    let obj = {};
    for (let i = 0; i < arr.length; i++) {
        if(obj[arr[i]] == undefined){
            obj[arr[i]] = 1;
        }
        else{
            obj[arr[i]]++;
        }
    }
    let res = [];
    for (const k in obj) {
        if(obj[k] == 1){
            res.push(k);
        }
    }
    if(res.length < k) return '';
    return res[k-1];
}
console.log(sol(["a","b","a"], 3))