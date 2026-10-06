function solution(arr, queries) {
    for (let i of queries) {
        let tmp;
        
        tmp = arr[i[0]];
        arr[i[0]] = arr[i[1]];
        arr[i[1]] = tmp;
    }
    
    return arr;
}