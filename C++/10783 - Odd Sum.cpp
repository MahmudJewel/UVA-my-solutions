#include<bits/stdc++.h>
using namespace std;
#define LL long long
main()
{
    LL t,c=1;;
    cin>>t;
    while(t--)
    {
      LL a,b,sum=0;
      cin>>a>>b;
      for(LL i=a;i<=b;i++)
      {
          if(i%2==1)
            sum+=i;
      }
      cout<<"Case "<<c++<<": "<<sum<<endl;
    }
}
