def printPattern(n):
    for i in range(1, n+1):
        for j in range(1, i):
            print(" ", end="")
        if(i == n):
            print("", end=" ")
        print(i, end="")
        print("", end=" ")
        for j in range(i, n):
            print(" ", end="")

        for j in range(i, n):
            print(" ", end="")
        if(i != n):
            print(i, end="")
        print()

    for i in range(n-1, 0, -1):
        for j in range(1, i):
            print(" ", end="")
        print(i, end="")
        print("", end=" ")
        for j in range(i, n):
            print(" ", end="")

        for j in range(i, n):
            print(" ", end="")
        if(i != n):
            print(i, end="")

        print()


n = int(input())
printPattern(n)
