function solution(a, b) {
    var answer = 0;
    const sum1 = String(a) + String(b);
    const sum2 = String(b) + String(a);
    
    answer = Number(sum1) > Number(sum2) ? Number(sum1) : Number(sum2);
    
    return answer;
}