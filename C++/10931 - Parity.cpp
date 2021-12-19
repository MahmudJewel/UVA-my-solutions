#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000],i,j,count,m;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
            count=0;
            m=0;
        for(i=0;n>0;i++)
        {
            a[i]=n%2;
            if(a[i]==1)
                count++;
            n=n/2;
            m++;
        }
        cout<<"The parity of ";
        for(i=m-1;i>=0;i--)
            cout<<a[i];
        cout<<" is "<<count<<" (mod 2)."<<endl;
    }

    return 0;
}
