#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long c,sum,x,y,i,m,n;
   // freopen("inn.txt","r",stdin);
    //freopen("outt.txt","w",stdout);
    while(cin>>m>>n)
    {
        if(m==0 && n==0)
            break;
        x=0;
        y=0;
        sum=0;
        for(i=0; i<=y; i++)
        {
            if(m==0 && n==0)
                break;
            if((m%10+n%10+x)>=10)
            {
                sum+=1;
                x=1;
            }

            else
                x=0;
            m=m/10;
            n=n/10;
            y++;
        }
        if(sum==0)
            cout<<"No carry operation."<<endl;
        else if(sum==1)
            cout<<sum<<" carry operation."<<endl;
        else
            cout<<sum<<" carry operations."<<endl;

    }

    return 0;
}
