def hasVowels(arr, q):
    v = ['a', 'e', 'i', 'o', 'u']
    output = []
    for d in q:
        c = 0
        s1 = int(d[0])-1
        s2 = int(d[-1])
        while s1 < s2:
            c1 = arr[s1][0]
            c2 = arr[s1][-1]
            if(c1 in v and c2 in v):
                c += 1
            s1 += 1
        output.append(c)
    return(output)


arr = list(input().split(" "))
qr = list(input().split(" "))
for k in hasVowels(arr, qr):
    print(k)
