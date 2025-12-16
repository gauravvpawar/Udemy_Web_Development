// given the marks of array print the marks > 90

let marks = [87, 92 , 95 , 76, 82];

let ans = marks.filter((ele) => {
    return ele > 90;
})

console.log(ans);