

def processStringTemp(n, arr):
    x = ["$" if (int(k[-4:-2]) >= 60) else "#" for k in arr]
    return x.count("$")


def processString(n, arr):
    cnt = 0
    for k in arr:
        if (int(k[-4:-2]) >= 60):
            cnt += 1
    return cnt


n = int(input())
arr = []
for i in range(n):
    arr.append(input())

print(processString(n, arr))
print(processStringTemp(n, arr))
