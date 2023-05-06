# User function Template for python3
class Solution:
    def solve(self, n, s):
        # code here
        cnt = 0
        cnt2 = 0
        ss = s
        # print(n)
        k = ["a", "e", "i", "o", "u"]
        for i in range(0, n-1):
            if s[i] in k:
                if s[i+1] in k:
                    cnt += 1
                    # s[i+1]='b'
                    s = s[:i+1]+'b'+s[i+2:]
            else:
                if s[i+1] not in k:
                    cnt += 1
                    s = s[:i+1]+'a'+s[i+2:]
        cnt2 = cnt
        cnt = 0
        s = ss
        for i in range(0, n-1):
            if s[i] in k:
                if s[i+1] in k:
                    cnt += 1
                    # s[i+1]='b'
                    s = s[:i]+'b'+s[i+1:]
            else:
                if s[i+1] not in k:
                    cnt += 1
                    s = s[:i]+'a'+s[i+1:]
        # print(cnt, cnt2, "_")
        return(min(cnt, cnt2))


# { #  Driver Code Starts#Initial Template for Python 3
if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        # n = int(input())
        s = input()
        n = len(s)
        ob = Solution()
        ans = ob.solve(n, s)
        print(ans)
        tc -= 1
# } Driver Code Ends
