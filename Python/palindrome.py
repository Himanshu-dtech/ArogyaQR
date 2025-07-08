string=input("Enter the string:")
length=len(string)
mid=int(length/2)
rev=-1
for i in range(mid):
    if string[i]==string[rev]:
        i+=1
        rev-=1
    else:
        print(string,"is not a palindrome")
        break
else:
    print(string,"is a palindrome")