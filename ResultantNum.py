def resultantNumber(N):
    res = str(N)
    data = ""
    for i in range(0, len(str(N))):
        data = res[-1]+data
        res = res[0:len(res)-1]
        res = res[::-1]

    return data


n = int(input())
print(resultantNumber(n))
