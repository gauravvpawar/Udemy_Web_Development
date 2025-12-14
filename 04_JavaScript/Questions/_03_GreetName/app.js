// Greet name

let name = prompt("Enter your name : ");
let firstChar = name.slice(0 , 1).toUpperCase(0);
let restChar = name.slice(1,name.length).toLowerCase();
alert("Hello " + firstChar + restChar);