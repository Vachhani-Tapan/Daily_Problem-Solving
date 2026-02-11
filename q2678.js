function sol(details) {
    let count = 0;
    for (let i = 0; i < details.length; i++) {
        let age = String(details[i][11]) + String(details[i][12]);
        if(Number(age) > 60){
            count++;
        }
    }
    return count;
}
console.log(sol(["7868190130M7522","5303914400F9211","9273338290F4010"]))