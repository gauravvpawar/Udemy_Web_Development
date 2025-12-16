// love calculator
// to take to name from user and show the random Percentage of love match

let user1 = prompt("Enter the first person name : ");
let user2 = prompt("Enter the second person name : ");

let Percentage = Math.floor(Math.random() * 100 +1);

console.log("Matches : " + Percentage + "%");

alert(`Love Matches Upto : ${Percentage} %`);