function sol(num) {
    let obj = {
        'I' : 1,
        'V' : 5,
        'X' : 10,
        'L' : 50,
        'C' : 100,
        'D' : 500,
        'M' : 1000,
        'IV' : 4,
        'XL' : 40,
        'CD' : 400,
        'IX' : 9,
        'XC' : 90,
        'CM' : 900,
    }
    let count = 0;
    for (let i = 0; i < num.length; i++) {
        let group = num[i] + num[i+1];
        if(obj[group] != undefined){
            count += obj[group];
            i++;
        }
        else{
            count += obj[num[i]]
        }
    }
    return count;
}
console.log(sol('MCMXCIV'))