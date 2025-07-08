import math
def nthRoot(x,n):
    return math.pow(x,(1/n))
x=int(input("Enter the number="))
n=int(input("Enter the root="))
val=round((nthRoot(x,n)))
if n==2:
    print(n,"nd root of",x,"is",val)
elif n==3:
    print(n,"rd root of",x,"is",val)
else:
    print(n,"th root of",x,"is",val)