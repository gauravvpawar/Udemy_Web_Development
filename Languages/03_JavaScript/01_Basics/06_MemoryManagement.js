let name = "skytech";
let anotherName = name;
anotherName = "KnowledgeHub";
console.log(name);
console.log(anotherName);

/*
 in the primitive data type 
 it only pass by values
*/

let a = {
    name : "ram"
}

let b = a;
b.name = "shyam";

console.log(a.name);// shyam 
console.log(b.name); // shyam  because they poiting at the same reference values