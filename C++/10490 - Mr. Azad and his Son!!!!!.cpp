/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 21/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL unsigned long long int
#define D double
#define S string
LL prime[32];
LL perfect_num(LL n);
LL sieve(LL a);

main()
{
    LL n;
    while(cin>>n)
    {
        if(n==0)
            break;
        LL m=pow(2,n-1)*(pow(2,n)-1);
        //cout<<n<<endl;
        //LL t=perfect_num(m);
        //if(t==1)
        //cout<<"Perfect: "<<m<<"!"<<endl;
        //else
        // {

        sieve(n);

        if(prime[n]==0)
        {
            if(n==11 || n==23 || n==29)
                cout<<"Given number is prime. But, NO perfect number is available."<<endl;
            else
                cout<<"Perfect: "<<m<<"!"<<endl;

        }
        else
            cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
        //}
    }
}

LL perfect_num(LL n)
{
    LL sum=1;
    for(LL i=2; i<=n/2; i++)
    {
        if(n%i==0)
            sum+=i;
    }
    if(sum==n)
        return 1;
    else
        return 0;
}

LL sieve(LL a)
{
    LL c=sqrt(a);
    for(LL i=2; i<=c; i++)
    {
        for(LL j=2; i*j<=a; j++)
        {
            if(prime[i*j]==0)
                prime[i*j]=1;
        }
    }
}

