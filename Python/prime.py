num=int(input("Enter the value="))
count=0
for i in range (2,num):
    if(num%i)==0:
        count=1
        break
if(count==1):
    print(num,"isn't a prime number")
if(count==0):
    print(num," is a prime number")

