#include<iostream>
using namespace std;
int main()
{
    int a,b,n,i,cons;
    for(i=1;i<=10;i++)
    {
        cin>>n;
        if(n==0)
            break;
         cons=0;
        do
        {
            a=n/3;
            b=n%3;
            cons=cons+a;
            n=a+b;
            if(n==2)
                n=n+1;
        }
        while(n>=3);
       cout<<cons<<endl;
    }

    return 0;
}

