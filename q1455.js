function sol(sentence , searchWord) {
    sentence = sentence.split(' ');
    for (let i = 0; i < sentence.length; i++) {
        sentence[i] = sentence[i].slice(0,searchWord.length);
        if(sentence[i].includes(searchWord)){
            return i+1;
        }
    }
    return -1;
}
console.log(sol("hellohello hellohellohello", "ell"))