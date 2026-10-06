function solution(a, b, c, d) {
    var answer = 0;
    const maxVal = Math.max(a, b, c, d);
    const minVal = Math.min(a, b, c, d)
    let maxCnt = 0;
    let minCnt = 0;
    const arr = [a, b, c, d]
    
    for (let i of arr) {
        if (i === maxVal) {
            maxCnt++;
        } else if (i === minVal) {
            minCnt++
        }
    }
    
    if (maxCnt === 4) {
        answer = 1111 * maxVal;
    } else if (maxCnt === 3) {
        answer = (10 * maxVal + minVal) ** 2;
    } else if (minCnt === 3) {
        answer = (10 * minVal + maxVal) ** 2;
    } else if (maxCnt === 2 && minCnt === 2) {
        answer = (maxVal + minVal) * Math.abs(maxVal - minVal);
    } else if (a === b) {
        answer = c * d;
    } else if (a === c) {
        answer = b * d
    } else if (a === d) {
        answer = b * c
    } else if (b === c) {
        answer = a * d;
    } else if (b === d) {
        answer = a * c;
    } else if (c === d) {
        answer = a * b;
    } else {
        answer = minVal;
    }
    
    return answer;
}