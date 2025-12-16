// to calculate vowels from given string

let str = prompt("Enter the String : ");

function cal(str)
{
    str = str.toLowerCase();
    let count = 0;
    for(let i = 0;i<str.length;i++)
    {
        if(str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i' || str.charAt(i) == 'o' || str.charAt(i) == 'u')
        {
            count++;
        }
    }
    console.log("count : " , count);
}

cal(str);
