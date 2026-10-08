def solution(arr):
    answer = 0
    pre = arr
    
    while True:
        tmp = []
        
        for x in pre:

            if x >= 50 and x % 2 == 0:
                tmp.append(x / 2)
            elif x < 50 and x % 2 == 1:
                tmp.append(x * 2 + 1)
            else:
                tmp.append(x)

        if pre == tmp:
            break

        answer += 1
        pre = tmp
            
    return answer