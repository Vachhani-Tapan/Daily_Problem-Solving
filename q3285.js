function sol(height, threshold) {
    let res = [];
    for (let i = 1; i < height.length; i++) {
        if(height[i-1] > threshold){
            res.push(i);
        }
    }
    return res;
}
console.log(sol([1,2,3,4,5], 2))