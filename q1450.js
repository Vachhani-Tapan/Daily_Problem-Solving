function sol(startTime, endTime, queryTime) {
    let count = 0
    for (let i = 0; i < startTime.length; i++) {
        if(startTime[i] <= queryTime && queryTime <= endTime[i]){
            count++;
        }
    }
    return count;
}
console.log(sol([1,2,3], [3,2,7], 4))