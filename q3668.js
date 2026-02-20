function sol(order , friends) {
    let res = [];
    for (let i = 0; i < order.length; i++) {
        if(friends.includes(order[i])){
            res.push(order[i]);
        }
    }
    return res;
}
console.log(sol([1,4,5,3,2], [2,5]))