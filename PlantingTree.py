# class UserMachineCode(object):

#     def totalTrees(self, input1, input2):
#         if(input2 <= 0):
#             return 0
#         return (2+input1) % input2


# userCode = UserMachineCode()
# res = userCode.totalTrees(int(input()), int(input()))
# print(res)


# class UserMachineCode(object):

#     def placements(self, input1, input2):

#         arr = []
#         for i in range(input1):
#             cnt = 0
#             if(i != 0):
#                 for k in range(0, i):
#                     if(input2[k] > input2[i]):
#                         cnt += 1
#             arr.append(cnt)

#         st = "{"
#         for j in arr:
#             st += str(j)+","

#         val = st[:-1]+"}"
#         print(val)


# userCode = UserMachineCode()
# n = int(input())
# lst = [int(x) for x in input().split(" ")]
# userCode.placements(n, lst)


class UserMachineCode(object):

    def coverage(self, input1, input2):

        cnt = 0
        for i in range(input1):
            if(i == 0):
                cnt += input2[i][1] - input2[i][0]
            else:
                if(input2[i-1][1] > input2[i][0]):
                    cnt += input2[i-1][1] - input2[i][0]

        # print(cnt)
        return cnt


userCode = UserMachineCode()
n = int(input())
lst = []
for k in range(n):
    lst.append([int(x) for x in input().split(" ")])

userCode.coverage(n, lst)
