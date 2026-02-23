function sol(words1 , words2) {
    let obj1 = {};
    let obj2 = {};
    for (let i = 0; i < words1.length; i++) {
        if(obj1[words1[i]] == undefined){
            obj1[words1[i]] = 1;
        }
        else{
            obj1[words1[i]]++;
        }
    }
    for (let i = 0; i < words2.length; i++) {
        if(obj2[words2[i]] == undefined){
            obj2[words2[i]] = 1;
        }
        else{
            obj2[words2[i]]++;
        }
    }
    let count = 0;
    for (const key in obj1) {
        if(obj1[key] == 1 && obj2[key] == 1){
            count++;
        }
    }
    return count;
}
console.log(sol(["leetcode","is","amazing","as","is"], ["amazing","leetcode","is"]))