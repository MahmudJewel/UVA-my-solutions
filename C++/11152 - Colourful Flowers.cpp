#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
main()
{
    double a,b,c;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>a>>b>>c)
    {
        double area_small_circle, area_triangle,main_circle,s;
        //main_circle=pi*c*c;
        s=(a+b+c)/2;
        area_triangle=sqrt((s*(s-a)*(s-b)*(s-c)));
        area_small_circle=pi*((s-a)*(s-b)*(s-c))/s;
        double r=(a*b*c)/(sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b)));
        main_circle=pi*r*r;
        double vio,sun;
        vio=area_triangle-area_small_circle;
        sun=main_circle-area_triangle;
        printf("%.4lf %.4lf %.4lf\n",sun,vio,area_small_circle);
    }
}
