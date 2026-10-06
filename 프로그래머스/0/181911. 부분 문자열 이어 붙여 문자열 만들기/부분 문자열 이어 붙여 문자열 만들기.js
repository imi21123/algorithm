function solution(my_strings, parts) {
    var answer = '';
    
    for (let i = 0; i < parts.length; i++) {
        let [s, e] = parts[i];
        
        for (let j = s; j <= e; j++) {
            answer += my_strings[i][j]
        }
    }
    
    return answer;
}