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
    int n,t,x;

    while(cin>>n)
    {
        stack<int> st;
        queue<int> q;
        priority_queue<int> pq;

        bool c1=true,c2=true,c3=true;

        for(int i=0; i<n; i++)
        {
            cin>>t>>x;
            if(t==1)
            {
                st.push(x);
                q.push(x);
                pq.push(x);
            }
            else
            {
                if(st.empty()!=true)
                {
                    if(x!=st.top())
                        c1=false;
                    st.pop();;
                }
                else
                    c1=false;

                if(q.empty()!=true)
                {
                    if(x!=q.front())
                        c2=false;
                    q.pop();;
                }
                else
                    c2=false;

                if(pq.empty()!=true)
                {
                    if(x!=pq.top())
                        c3=false;
                    pq.pop();;
                }
                else
                    c3=false;

                //cout<<st.top()<<" "<<q.front()<<" "<<pq.top()<<endl;

            }
        }

        //cout<<c1<<" "<<c2<<" "<<c3<<endl;

        if(c1==false && c2==false && c3==false)
            cout<<"impossible"<<endl;
        else if(c1==true && c2==false && c3==false)
            cout<<"stack"<<endl;
        else if(c1==false && c2==true && c3==false)
            cout<<"queue"<<endl;
        else if(c1==false && c2==false && c3==true)
            cout<<"priority queue"<<endl;
        else
            cout<<"not sure"<<endl;



    }




    return 0;
}
