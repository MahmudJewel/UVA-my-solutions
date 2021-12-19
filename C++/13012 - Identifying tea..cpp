#include<iostream>
using namespace std;
int main()
{
    int ans[5],t,i,j,cons,a,b,c,d,e;
    while((cin>>t>>a>>b>>c>>d>>e))
    {
        cons=0;
        ans[0]=a;
        ans[1]=b;
        ans[2]=c;
        ans[3]=d;
        ans[4]=e;
        for(i=0; i<5; i++)
        {
            if(t==ans[i])
                cons+=1;
        }
        cout<<cons<<endl;
    }
    return 0;
}
