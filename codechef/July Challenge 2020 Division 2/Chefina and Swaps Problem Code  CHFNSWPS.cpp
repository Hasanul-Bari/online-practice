#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int t,n,x;
    cin>>t;

    while(t--)
    {
        cin>>n;

        int a[n];

        map<int,int> m;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }

        vector<int> v2,v1;

        int mn=INT_MAX;

        for(int i=0; i<n; i++)
        {
            cin>>x;

            if(m[x]>0)
            {
                m[x]--;
                v1.pb(x);

                mn=min(x,mn);

            }
            else
                v2.pb(x);
        }

        sort(v1.begin(),v1.end());
        sort(a,a+n);

        for(int i=0,j=0; i<n; i++)
        {

            if(j==v1.size())
                break;
            if(a[i]==v1[j])
            {
                j++;
                a[i]=0;
            }

        }

        v1.clear();

        for(int i=0; i<n; i++)
        {
            if(a[i]!=0)
                v1.pb(a[i]);
        }


        //cout<<v1.size()<<" ** "<<v2.size()<<endl;

        //cout<<mn<<" mn"<<endl;

        if(v1.size()%2!=0)
            cout<<-1<<endl;
        else if(v1.size()==0)
            cout<<0<<endl;
        else
        {
            bool hp=true;
            ll s=0;

            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end());

            for(int i=0,j=v1.size()-1; i<v1.size()-1; i=i+2,j=j-2)
            {
                if(i==0)
                {
                    if(v1[i]==v1[i+1] && v2[j]==v2[j-1])
                    {
                        int z=min(v1[i],v2[j]);


                        if(mn==INT_MAX)
                            s=s+z;
                        else if(z<=mn*2)
                            s=s+z;
                        else
                            s=s+(mn*2);

                        mn=min(mn,z);
                    }
                    else
                    {
                        hp=false;
                        break;
                    }

                }
                else
                {
                    if(v1[i]==v1[i+1] && v2[j]==v2[j-1])
                    {
                        int z=min(v1[i],v2[j]);

                        if(z<=mn*2)
                            s=s+z;
                        else
                            s=s+(mn*2);

                        mn=min(mn,z);
                    }
                    else
                    {
                        hp=false;
                        break;
                    }
                }



            }



            ll ss=0;

            for(int i=0,j=v1.size()-1; i<v1.size()-1; i=i+2,j=j-2)
            {
                if(i==0)
                {
                    if(v2[i]==v2[i+1] && v1[j]==v1[j-1])
                    {
                        int z=min(v2[i],v1[j]);


                        if(mn==INT_MAX)
                            ss=ss+z;
                        else if(z<=mn*2)
                            ss=ss+z;
                        else
                            ss=ss+(mn*2);

                        mn=min(mn,z);
                    }
                    else
                    {
                        hp=false;
                        break;
                    }

                }
                else
                {
                    if(v2[i]==v2[i+1] && v1[j]==v1[j-1])
                    {
                        int z=min(v2[i],v1[j]);

                        if(z<=mn*2)
                            ss=ss+z;
                        else
                            ss=ss+(mn*2);

                        mn=min(mn,z);
                    }
                    else
                    {
                        hp=false;
                        break;
                    }
                }



            }

            if(hp==false)
                cout<<-1<<endl;
            else
                cout<<min(ss,s)<<endl;
        }



    }






    return 0;
}
