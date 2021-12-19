#include<bits/stdc++.h>
using namespace std;
#define LL long long
main()
{
        LL n;
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
        while(cin>>n)
        {
            LL a[30000],b[30000];
            for(LL i=0;i<n;i++)
                cin>>a[i];
            for(LL i=0;i<n-1;i++)
            {
                b[i]=abs(a[i]-a[i+1]);
            }
            /*for(LL i=0;i<n-1;i++)
            {
                cout<<b[i];
            }*/
            LL c=0;
            //sort(a,a+n);
            sort(b,b+(n-1));
            for(LL i=1;i<n;i++)
            {
                if(b[i-1]!=i)
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
                cout<<"Jolly"<<endl;
            else
                cout<<"Not jolly"<<endl;
        }
}
