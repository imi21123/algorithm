def solution(myString, pat):
    answer = 0
    
    for i in range(0, len(myString) - (len(pat) - 1)):
        tmp = ''
        
        for j in range(len(pat)):
            tmp += myString[i + j]
            
        pat = pat.upper()
        tmp = tmp.upper()
        
        if tmp == pat:
            answer = 1
            break
            
    return answer