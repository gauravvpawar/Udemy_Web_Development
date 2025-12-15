/* 
take input from user and print the average of marks
*/

alert("Enter 5 Subject marks : ");

let marks = [];

for(let i = 0;i<5;i++)
{
    marks.push(Number(prompt(`Enter ${i} Subject marks` )));
}

console.log(marks);

let avg;
let sum = 0;
for(let i = 0;i<marks.length;i++)
{
    sum = sum +  marks[i]; 
}

avg = (sum/marks.length);

console.log("Average of marks : " + avg );

alert("Average of marks : " + avg)