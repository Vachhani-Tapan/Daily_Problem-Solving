function sol(n) {
    let obj = {}
    for (let i = 0; i < String(n).length; i++) {
        if (obj[String(n)[i]] == undefined) {
            obj[String(n)[i]] = 1;
        }
        else {
            obj[String(n)[i]]++;
        }
    }
    let min = Math.min(...Object.values(obj));
    for (const key in obj) {
        if(obj[key] == min){
            return Number(key);
        }
    }
}
console.log(sol(723344511))