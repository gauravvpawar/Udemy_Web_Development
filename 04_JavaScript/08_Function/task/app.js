
let size = prompt("Enter the size of array : ");

let arr = [];

for(let i = 0;i<size;i++)
{
    arr.push(Number(prompt(`Enter the ${i} element  : `)));
}

let sum = arr.reduce((prev , curr) => {
    return prev , curr;
})

let product = arr.reduce((prev , curr) => {
    return prev* curr;
})

console.log(sum);
console.log(product);