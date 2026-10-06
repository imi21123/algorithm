function solution(num_list) {
    var answer = 0;
    let odd = '';
    let even = '';
    
    for (let i of num_list) {
        if (i % 2) {
            odd += String(i);
        } else {
            even += String(i);
        }
    }
    
    answer = Number(odd) + Number(even);
    
    return answer;
}