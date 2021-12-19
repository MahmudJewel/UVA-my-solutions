#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],t,i,j,c;
    freopen("I.txt","r",stdin);
    freopen("O.txt","w",stdout);
    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    for(i=1;i<=t;i++)
    {
        c=0;
        for(j=0;j<10;j++)
            cin>>a[j];
        for(j=0;j<9;j++)
        {
            if(a[0]>a[1])
            {
                if(a[j]<a[j+1])
                {
                    c=1;
                    break;
                }
            }
            else
            {
                if(a[j]>a[j+1])
                {
                    c=1;
                    break;
                }
            }
        }
        if(c==1)
            cout<<"Unordered"<<endl;
        else
            cout<<"Ordered"<<endl;
    }

    return 0;
}
