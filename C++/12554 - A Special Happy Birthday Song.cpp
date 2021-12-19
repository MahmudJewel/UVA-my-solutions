/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 24/07/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string

S song[16]={"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};

main()
{
    LL n;
    cin>>n;
    S name[n];
    for(LL i=0;i<n;i++)
    {
        cin>>name[i];
    }

    LL song_con=0,name_con=0,c=0;
    while(1)
    {
        if(song_con==16)
        {
            if(n>=16 && c>=n)
            {
                    break;
            }
            else if(n<16)
                break;
                song_con=0;
        }
        if(name_con==n)
            name_con=0;
            c++;
        cout<<name[name_con++]<<":"<<" "<<song[song_con++]<<endl;
    }

}
