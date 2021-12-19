/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 21/12/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
#define D double

S con=" ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

main()
{
    S str;
    LL value[53];
    while(getline(cin,str))
    {
        memset(value,0,sizeof(value));
        //cout<<value[5];
        LL l=str.size();
        for(LL i=0; i<l; i++)
        {
            switch(str[i])
            {
            case 'A':
                value[1]++;
                break;
            case 'B':
                value[2]++;
                break;
            case 'C':
                value[3]++;
                break;
            case 'D':
                value[4]++;
                break;
            case 'E':
                value[5]++;
                break;
            case 'F':
                value[6]++;
                break;
            case 'G':
                value[7]++;
                break;
            case 'H':
                value[8]++;
                break;
            case 'I':
                value[9]++;
                break;
            case 'J':
                value[10]++;
                break;
            case 'K':
                value[11]++;
                break;
            case 'L':
                value[12]++;
                break;
            case 'M':
                value[13]++;
                break;
            case 'N':
                value[14]++;
                break;
            case 'O':
                value[15]++;
                break;
            case 'P':
                value[16]++;
                break;
            case 'Q':
                value[17]++;
                break;
            case 'R':
                value[18]++;
                break;
            case 'S':
                value[19]++;
                break;
            case 'T':
                value[20]++;
                break;
            case 'U':
                value[21]++;
                break;
            case 'V':
                value[22]++;
                break;
            case 'W':
                value[23]++;
                break;
            case 'X':
                value[24]++;
                break;
            case 'Y':
                value[25]++;
                break;
            case 'Z':
                value[26]++;
                break;

                case 'a':
                value[27]++;
                break;
            case 'b':
                value[28]++;
                break;
            case 'c':
                value[29]++;
                break;
            case 'd':
                value[30]++;
                break;
            case 'e':
                value[31]++;
                break;
            case 'f':
                value[32]++;
                break;
            case 'g':
                value[33]++;
                break;
            case 'h':
                value[34]++;
                break;
            case 'i':
                value[35]++;
                break;
            case 'j':
                value[36]++;
                break;
            case 'k':
                value[37]++;
                break;
            case 'l':
                value[38]++;
                break;
            case 'm':
                value[39]++;
                break;
            case 'n':
                value[40]++;
                break;
            case 'o':
                value[41]++;
                break;
            case 'p':
                value[42]++;
                break;
            case 'q':
                value[43]++;
                break;
            case 'r':
                value[44]++;
                break;
            case 's':
                value[45]++;
                break;
            case 't':
                value[46]++;
                break;
            case 'u':
                value[47]++;
                break;
            case 'v':
                value[48]++;
                break;
            case 'w':
                value[49]++;
                break;
            case 'x':
                value[50]++;
                break;
            case 'y':
                value[51]++;
                break;
            case 'z':
                value[52]++;
                break;
            }
        }
        //cout<<value[1]<<" "<<value[27]<<endl;
       // cout<<con[1]<<" "<<con[26]<<endl;
       LL x=0;
       for(LL i=1;i<=52;i++)
       {
           if(value[i]>x)
            x=value[i];
       }
       for(LL i=1;i<=52;i++)
       {
           if(value[i]==x)
            cout<<con[i];
       }
       cout<<" "<<x<<endl;

    }
}

