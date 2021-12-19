#include<bits/stdc++.h>
using namespace std;
int prime(int sum);
main()
{
    string a;
    int sum,i,j,ln,p;
    while(getline(cin,a))
    {
        sum=0;
        ln=a.size();
        for(i=0;i<ln;i++)
        {
            if(a[i]>=97 && a[i]<=122)
                sum=sum+a[i]-96;
                else
                    sum=sum+a[i]-38;
        }
        //cout<<sum;
        //sum=11;
        p=prime(sum);

       if(p==1)
        cout<<"It is a prime word."<<endl;
       else
            cout<<"It is not a prime word."<<endl;

    }
}
int prime(int sum)
{
    int i,j,sq,c=0;
    sq=sqrt(sum);
    for(i=2;i<=sq;i++)
    {
        if(sum%i==0)
        {
            c=1;
            break;
        }
    }

    if(c==0)
    //cout<<1;
          return 1;
    else
        return 0;
        //cout<<0;
}
