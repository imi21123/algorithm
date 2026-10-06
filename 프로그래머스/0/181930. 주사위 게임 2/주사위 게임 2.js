function solution(a, b, c) {
    var answer = a + b + c;
    
    if (a === b  && b === c) {
        answer *= (a ** 2 + b ** 2 + c ** 2) * (a ** 3 + b ** 3 + c ** 3);
    } else if (a === b || b === c || c === a) {
        answer *= (a ** 2 + b ** 2 + c ** 2);
    }
    
    return answer;
}