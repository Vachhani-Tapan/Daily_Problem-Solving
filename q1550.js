function sol(arr) {
    if(arr.length < 2) return false;
    for (let i = 2; i < arr.length; i++) {
        if(arr[i] % 2 != 0 && arr[i-1] % 2 != 0 && arr[i-2] % 2 != 0){
            return true;
        }
    }
    return false;
}
console.log(sol([2,1,7,5,6]));