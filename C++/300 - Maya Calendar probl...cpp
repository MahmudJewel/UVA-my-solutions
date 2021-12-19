#include<bits/stdc++.h>
using namespace std;
#define LL long long
main()
{
    LL  n;
    cin>>n;
    while(n--)
    {
        LL h_d,h_y,h_dd=0.0;
        string h_m,s;
        LL t_m,t_d,t_y;
        cin>>h_d>>s>>h_m>>h_y;
        h_dd+=(h_d+h_y*365);
        if(h_m=="uayet")
            h_dd+=(20*5);
        else if(h_m=="pop")
            h_dd+=(1*20);
        else if(h_m=="no")
            h_dd+=(2*20);
        else if(h_m=="zip")
            h_dd+=(3*20);
        else if(h_m=="zots")
            h_dd+=(4*20);
        else if(h_m=="tzec")
            h_dd+=(5*20);
        else if(h_m=="xul")
            h_dd+=(6*20);
        else if(h_m=="voxkin")//pop, no, zip, zotz, tzec, xul, yoxkin, mol, chen, yax, zac, ceh,
            h_dd+=(7*20);
        else if(h_m=="mol")
            h_dd+=(8*20);
        else if(h_m=="chen")
            h_dd+=(9*20);
        else if(h_m=="vax")
            h_dd+=(10*20);
        else if(h_m=="zac")// mac, kankin, muan, pax, koyab, cumhu
            h_dd+=(11*20);
        else if(h_m=="cah")
            h_dd+=(12*20);
        else if(h_m=="mac")
            h_dd+=(13*20);
        else if(h_m=="kankin")
            h_dd+=(14*20);
        else if(h_m=="muan")
            h_dd+=(15*20);
        else if(h_m=="pax")
            h_dd+=(16*20);
        else if(h_m=="koyab")
            h_dd+=(17*20);
        else if(h_m=="cumhu")
            h_dd+=(18*20);
        //cout<<h_dd<<endl;
        t_y=h_dd/260;
        h_dd=h_dd%260;
        //cout<<t_y<<" ";
        //cout<<h_dd<<" ";
        t_m=h_dd/20;
        t_d=h_dd%20;
        t_d=t_d%13;
        //t_d=h_dd%13;
        cout<<t_d<<" "<<t_m<<"  "<<t_y<<endl;

    }
}
