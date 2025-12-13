/*
for of loop is used to iterate over the object it has key and values data store
*/

const info = 
{
    name : "harry" , 
    age : 24 , 
    proffession : "Teaching",
    born : 2000
}


console.log(info);

for(let key in info)
{
    console.log("key : " , key); 
    // to print the value
    console.log("key : " , key , " : " , "values : " , info[key])
}