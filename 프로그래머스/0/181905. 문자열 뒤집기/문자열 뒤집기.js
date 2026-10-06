function solution(my_string, s, e) {
    var answer = '';
    answer += my_string.slice(0, s)
    
    let rev = my_string.slice(s, e + 1).split('')
    rev = rev.reverse()
    answer += rev.join('')
    
    answer += my_string.slice(e + 1)
    return answer;
}