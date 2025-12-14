/*
to find the dog age as human age
humanAge = (dogAge - 2) * 4 + 21;
*/

let age = prompt("Enter your dog age : ");

let dogAge = (age - 2)* 4 + 21;

alert("Your dog age as compare to human :  " + dogAge);

let span = document.getElementsByTagName("span")[0];
span.innerHTML = dogAge;