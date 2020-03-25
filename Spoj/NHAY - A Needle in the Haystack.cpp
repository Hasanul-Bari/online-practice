#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


void computelps(int lps[],int px,string patt)
{
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
}


void kmp(string text,string patt)
{
    int tx=text.length();
    int px=patt.length();

    int lps[px],c=0;

    computelps(lps,px,patt);


    /*for(int i=0; i<px; i++)
        cout<<lps[i]<<" ";
    cout<<endl;*/

    for(int i=0, j=0; i<tx; )
    {
        if(text[i]==patt[j])
        {
            i++;
            j++;

            if(j==px)
            {
                cout<<i-px<<endl;
                j=lps[j-1];
                c++;
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

    if(c==0)
        cout<<endl;

}





int main()
{
    faster

    string text,patt;
    int n;

    while(cin>>n>>patt>>text)
        kmp(text,patt);






    return 0;
}

/*
ABABDABACDABABCABAB
ABABCABAB
*/
