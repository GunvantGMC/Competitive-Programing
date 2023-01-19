# Online Python compiler (interpreter) to run Python online.
# Write Python 3 code in this online editor and run it.

def isprime(k):
    if k == 2:
        return True
    p = 2
    while(p < k):
        if(k % p == 0):
            return False
        p += 1
    return True


def sumTot(n):
    tot = 0
    for i in range(2, n+1):
        if isprime(i):
            # print(i, "-")
            tot += i
    return tot


n = int(input(""))
print(sumTot(n))


# print(sumTot(999))
# print(sumTot(5))
# print(sumTot(12))
