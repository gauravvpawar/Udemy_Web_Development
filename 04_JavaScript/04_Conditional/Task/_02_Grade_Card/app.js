// enter the marks and gives the grade
let marks = prompt("Enter your marks : ");

if(marks >= 80 && marks < 100)
{
    console.log("A");
}else if(marks >= 70 && marks <80)
{
    console.log("B");
}else if(marks >= 60 && marks < 70)
{
    console.log("C");
}else if(marks >= 50 && marks < 60)
{
    console.log("D");
}else if(marks >= 40 && marks < 50)
{
    console.log("E");
}else{
    console.log("fail");
}