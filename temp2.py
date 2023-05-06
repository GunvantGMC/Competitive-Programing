def fu(n):
    if(n == 1):
        return 1
    else:
        return (n+fu(n-1))


print(fu(5))
