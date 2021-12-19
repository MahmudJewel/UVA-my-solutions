#include<bits/stdc++.h>
using namespace std;
#define LL long long
main()
{
    LL t;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>t;
    while(t--)
    {
        LL q;
        string s;
        getchar();
        getline(cin,s);
        LL szs=s.size();
        cin>>q;
        while(q--)
        {
            string ss;
            getchar();
            getline(cin,ss);
            LL szss;
            //szs=s.size();
            szss= ss.size();
            //LL c=0;
            LL k=0;
            for(LL j=0; j<szs; j++)
            {
                LL c=0;
                if(ss[0]==s[j])
                {
                    for(LL i=0; i<szss; i++)
                    {
                        if(ss[i]==s[i+j])
                            c++;
                    }
                }

                if(c==szss)
                {
                    cout<<"y"<<endl;
                    k++;
                    break;
                }
                //else
                    //c=0;
            }

            if(k==0)
                cout<<"n"<<endl;
        }
    }
}
