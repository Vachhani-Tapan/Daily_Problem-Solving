function sol(date) {
    let year = Number(date.slice(0,4)).toString(2);
    let month = Number(date.slice(5,7)).toString(2);
    let date1 = Number(date.slice(8,10)).toString(2);
    return [year,month,date1].join('-');
}
console.log(sol('2080-02-09'))