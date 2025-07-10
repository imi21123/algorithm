const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().split(' ');

let h = Number(input[0].split(' ')[0]);
let m = Number(input[1].split(' ')[0]);

if (m >= 45) {
    console.log(h, m - 45);
}
else {
    if (h > 0) {
        console.log(h - 1, m + 15);
    }
    else {
        console.log(23, m + 15);
    }
}