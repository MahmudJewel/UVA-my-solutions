#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,m1,m2;
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    while(cin>>h1>>m1>>h2>>m2)
    {
        if((h1+h2+m1+m2)==0)
            break;
        else if(h2>h1)
        {
            if(m2>=m1)
                cout<<(h2-h1)*60+(m2-m1)<<endl;
            else
                cout<<(h2-h1-1)*60+(m2-m1+60)<<endl;

        }
        else if(h1>h2)
        {
            if(m2>=m1)
                cout<<(h2-h1+24)*60+(m2-m1)<<endl;
            else
                cout<<(h2-h1-1+24)*60+(m2-m1+60)<<endl;
        }
        else
        {
            if(m2>m1)
                cout<<(m2-m1)<<endl;
            else if(m1==m2)
                cout<<24*60<<endl;
            else
                cout<<(23*60)+(m2-m1+60)<<endl;
        }
    }
    return 0;
}
