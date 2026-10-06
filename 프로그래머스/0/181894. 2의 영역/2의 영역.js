function solution(arr) {
    var answer = [];
    const start = arr.indexOf(2);
    const end = arr.lastIndexOf(2);
    
    answer = start === -1 ? [-1] : arr.slice(start, end + 1);
    
    return answer;
}