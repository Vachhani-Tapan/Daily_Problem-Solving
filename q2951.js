function sol(mountain) {
    let res = [];
    for (let i = 1; i < mountain.length-1; i++) {
        if(mountain[i] > mountain[i+1] && mountain[i] > mountain[i-1]){
            res.push(i);
        }
    }
    return res;
}
console.log(sol([1,4,3,8,5]));