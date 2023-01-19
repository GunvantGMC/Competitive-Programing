def missionWords(s, t):
    a = s.split(" ")
    b = t.split(" ")
    t = []

    while len(b) > 0:
        for x in a:
            if x not in b:
                t.append(x)
            else:
                b.remove(x)

    return t


s = input()
t = input()


print(" ".join(missionWords(s, t)))
