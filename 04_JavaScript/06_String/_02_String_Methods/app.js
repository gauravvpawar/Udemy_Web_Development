/* String methods
String is non primitive data type and for the security purpose string is immutable\

String length
String charAt()
String charCodeAt()
String codePointAt()
String concat()
String at()
String slice()
String substring()
String substr()
String toUpperCase()
String toLowerCase()
String isWellFormed()
String toWellFormed()
String trim()
String trimStart()
String trimEnd()
String padStart()
String padEnd()
String repeat()
String replace()
String replaceAll()
String split()
*/


let username = "   helloworld   ";
console.log(username);
console.log(username.toLowerCase());
console.log(username.toUpperCase());
console.log(username.trim()); // to remove extra spaces
console.log(username.trimStart());
console.log(username.trimEnd());
console.log(username.concat("Earth")); // to concat string
console.log(username.replace("h" , "m"));  
console.log(username.charAt(9));// return character of its index
console.log(username.slice(0 , 5));