function solution(code) {
    var answer = '';
    let mode = 0;
    let ret = '';
    
    for (let idx = 0; idx < code.length; idx++) {
        if (mode == 0) {
            if (code[idx] != '1') {
                if (idx % 2 == 0) {
                    ret += code[idx];
                }
            } else {
                mode = 1;
            }
        } else {
            if (code[idx] != '1') {
                if (idx % 2) {
                    ret += code[idx];
                }
            } else {
                mode = 0;
            }
        }
    }
    
    answer = ret == '' ? "EMPTY" : ret;
    
    return answer;
}