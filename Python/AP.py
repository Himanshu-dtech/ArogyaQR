a=int(input("Enter the first term="))
d=int(input("Enter the common difference="))
n=int(input("Enter the no. of terms="))
print("AP=",end="")
for i in range(0,n):
    print(a+i*d,",",end="")