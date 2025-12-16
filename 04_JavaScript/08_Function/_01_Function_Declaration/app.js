/*
Function is a block of execute which perform a specific task
syntax - > 
function fun()
{
    console.log("Hello");
}

fun();
*/

function fun()
{
    console.log("Hello");
}

fun();

// to return some value from function
// normal function is also called before the declaration in js
// console.log(add(5,12)); // 17

function add(a , b)
{
    return a + b;
}
console.log(add(5,12)); // 17


// we also have arrow function 
// it have
// shorter syntax
// cleaner callback

// console.log(demo(10 , 5)); // but you can not access the arrow function before declaration of it

const demo = (a  , b) =>{
    return a % b;
}

// also shorter by
const modulo = (a , b) => a % b;

console.log(demo(10 , 5));
console.log(modulo(45 , 3));