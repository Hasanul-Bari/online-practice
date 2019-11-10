#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

class contestant
{
public:
    int c,sol,pen;
};

bool comparator(contestant a,contestant b)
{
    if(a.sol==b.sol)
    {
        if(a.pen==b.pen)
        {
            return a.c<b.c;
        }
        else
            return a.pen<b.pen;
    }
    else
        return a.sol>b.sol;
}

int main()
{
    //faster

    int t;
    cin>>t;

    string s;
    getchar();
    getline(cin,s);

    //cout<<"s ="<<s<<endl;



    for(int k=1; k<=t; k++)
    {

        map< pair<int,int>,int > mp;
        map< int,int> m,m2;

        while(getline(cin,s))
        {

            if(s=="")
                break;

            int con,prb,tm;
            string l="";

            int i=0;

            while(s[i]!=' ')
            {
                l=l+s[i];
                i++;
            }
            i++;

            stringstream ss(l);
            ss>>con;
            l="";

            while(s[i]!=' ')
            {
                l=l+s[i];
                i++;
            }
            i++;

            stringstream ss1(l);
            ss1>>prb;
            l="";

            while(s[i]!=' ')
            {
                l=l+s[i];
                i++;
            }

            stringstream ss2(l);
            ss2>>tm;
            l="";

            char r=s[i+1];

            //cout<<con<<" ** "<<prb<<" ** "<<tm<<" ** "<<r<<endl;

            if(r=='I')
            {
                if(mp[ {con,prb}]!=-1)
                    mp[ {con,prb}]=mp[ {con,prb}]+1;
            }
            else if(r=='C')
            {
                if(mp[{con,prb}]!=-1)
                {
                    mp[ {con,prb}]=(mp[ {con,prb}]*20)+tm;
                    m[con]=m[con]+mp[ {con,prb}];
                    m2[con]++;

                    mp[{con,prb}]=-1;
                }


            }

            m2[con]=m2[con]+0;


        }

        //cout<<m2.size()<<endl;

        int n=m2.size();

        contestant a[n];

        map< int,int> :: iterator it;

        int i=0;
        for(it=m2.begin(); it!=m2.end(); it++)
        {
            int x=it->first;

            //cout<<x<<" "<<it->second<<" "<<m[x]<<endl;

            a[i].c=x;
            a[i].sol=it->second;
            a[i].pen=m[x];

            i++;
        }

        sort(a,a+n,comparator);

        for(int i=0; i<n; i++)
            cout<<a[i].c<<" "<<a[i].sol<<" "<<a[i].pen<<endl;

        if(k!=t)
            cout<<endl;



    }



    return 0;
}
