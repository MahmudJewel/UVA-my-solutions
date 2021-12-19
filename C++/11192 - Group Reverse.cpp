#include<bits/stdc++.h>
using namespace std;
char GR(int n,char s[])
{
    int i,j,a,b,c,d;
    char temp;
    a=strlen(s);
        b=a/n;
        for(i=0; i<a; i=i+b)
        {
           d=i+b;
           j=i;
           while(j<d)
           {
               temp=s[j];
               s[j]=s[d-1];
               s[d-1]=temp;
               j++;
               d--;
           }
        }
        return s[5];
        //cout<<s<<endl;
}
int main()
{
    char s[109];
    int n;
    //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
    while(cin>>n && n!=0)
    {
        getchar();
        gets(s);
        cout<<GR(n,s)<<endl;
        //puts(m);

    }
    return 0;
}
