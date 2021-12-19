#include<bits/stdc++.h>
using namespace std;
#define LL long long
main()
{
    string a,b;
    while(getline(cin,a) && getline(cin,b))
    {
        vector<char>name;
        LL l1,l2;
        l1=a.size();
        l2=b.size();
        for(LL i=0;i<l1;i++)
        {
            for(LL j=0;j<l2;j++)
            {
                if(a[i]==b[j])
                {
                    name.push_back(a[i]);
                    b[j]='0';
                    break;
                }
            }
        }
        sort(name.begin(),name.end());
        for(LL i=0;i<name.size();i++)
            cout<<name[i];
            cout<<endl;
    }
}
