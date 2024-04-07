
m,n = map(int, input().split())
arr = list(map(int, input().split(" ")))
A = set(map(int, input().split(" ")))
B = set(map(int, input().split(" ")))


dic = {}
for i in arr:
    if(dic.get(i)):
        dic[i] = dic.get(i) + 1
    else:
        dic[i] = 1
c1 = 0
c2 = 0
for i in list(A):
    if(dic.get(i)):
        c1 += dic[i]

for i in list(B):
    if(dic.get(i)):
        c2 += dic[i]

print(c1-c2)