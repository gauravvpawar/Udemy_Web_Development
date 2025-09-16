
// there are two type of data type
/*
Primitive and non primitive
int             array
float           class
long            
double
char
boolean
short
byte
*/

let name = "Gaurav";
let age = 21;
let graduated = true;
let CGPA = 7.5;
let phoneNumber = 12233445;
let Grade = 'a';


console.log(`Your name is : ${name}`);
console.log(`Your age is : ${age}`);
console.log(`Graduate or not : ${graduated}`);
console.log(`Your CGPA: ${CGPA}`);
console.log(`Your phone number : ${phoneNumber}`);
console.log(`Passing year grade : ${Grade}`);


document.getElementById('1').textContent= name;
document.getElementById('2').textContent  = `Your age is : ${age}`;
document.getElementById('3').textContent = `Graduate or not : ${graduated}`;
document.getElementById('4').textContent = `Your CGPA: ${CGPA}`;
document.getElementById('5').textContent = `Passing year Grade : ${Grade}`;
