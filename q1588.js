function sol(arr) {
    let sum = 0;
    for (let i = 0; i < arr.length; i++) {
        for (let j = i; j < arr.length; j++) {
            let temp = [];
            let currSum = 0;
            for (let k = i; k <= j; k++) {
                currSum += arr[k];
                temp.push(arr[k]);
            }
            if (temp.length % 2 != 0) {
                sum += currSum;
            }
        }
    }
    return sum;
}
console.log(sol([10,11,12]));