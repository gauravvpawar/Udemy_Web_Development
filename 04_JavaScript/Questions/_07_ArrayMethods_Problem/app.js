// declare array it include bloomberg, microsoft , uber , google ,IBM , netflix

let companies = ["bloomberg" , "microsoft" , "uber" , "google" , "IBM" , "Netflix"];
console.log(companies);

// remove first array element
companies.shift(0);
console.log(companies);

// remove uber and replace ola in its place
companies.splice(2,1,"ola");
console.log(companies);

// add amazon at the end
companies.push("amazon");
console.log(companies);