#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

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
        map<string,int> m;
        map<string,int> :: iterator it;

        int c=0;

        while(getline(cin,s))
        {


            //cout<<s<<endl;

            if(s=="")
            break;

            m[s]++;
            c++;
            //cout<<c<<endl;
        }

        //cout<<c<<endl;

        for(it=m.begin(); it!=m.end(); it++)
        {
            int x=it->second;

            double z=(100.0/(double)c)*(double)x;

            cout<<it->first<<" ";
            printf("%0.4lf\n",z);
        }
        if(k!=t)
            cout<<endl;




    }




    return 0;
}
