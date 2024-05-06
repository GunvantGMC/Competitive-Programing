def getCount(binString):
    decimalCount = set()
    
    for i in range(len(binString)):
        for j in range(i+1, len(binString)+1):    
            decimal = int(binString[i:j], 2)
            decimalCount.add(decimal)
        #     print(binString[i:j])
        # print(decimalCount)
    
    return len(decimalCount)

    
binString = input()
print(getCount(binString))