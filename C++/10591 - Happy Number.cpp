#include<bits/stdc++.h>
using namespace std;
#define LL long long
main()
{
    LL t;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>t;
    for(LL i=1; i<=t; i++)
    {
        LL n;
        cin>>n;
        LL m=n;
        LL sum=0;
                /*{
                    if(m==0)
                        break;
                    LL d=m%10;
                    cout<<d<<" ";
                    sum+=(d*d);
                    m/=10;
                }*/
        while(1)
        {
            sum=0;
                while(1)
                {
                    if(m==0)
                        break;
                    LL d=m%10;
                    sum+=(d*d);
                    m/=10;
                }
            if(sum==1)
            {
                cout<<"Case #"<<i<<": "<<n<<" is a Happy number."<<endl;
                break;
            }
            else if(sum<10)
            {
                cout<<"Case #"<<i<<": "<<n<<" is an Unhappy number."<<endl;
                break;
            }
                m=sum;
            }
        }
}
