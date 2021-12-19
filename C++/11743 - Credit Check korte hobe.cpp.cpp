#include<iostream>
using namespace std;
#define size 100
int main()
{
    int a[100],b[100],c[100],sum1,sum2,sum,i,j,k,n;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=0; j<4; j++)
            cin>>a[j];
        for(j=0; j<1; j++)
        {
            for(k=0; k<4; k++)
            {
                b[k]=a[j]/1000;
                a[j]=(a[j]%1000)*10;
            }
        }
         for(j=1; j<2; j++)
        {
            for(k=4; k<8; k++)
            {
                b[k]=a[j]/1000;
                a[j]=(a[j]%1000)*10;
            }
        }
         for(j=2; j<3; j++)
        {
            for(k=8; k<12; k++)
            {
                b[k]=a[j]/1000;
                a[j]=(a[j]%1000)*10;
            }
        }
         for(j=3; j<4; j++)
        {
            for(k=12; k<16; k++)
            {
                b[k]=a[j]/1000;
                a[j]=(a[j]%1000)*10;
            }
        }

        sum1=0;
        sum2=0;

        for(k=0; k<16; k+2)
            {
                sum1=sum1+b[k]/10+b[k]%10;
            }
            cout<<sum1;
        /*for(k=1; k<16; k+2)
            sum2=sum2+b[k];
        sum=sum1+sum2;
        if(sum%10==0)
            cout<<"Valid"<<endl;
        else
            cout<<"Invalid"<<endl;*/
    }

    return 0;
}
