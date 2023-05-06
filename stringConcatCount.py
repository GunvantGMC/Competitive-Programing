def concatenatedCount(strs):
    arr = strs.split(" ")
    # print(arr)
    op = []
    for a in arr:
        t = [ord(a[x]) for x in range(0, len(a))]
        tempMax = 0
        for k in t:
            tI = t.index(k)
            p = [max(k, x) for x in t[tI:]]
            # print("P Before : ", p)
            temp = list(set(p))
            temp.remove(k)
            # print("P After : ", p)

            tempMax = max(tempMax, len(temp))
            # print("k : ", k)
            # print("k : ", chr(k))
            # print("A : ", a)
            # print("p : ", p)
            # print("t : ", t)
            # print("temp : ", temp)
            # print("tempMax : ", tempMax)
        op.append(tempMax)

    return "".join(list(map(str, op)))


print(concatenatedCount(input()))

# words = input().strip().split()

# output = ""

# for word in words:
#     count = 0
#     for i in range(len(word)-1):
#         if word[i] < word[i+1]:
#             count += 1
#     output += str(count)

# print(output)


# ------------------------
