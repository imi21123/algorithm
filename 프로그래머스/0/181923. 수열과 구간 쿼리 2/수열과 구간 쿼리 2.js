function solution(arr, queries) {
    var answer = [];
    
    for (let [s, e, k] of queries) {
        let ans = 1000001;
        
        for (let j = s; j <= e; j++) {
            if (arr[j] > k && arr[j] < ans) {
                ans = arr[j]
            }
        }
        
        if (ans !== 1000001) {
            answer.push(ans);
        } else {
            answer.push(-1);
        }
    }
    
    return answer;
}