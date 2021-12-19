/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 01/06/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string

struct argnta
{
    S name;
    LL attack;
    LL defend;
};

main()
{
    LL t;
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    cin>>t;
    for(LL i=1; i<=t; i++)
    {
        struct argnta ar[11],ar2[10];
        S s1[10],s2[10],s3[10];
        for(LL j=0; j<10; j++)
        {
            cin>>ar[j].name>>ar[j].attack>>ar[j].defend;
        }
        /*sort(ar,ar+10);
        for(LL j=9;j>=0;j--)
        {
            cout<<ar[j].name<<endl;
        }*/
        for(LL j=0; j<10-1; j++)
        {
            for(LL k=0; k<10-1-j; k++)
            {
                if(ar[k].attack<ar[k+1].attack)
                {
                    swap(ar[k],ar[k+1]);
                    // swap(ar[k].defend,ar[k+1].defend);
                    // swap(ar[k].name,ar[k+1].name);
                }
            }
        }
        LL m=-1;

        for(LL j=0; j<10; j++)
        {
            if(ar[j].attack==ar[4].attack)
            {
                ar2[++m].attack=ar[j].attack;
                ar2[m].name=ar[j].name;
                ar2[m].defend=ar[j].defend;

            }
        }

        //for(LL j=0;j<=m;j++)
          //  cout<<ar2[j].name<<" "<<ar2[j].attack<<" "<<ar2[j].defend<<endl;
          for(LL j=0; j<=m-1; j++)
        {
            for(LL k=0; k<=m-1-j; k++)
            {
                if(ar2[k].defend>ar2[k+1].defend)
                {
                    swap(ar2[k],ar2[k+1]);
                    // swap(ar[k].defend,ar[k+1].defend);
                    // swap(ar[k].name,ar[k+1].name);
                }
            }
        }


       /* for(LL j=0; j<=m; j++)
        {
            cout<<ar2[j].name<<" "<<ar2[j].attack<<" "<<ar2[j].defend<<endl;
        }*/
        /*LL m=0;
        for(LL k=0; k<10; k++)
        {
        if(ar[4].attack==ar[k].attack)
        {
           s3[m++]=ar[k].name;
        }
        }

        sort(s3,s3+m);*/
        LL z=0;
        for(LL j=0; j<5; j++)
        {
        if(ar[4].attack==ar[j].attack)
            s1[j]=ar2[z++].name;
        else
        s1[j]=ar[j].name;
        }

        LL mn=0;
        LL zero=0;
        for(LL j=0; j<10; j++)
        {
        for(LL k=0;k<5;k++)
        {
         if(s1[k]==ar[j].name)
         {
             zero=1;
             break;
         }
         else
            zero=0;
        }
        if(zero==1)
            continue;
        else
        s2[mn++]=ar[j].name;
        }
        sort(s1,s1+5);
        sort(s2,s2+5);
         cout<<"Case "<<i<<":"<<endl;
        cout<<"(";
        for(LL j=0; j<5; j++)
        {
            if(j==4)
                cout<<s1[j]<<")"<<endl;
            else
                cout<<s1[j]<<", ";
        }

        cout<<"(";
        for(LL j=0; j<5; j++)
        {
            if(j==4)
                cout<<s2[j]<<")"<<endl;
            else
                cout<<s2[j]<<", ";
        }

    }
}
