function sol(n,k) {
    let res = [];
    for (let i = 0; i <= n; i++) {
        if(n % i == 0){
            res.push(i);
        }
    }
    if(res.length < k){
        return -1;
    }
    return res[k-1];
}
console.log(sol(7,2));