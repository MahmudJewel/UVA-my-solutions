t=int(input())
for test in range(t):
    N,R,S,D=input().split()
    N=int(N)
    R=int(R)
    S=int(S)
    D=int(D)
    # print(N,R,S,D)
    U=[]
    V=[]
    T=[]
    for i in range(R):
        u,v,tk=input().split()
        U.append(int(u))
        V.append(int(v))
        T.append(int(tk))
    # print(U,V,T)

