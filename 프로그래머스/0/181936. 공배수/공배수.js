function solution(number, n, m) {
    var answer = 0;
    
    answer = number % n || number % m ? 0 : 1;
    
    return answer;
}