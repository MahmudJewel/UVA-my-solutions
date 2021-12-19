#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100000],i,j=0;

    for(i=2;;i++)
    {
        if(i%2==0 || i%3==0 || i%5==0)
        {
            a[j]=i;
            j++;
        }
        if(j==1500)
            break;
    }
    cout<<"The 1500'th ugly number is "<<a[j-1]<<"."<<endl;

    return 0;
}
