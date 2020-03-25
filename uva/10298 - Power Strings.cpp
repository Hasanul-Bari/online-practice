#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


void computelps(string patt)
{
    int px=patt.length();
    //cout<<px<<endl;

    int lps[px];

    lps[0]=0;

    int len=0,i;

    for(i=1; i<px; )
    {

        if(patt[len]==patt[i])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len!=0)
            {
                len=lps[len-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }


    /*for(int i=0; i<px; i++)
        cout<<lps[i]<<" ";
    cout<<endl;*/

    int x=lps[px-1];

    x=px-x;


    if(px%x==0)
        cout<<px/x<<endl;
    else
        cout<<1<<endl;
}





int main()
{
    faster

    string patt;
    while(cin>>patt)
    {
        if(patt==".")
            break;

        computelps(patt);
    }








    return 0;
}



