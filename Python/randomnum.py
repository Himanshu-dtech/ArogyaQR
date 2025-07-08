from  random import*
def genRan(num):
    n=0
    for i in range(0,num-1):
        if i==0:
            n+=randint(1,9)
        else:
            n+=randint(0,9)
        n+=10**(i+1)
    return n
x=int(input("Enter the number="))
number=genRan(x)
print("The randomly generated number of",x,"digits is",number)

    