/*
User enter his name and create the username for it
umesh -> @umesh5
*/

let user = prompt("Enter your name : ");

user = "@" + user + user.length;

console.log("username : " , user);
alert("username : " + user);