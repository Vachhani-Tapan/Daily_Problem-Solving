function sol(words, left, right) {
    let vowel = 'aeiou';
    let count = 0;
    for (let i = left; i <= right; i++) {
        if (vowel.includes(words[i][0]) && vowel.includes(words[i][words[i].length - 1])) {
            count++
        }
    }
    return count;
}
console.log(sol(["are","amy","u"], 0, 2));