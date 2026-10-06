function solution(intStrs, k, s, l) {
    var answer = [];
    let str = ''
    
    for (let i of intStrs) {
        str = i.split('').splice(s,l).join('');
        
        if (Number(str) > k) {
            answer.push(Number(str));
        }
    }
    
    return answer;
}