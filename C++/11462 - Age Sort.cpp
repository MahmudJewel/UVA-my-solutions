#include<bits/stdc++.h>
#define LL long long
using namespace std;
main()
{
    LL n;
    while(cin>>n)
    {
        if(n==0)
            break;
        vector<LL>age;
        for(LL i=1;i<=n;i++)
        {
            LL c;
            cin>>c;
            age.push_back(c);
        }
        sort(age.begin(),age.end());
        for(LL i=0;i<n-1;i++)
            cout<<age[i]<<" ";
        cout<<age[n-1]<<endl;
    }
}
