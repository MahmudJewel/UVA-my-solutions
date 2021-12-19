#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
//#define LL long double
main()
{
    double a,b,c,area,s;
    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2;
        //cout<<s<<endl;
        //printf("%.3lf\n",s);
        area=(4.0/3.0)*sqrt(s*(s-a)*(s-b)*(s-c));
        //cout<<area;
        if(area>0)
            printf("%.3lf\n",area);
        else
        {
            area=-1;
            printf("%.3lf\n",area);
        }
    }
}
/*#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    double m1, m2, m3, s, area;

    while (cin >> m1 >> m2 >> m3)
    {
        s = 0.5 * (m1+m2+m3);
        area = (4.0 / 3.0) * sqrt ( s * (s-m1) * (s-m2) * (s-m3));

        if (area > 0.0)
            printf("%.3lf\n", area);
        else
            printf("-1.000\n");
    }

    return 0;
}*/
