/*
Array is special type of object to store multiple values
*/

let cities = ["Mumbai" , "pune" , "Nagpur" , "Delhi" , "Noida"];

console.log(cities);

// to iterate over array
for(let i = 0;i<cities.length;i++)
{
    console.log(cities[i]);
}

console.log("-------------------------By for of ----------");
for(let city of cities)
{
    console.log(city);
}

console.log("--------------------------By for in loop---------------");
// when you use for in always treat as the indexes accessing
for(let city in cities)
{
    console.log(cities[city]);  
}