t=int(input())
for test in range(t):
    p, y, r1, r2=input().split()
    p=float(p)
    y=float(y)
    r1=float(r1)
    r2=float(r2)
    result1=(p*y*r1)/100
    result2=p*(r2/100+1)**y - p
    if result1>result2:
        print('Bank 2')
    elif result2>result1:
        print('Bank 1')
    elif result1==result2:
        print('Confused huh!')

