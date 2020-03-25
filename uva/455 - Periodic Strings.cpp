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

    int len=0,i,c=1;

    for(i=1; i<px; )
    {

        if(patt[len]==patt[i])
        {
            /*if(len==1)
                c=i;*/

            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len!=0)
            {
                len=lps[len-1];
                c=i;
            }
            else
            {
                lps[i]=0;
                c=i+1;
                i++;
            }
        }
    }


    /*for(int i=0; i<px; i++)
        cout<<lps[i]<<" ";
    cout<<endl;


    cout<<"c = "<<c<<endl;*/

    int x=lps[px-1];



    if(x%c==0)
        cout<<c<<endl;
    else
        cout<<px<<endl;
}





int main()
{
    faster

    int t;
    string patt;

    cin>>t;

    bool hp=false;

    while(t--)
    {
        cin>>patt;
        computelps(patt);

        if(t!=0)
            cout<<endl;
    }








    return 0;
}



