def bucketID(itemID):    
    result = max([int(x) for x in str(itemID)])
    return int(result)


itemID = int(input())
result = bucketID(itemID)
print(result)