#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


ll computelps(string patt)
{
    int px=patt.length();

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

    return lps[px-1];
}


/*void kmp(string text,string patt)
{
    int tx=text.length();
    int px=patt.length();

    int lps[px];

    computelps(lps,px,patt);


    for(int i=0; i<px; i++)
        cout<<lps[i]<<" ";
    cout<<endl;

    for(int i=0, j=0; i<tx; )
    {
        if(text[i]==patt[j])
        {
            i++;
            j++;

            if(j==px)
            {
                cout<<"Found at index : "<<i-px<<endl;
                j=lps[j-1];
            }
        }
        else
        {
            if(j!=0)
                j=lps[j-1];
            else
                i++;
        }
    }

}*/





int main()
{
    faster

    string patt,rpatt;
    int t,k=1;
    cin>>t;
    while(t--)
    {

        cin>>patt;

        int px=patt.length();
        //cout<<"px "<<px<<endl;

        rpatt=patt;

        reverse(rpatt.begin(),rpatt.end());


        rpatt=rpatt+"$"+patt;



        //cout<<rpatt<<endl;



        ll z=computelps(rpatt);

        cout<<"Case "<<k<<": "<<px+(px-z)<<endl;
        k++;

        /*cout<<patt;
        for(int i=z; i<px; i++)
            cout<<rpatt[i];
        cout<<endl;*/


    }



    return 0;
}


/*
https://www.geeksforgeeks.org/minimum-characters-added-front-make-string-palindrome/

*/


