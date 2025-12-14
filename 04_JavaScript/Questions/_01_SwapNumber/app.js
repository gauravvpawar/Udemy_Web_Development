/* 
swap the numbers
*/

let a = 5;
let b = 10;

console.log("Before swap : ");
console.log("a : " , a);
console.log("b : " , b);

// way 1
let temp = a;
a = b;
b = temp;

console.log("After swap : ");
console.log("a : " , a);
console.log("b : " , b);

//way 2 
let x = 15;
let y = 50;

console.log("Before swap : ");
console.log("x : " , x);
console.log("y : " , y);

x = x + y;
y = x - y;
x = x - y;

console.log("After swap : ");
console.log("x : " , x);
console.log("y : " , y);