#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int a[100009];

void solve(int tc)
{
   string s;
   int q,l,r;

   cin>>s;

   int n=s.length();

   for(int i=0; i<n-1; i++)
   {
       if(s[i]==s[i+1])
       {
           a[i+1]=a[i]+1;
       }
       else
        a[i+1]=a[i];
   }

   cin>>q;
   while(q--)
   {
       cin>>l>>r;

       //cout<<a[r-1]<<" "<<a[l-1]<<endl;

       cout<<a[r-1]-a[l-1]<<endl;
   }



}


int main()
{
    faster

    //int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    solve(1);



    return 0;
}



