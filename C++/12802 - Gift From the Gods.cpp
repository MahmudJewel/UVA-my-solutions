#include<iostream>
#define size 100
using namespace std;
int main()
{
    long long ar[size],n,i,j,a,b,c,d;
    while(cin>>n)
    {
        d=n;
        a=0;
        for(i=0; i<=a; i++)
        {
            ar[i]=n%10;
            n=n/10;
            if(n==0)
                break;
            else
                a++;
        }


        b=0;
        for(i=0; i<a/2; i++)
        {
            if(ar[i]==ar[a-i])
                continue;
            else
            {
                b++;
                break;
            }
        }
        if(b!=0)
            cout<<2*d<<endl;
        else
        {
            c=0;
            for(i=2; i<d; i++)
            {
                if(d%i==0)
                {
                    c=1;
                    break;
                }
            }
            if(c==1)
                cout<<2*d<<endl;
            else
            {
                cout<<2*d<<endl;
                break;
            }

        }

    }

    return 0;
}
