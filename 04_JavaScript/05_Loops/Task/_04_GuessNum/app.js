/*
user enter the number until he didnt find the correct one
*/

let num = 10;

let user = prompt("Enter the number : ");

while(user != num)
{
    user = prompt("You Guess wrong ! Try Again : ");
}

alert("You found it correct one");