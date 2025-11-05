// to understand the keyword to assign the variable

const gravity = 9.8; 
// gravity = 2.2;  
/*
    constant variable you cant reinitialise it
    let varible provide the block level scope you can not access outside the block
    var varible provide the global level scope of varible you can reinitialise outside the block
*/

let account_password = "1234";
{
    var account_name = "gaurav"
    let account_password = "1234";
    console.log(account_password);
}

console.log(account_name); // account name provide the global scope of the variable

// you cant access the let variable outside the block

console.log(gravity);

// to print the multiple value in the tabuler format
console.table([account_name , account_password , gravity]);
