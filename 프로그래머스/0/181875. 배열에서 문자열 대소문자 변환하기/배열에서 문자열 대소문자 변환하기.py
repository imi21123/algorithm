def solution(strArr):
    answer = []
    
    for i, x in enumerate(strArr):
        if i % 2:
            answer.append(x.upper())
        else:
            answer.append(x.lower())
            
    return answer