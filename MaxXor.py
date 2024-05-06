def getMaxXor(n):        
    highest_bit = len(bin(n)) - 2
    x = (1 << highest_bit) - 2
    
    return x


n = int(input())
print(getMaxXor(n))



# arr = []
    # for i in range(0, n):
    #     v = 0
    #     for j in (n, n+i):            
    #         v += j ^ j+1
    #         print('-',i,j)
    #     print(v) 
