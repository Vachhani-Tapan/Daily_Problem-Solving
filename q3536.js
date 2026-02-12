function sol(n) {
    let res = [];
    let prod = 0;
    for (let i = 0; i < String(n).length; i++) {
        res.push(Number(String(n)[i]))
    }
    for (let i = 0; i < res.length; i++) {
        for (let j = 0; j < res.length; j++) {
            if (i != j) {
                prod = Math.max(prod, res[i] * res[j])
            }
        }
    }
    return prod;
}
console.log(sol(930))