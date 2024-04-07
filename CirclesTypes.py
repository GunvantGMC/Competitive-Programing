def circles(circlePair):
    arr = []
    for c in circlePair:
        c1 = list(map(int, c.split(" ")))[:3]
        c2 = list(map(int, c.split(" ")))[3:]
        a,b,c = c1[0],c1[1],c1[2]
        x,y,z = c2[0],c2[1],c2[2]
        if(a>b):
            p,q = a-c, a+c
            l,m = x-z, x+z
            if((p == l) or (q == m) or (p == m) or (q == l)):
                arr.append("Touching")
            elif((p < l and p < m) and (q > l and q > m)):
                arr.append("Disjoint-Inside")
            elif((p<l<q or p<m<q or l<p<m or l<q<m)):
                arr.append("Intersecting") 

        else:
            p,q = b-c, b+c
            l,m = y-z, y+z
            if((p == l) or (q == m) or (p == m) or (q == l)):
                arr.append("Touching")
            elif((p > l and q > m) or (p < l and q < m)):
                arr.append("Disjoint-Outside")
            elif((p<l<q or p<m<q or l<p<m or l<q<m)):
                arr.append("Intersecting")
                 
    return arr


n = int(input())
circlePairs = []
for i in range(n):    
    circlePairs.append(input())

# print(n, circlePairs)
print(circles(circlePairs))