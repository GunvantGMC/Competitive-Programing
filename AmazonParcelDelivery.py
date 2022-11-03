def getMinimumCost(parcels, k):
    # Write your code here
    ans = 0
    count = k-len(parcels)
    arr = [len(parcels)]
    for i in range(1, k+1):
        arr[parcels[i-1]] = 1
    print("R")
    for i in range(1, k):
        if(count == 0):
            break
        # if(i not in parcels):

        if(arr[i] == 0):
            ans += i
            count -= 1

    return ans


print(getMinimumCost([4, 5, 7, 1], 4))
print(getMinimumCost([6, 5, 4, 1, 3], 7))
