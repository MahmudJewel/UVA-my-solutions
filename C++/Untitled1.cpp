/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 30/05/18              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
#define D double


main()
{
    LL a;

    cin>>a;

    while(a--)
    {
        char anagrama[11];
        cin >> anagrama;
        int len = strlen(anagrama);
        sort(anagrama, anagrama+len);

        do
        {
            cout << anagrama << endl;
        }
        while (next_permutation(anagrama, anagrama+len));

       cout<<endl;
    }
}
