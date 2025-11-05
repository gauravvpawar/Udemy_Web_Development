// type casting in js

let score = '50';
let secondScore = Number(score);
console.log(typeof score);
console.log(typeof secondScore);

let marks = '12aa';
let marksToInt = Number(marks);
console.log(typeof marks);
console.log(typeof marksToInt);
console.log(marksToInt);  // it replicate as a not a number Nan

let isLogged = "";
let booleanLogged = Boolean(isLogged);
console.log(booleanLogged);
console.log(typeof isLogged);
console.log(typeof booleanLogged);

// in boolean
// 'gaurav' = true
//  "" = false
// "12" = true