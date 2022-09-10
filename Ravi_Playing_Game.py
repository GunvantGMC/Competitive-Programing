from operator import le
from re import S


def solution(score, queries):
    tot = []
    tot.append(score[0])
    for i in range(1, len(score)):
        tot.append(tot[i-1] + score[i])

    for q in queries:
        print(tot[q-1])


t = int(input(""))
sArr = []

qArr = []


for i in range(0, t):
    sArr.append(int(input("")))


f = int(input(""))
for i in range(0, f):
    qArr.append(int(input("")))


solution(sArr, qArr)
