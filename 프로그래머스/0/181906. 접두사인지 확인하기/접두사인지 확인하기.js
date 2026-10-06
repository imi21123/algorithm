function solution(my_string, is_prefix) {
    var answer = 0;
    let prefix = [];
    
    for (let i = 0; i < my_string.length; i++) {
        prefix.push(my_string.slice(0, i));
    }
    
    for (let i of prefix) {
        if (i === is_prefix) {
            answer = 1;
        } 
    }
    
    return answer;
}