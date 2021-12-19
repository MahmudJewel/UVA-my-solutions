#include<bits/stdc++.h>
#include<stdio.h>
#define pi acos(-1)
using namespace std;
int main()
{
    int l,t,i;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    double w,r,re,ra;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>l;
        w=((double)l*3)/5;
        r=(double)l/5;
        ra=pi*r*r;
        re=(float)l*w-ra;
        printf("%.2lf %.2lf\n",ra,re);
    }
    return 0;
}
