#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
main()
{
    LL t;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>t;
    /* while(t--)
     {
         LL n;
         cin>>n;
         vector<S>name;
         for(LL i=0;i<n;i++)
         {
             S c;
             cin>>c;
             name.push_back(c);
         }
         /*nam=name;
         sort(name.begin(),name.end());
         /*if(nam[0]>nam[1])
             swap(nam[0],nam[1]);
         for(LL i=0;i<n;i++)
             cout<<nam[i]<<" ";
             LL k=0;
             while(nam!=name)
             {
                 for(LL i=0;i<n-1;i++)
                 {
                     if(nam[i]>nam[i+1])
                     {
                         swap(nam[i],nam[i+1]);
                         k++;
                     }
                 }
             }*/
    while(t--)
    {
        LL n,name[1000],k=0;
        cin>>n;
        for(LL i=0; i<n; i++)
            cin>>name[i];
        for(LL i=0; i<n-1; i++)
        {
            for(LL j=0; j<n-1; j++)
            {
                if(name[j]>name[j+1])
                {
                    swap(name[j],name[j+1]);
                    k++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<k<<" swaps."<<endl;

    }
}
