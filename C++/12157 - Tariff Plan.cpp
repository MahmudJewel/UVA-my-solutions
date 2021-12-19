#include<iostream>
using namespace std;
int main()
{
    int a[100],n,m,i,j,A,B,x,y;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        A=0;
        B=0;
        cin>>m;
        for(j=0; j<m; j++)
            cin>>a[j];

        for(j=0; j<m; j++)
        {
            a[j]=a[j]+1;

            x=a[j]%30;
            if(x==0)
                A=A+(a[j]/30)*10;
            else
                A=A+(a[j]/30)*10+10;

            y=a[j]%60;
            if(y==0)
                B=B+(a[j]/60)*15;
            else
                B=B+(a[j]/60)*15+15;
        }
        if(A>B)
            cout<<"Case "<<i<<":"<<" Juice "<<B<<endl;
        else if(B>A)
            cout<<"Case "<<i<<":"<<" Mile "<<A<<endl;
        else
            cout<<"Case "<<i<<":"<<" Mile Juice "<<A<<endl;
    }
    return 0;
}
