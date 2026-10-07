def solution(num_list):
    a = 0
    b = 0
    
    for i in range(0, len(num_list), 2):
        a += num_list[i]
        
    for i in range(1, len(num_list), 2):
        b += num_list[i]
        
    return a if a > b else b