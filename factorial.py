n=7
f=1
if(n<0):
    print('factorial will not exit')
elif(n==0):
    print('factorial of 0 is 1')
else:
    for i in range(1,n+1):
        f*=i
    print('f of',n,'is',f)
    
    
