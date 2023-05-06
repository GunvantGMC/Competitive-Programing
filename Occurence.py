def occurrence(st):
    op = st[0]
    count = 0
    fin = ""
    for a in st:
        if(a == op):
            count += 1
        else:
            fin += op+str(count)
            count = 1
        op = a
    fin += op+str(count)
    print(fin)


st = input()
occurrence(st)
