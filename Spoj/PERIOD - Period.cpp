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


    int x;

    for(int i=1; i<px; i++)
    {
        x=(i+1)-lps[i];

        if((i+1)%x==0 && (i+1)/x>1)
            cout<<(i+1)<<" "<<(i+1)/x<<endl;


    }





}





int main()
{
    faster

    int t,n,k=1;
    string patt;

    cin>>t;

    while(t--)
    {

        cin>>n>>patt;

        cout<<"Test case #"<<k<<endl;
        computelps(patt);
        k++;
        cout<<endl;

    }










    return 0;
}




