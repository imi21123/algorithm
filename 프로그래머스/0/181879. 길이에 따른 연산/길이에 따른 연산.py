def solution(num_list):
    answer = 0
    
    if len(num_list) > 10:
        for x in num_list:
            answer += x
    else:
        answer = 1
        for x in num_list:
            answer *= x
            
    return answer