function solution(num_list) {
    const n = num_list.length;
    
    if (num_list[n - 1] > num_list[n - 2]) {
        num_list.push(num_list[n - 1] - num_list[n - 2]);
    } else {
        num_list.push(num_list[n - 1] * 2);
    }
    
    return num_list;
}