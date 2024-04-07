import math

def countCustomers(bill):
    res = 0
    for b in bill:
        t = int(math.sqrt(b))
        if((t*t) == b):
            res += 1
    return res

bill = list(map(int, input().split()))
result = countCustomers(bill)
print(result)