function solution(num_list) {
    var answer = 0;
    let multiply = 1;
    let sumSquare = 0;
    
    for (let i of num_list) {
        multiply *= i;
        sumSquare += i;
    }
    
    sumSquare = sumSquare ** 2;
    answer = multiply < sumSquare ? 1 : 0;
    
    return answer;
}