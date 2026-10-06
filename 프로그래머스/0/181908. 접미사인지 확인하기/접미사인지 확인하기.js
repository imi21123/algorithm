function solution(my_string, is_suffix) {
    var answer = 0;
    let suffix = [];
    
    for (let i = 0; i < my_string.length; i++) {
        suffix.push(my_string.slice(i));
    }
    
    for (let i of suffix) {
        if (i === is_suffix) {
            answer = 1;
        } 
    }
    
    return answer;
}