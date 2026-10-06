function solution(arr, intervals) {
    var answer = [];
    const [[a1, b1], [a2, b2]] = intervals;
    
    answer.push(...arr.slice(a1, b1 + 1));
    answer.push(...arr.slice(a2, b2 + 1));
    
    return answer;
}