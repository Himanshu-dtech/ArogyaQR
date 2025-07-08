my_points={'a':(4,3),'b':(1,2),'c':(5,1)}
highest=[0,0]
init=0
for i in range(2):
    init=0
    for j in my_points.keys():
        val=my_points[j][i]
        if init==0:
            highest[i]=val
        init+=1
        if val>highest[i]:
            highest[i]=val
    print("Maximum Value at index(my_points,",i,")=",highest[i]) 
    