function sol(moves) {
    let x = 0;
    let y = 0;
    let sum = 0
    for (let i = 0; i < moves.length; i++) {
        if(moves[i] == 'U' || moves[i] == 'R'){
            x++;
        }
        else if(moves[i] == 'D' || moves[i] == 'L'){
            y--;
        }
    }
    return x == 0 && y == 0;
}
console.log(sol('RRDD'));