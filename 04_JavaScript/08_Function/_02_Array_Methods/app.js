// to methods of array

let arr = [1,  2 , 3 ,4 ,5 ,6];
console.log(arr);

// forEach 
// loop through array
arr.forEach((e) => {
    console.log(e);
})

// map 
// transform array and return array
let arr2 =  arr.map((e) => e*e);

console.log(arr2);

// filter 
// select element
let arr3 =  arr.filter((ele) => {
    return ele % 2 == 0;
})

console.log(arr3);

// reduce
// reduce array to a single values
let total = arr.reduce((prev , curr) => {
    return prev + curr;
})

console.log(total);