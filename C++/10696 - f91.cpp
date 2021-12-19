#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    while(cin>>n)
    {
        if(n==0)
            break;
        else if(n>=101)
            cout<<"f91("<<n<<") = "<<n-10<<endl;
        else
            cout<<"f91("<<n<<") = "<<"91"<<endl;
    }
    return 0;
}
