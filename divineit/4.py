t=int(input())
for test in range(t):
    p, q, z=input().split()
    p=float(p)
    q=float(q)
    z=float(z)
    marbel=0
    n=int(input())
    for i in range(n):
        x,y=input().split()
        x=float(x)
        y=float(y)
        result=x**2+y**2-p*x-q*y+z
        if(result<=0):
            marbel=marbel+1
    print(marbel)
