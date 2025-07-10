const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().split('\n');

let h = Number(input[0].split(' ')[0])
let m = Number(input[0].split(' ')[1])

if (m >= 45) {
    m -= 45;
}
else {
    if (h > 0) {
        h -= 1;
        m += 15;
    }
    else {
        h = 23;
        m += 15;
    }
}

console.log(h, m);