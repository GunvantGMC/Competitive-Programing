def oddCounter(n):
    oddC = 0
    for i in range(1, n):
        oddC += (len(str(i)) % 2)

    return oddC

# def oddCounter(n):
#     oddC = ["1" if (len(str(i)) % 2) else "0" for i in range(1, n)]
#     return oddC.count("1")


i = int(input())
print(oddCounter(i))
