#include<bits/stdc++.h>
using namespace std;

#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define PI  acos(-1)
#define ll           long long
#define ull        unsigned long long
#define pb        push_back

int main()
{
    faster

    int n,x,t,o=1;
    cin>>t;

    while(t--)
    {
        cout<<"Case "<<o<<": ";
        o++;
        cin>>n;


        int nn=n,z=0,mx;
        map<int,int> m;
        vector<char> v,v1;

        for(int i=0 ; i<n; i++)
        {
            cin>>x;
            m[x]++;


            if(i==0)
                mx=x;
            else if(mx<x)
                mx=x;



        }

        if(n%2!=0)
            cout<<"invalid"<<endl;
        else
        {

            z=m[0];
            bool hp=true;

            for(int i=1; i<=z-1; i++)
            {
                //cout<<"Enter"<<endl;
                if(m[1]>0)
                {
                    m[1]--;
                    nn=nn-2;
                    v1.pb('(');
                    v1.pb(')');


                }
                else
                {
                    hp=false;
                    break;
                }
            }

            int k=1;
            //cout<<nn<<endl;

            if(hp==false || z==0)
            {
                cout<<"invalid"<<endl;
            }
            else
            {
                hp=true;
                if(m[1]>0)
                {
                    //cout<<"("<<endl;
                    v.pb('(');
                    m[1]--;
                    m[0]--;
                    nn--,nn--;
                }
                else
                {
                    hp=false;
                }



                while(nn>0)
                {
                    if(hp==false)
                        break;

                    if(m[k+1]>0)
                    {
                        //cout<<"("<<endl;
                        v.pb('(');
                        m[k+1]--;
                        k=k+1;
                    }
                    else if(m[k-1]>0 && k-1!=0)
                    {
                        //cout<<")"<<endl;
                        v.pb(')');
                        m[k-1]--;
                        k=k-1;
                    }
                    else
                    {
                        hp=false;
                        break;
                    }
                    nn--;
                }

                v.pb(')');

                if(hp==false)
                {
                    cout<<"invalid"<<endl;
                }
                else
                {
                    for(int i=0; i<v.size(); i++)
                        cout<<v[i];
                    for(int i=0; i<v1.size(); i++)
                        cout<<v1[i];
                    cout<<endl;
                }



            }
        }



    }



    return 0;
}



