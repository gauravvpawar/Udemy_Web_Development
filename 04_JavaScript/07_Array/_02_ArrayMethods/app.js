/*
methods in array present in js

Array length
Array toString()
Array at()
Array join()
Array pop()
Array push()
Array shift()
Array unshift()
Array isArray()
Array delete()
Array concat()
Array copyWithin()
Array flat()
Array slice()
Array splice()
Array toSpliced()
*/

// to practice the array methods
let arr = ["Mango" , "Banana" , "Papaya" , "Apple"];

console.log(arr);

arr.push("CustardApple"); // to push the element inside the array
console.log(arr);

arr.pop();// to remove element at the end
console.log(arr);

arr.unshift("litchi"); // to push element in front
console.log(arr);

arr.shift(); // to remove first element array
console.log(arr);

arr.splice(2 , 1, "Anjeer");//it took three parameter (start , deleteCount , newElement);
console.log(arr);

arr.delete;
console.log(arr);

let arr2 = arr.concat(["peanut" , "beans" , "Maize"]); // it return of concatination of two array
console.log(arr2);
