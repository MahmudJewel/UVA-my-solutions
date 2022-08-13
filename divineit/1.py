
def is_prime(n):
    last=int(n/2)+1
    for i in range(2,last):
        if n%i==0:
            return 'NO'
    return 'YES'

# main code start 
n=int(input())
for i in range(n):
    name, value=input().split()
    value=int(value)
    flag=0
    for j in name:
        temp=ord(j)+value
        # print('temp: ', temp)
        result=is_prime(temp)
        # print(result)
        if result=='YES':
            flag=1
            break
    if flag==1:
        print('YES')
    elif flag==0:
        print('NO')
