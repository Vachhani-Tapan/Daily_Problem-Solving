function sol(coordinates) {
    let s1 = 'aceg';
    let s2 = 'bdfh';
    if(s1.includes(coordinates[0])){
        if(Number(coordinates[1]) % 2 != 0){
            return false;
        }
        else{
            return true;
        }
    }
    if(s2.includes(coordinates[0])){
        if(Number(coordinates[1]) % 2 == 0){
            return false;
        }
        else{
            return true;
        }
    }
}
console.log(sol('c7'));