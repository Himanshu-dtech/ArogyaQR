List=eval(input("Enter the list:"))
length=len(List)
for i in range(length):
    for j in range(length -1 -i):
        if List[j]>List[j+1]:
            List[j],List[j+1]=List[j+1],List[j]
print(List)