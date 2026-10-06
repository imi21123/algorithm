function solution(my_string, queries) {
    for (let [s, e] of queries) {
        const rev = [...my_string]
            .slice(s, e + 1)
            .reverse()
            .join('');
        
        my_string = my_string.slice(0, s) + rev + my_string.slice(e + 1);
    }
    
    return my_string;
}