t = int(input(""))


def DecimalToBinary(num):
    return bin(num).replace("0b", "")


for i in range(0, t):
    cout = 0
    a, b = input("").split(" ")
    a = int(a)
    b = int(b)
    for j in range(1, a+1):
        cnt = 0
        bin1 = DecimalToBinary(int(j))
        print("{}", bin1)
        # for j in range(0, a):
