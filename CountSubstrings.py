def getSum(s):
    myMap = {
        "1":"ab",
        "2":"cde",
        "3":"fgh",
        "4":"ijk",
        "5":"lmn",
        "6":"opq",
        "7":"rst",
        "8":"uvw",
        "9":"xyz",
    }
    for k in myMap:
        val = myMap[k]
        if s in val:
            return int(k)

def countSubstring(input_str):
    l = len(input_str)
    finalCount = 0
    for i in range(l):
        for j in range(i+1,l+1): 
            val = input_str[i:j]
            count = 0
            for v in val:
                count += getSum(v)   
            if(count % len(val)==0):
                finalCount+=1
    return finalCount



print(countSubstring(input()))
