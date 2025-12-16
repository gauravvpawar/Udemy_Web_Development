
// every time you call the function it add one element inside the array
let array = [];

let start = 0;

function addOne()
{
    start++;
    if(start % 3== 0 && start % 5 == 0)
    {
        array.push("FizzBuzz");
    }
    else if(start % 3 == 0)
    {
        array.push("Fizz");
    }else if(start % 5 == 0)
    {
        array.push("buzz");
    } 
    else{
        array.push(start);
    }

    console.log(array);
}