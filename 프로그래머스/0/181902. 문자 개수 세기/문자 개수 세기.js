function solution(my_string) {
    var answer = [];
    const apb = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
    
    for (let i = 0; i < 52; i++) {
        answer.push(0)
    }
    
    let n;
    for (let i of my_string) {
        n = apb.indexOf(i)
        answer[n]++;
    }
    
    return answer;
}