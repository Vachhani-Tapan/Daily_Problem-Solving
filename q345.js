function sol(s) {
    s = s.toString().split('');
    let vowel = 'aeiouAEIOU';
    let i = 0;
    let j = s.length-1;
    while (i < j) {
        while(i < j && !vowel.includes(s[i])) i++
        while(i < j && !vowel.includes(s[j])) j--

        [s[i],s[j]] = [s[j],s[i]];
        i++;
        j--;
    }
    return s.join('');
}
console.log(sol('IceCreAm'))