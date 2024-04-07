# n=int(input())
# g=[[] for _ in range(n+1)]

# for i in range(n-1):
#     a,c = map(int, input("").split())    
#     g[a]+=[c]    
#     g[c]+=[a]
# z = 0

# def go(a,f):
#     d = [0, 0]    
#     z = 0    
#     for c in g[a]:
#         if c!=f:    
#             t=go(c,a)        
#             d=sorted(d+[t[1]+1])[1:]            
#             z=max(max(z, t[0]), sum(d))        
#     return (z, d[1])

# print(max(go(a,c)[0]*go(c,a)[0] for a in range (n + 1) for c in g[a] if c>a))

# class Polygon():

#     def sides (self): pass

# class Triangle (Polygon):

#     def sides (self): print("Triangle has 3 sides")

# print(issubclass (Triangle, Polygon))






def mult():
    return [lambda x:i*x for i in range(4)]

def mult1():
    for i in range(4):
        yield lambda x:i*x

def mult2():
    return [lambda x,i=i:i*x for i in range(4)]

from functools import partial
from operator import mul

def mult3():
    return [partial(mul,i) for i in range(4)]

print([m(2) for m in mult()])
print([m(2) for m in mult1()])
print([m(2) for m in mult2()])
print([m(2) for m in mult3()])



