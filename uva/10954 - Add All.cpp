#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,x,y,sum=0;
    while(cin>>n && n!=0)
    {

        priority_queue <int, vector<int>, greater<int> > q;
        while(n--)
        {
            cin>>x;
            q.push(x);

        }
        //x=q.top();
        //q.pop();
        sum=0;

        while(1)
        {

            x=q.top();
            q.pop();
            y=q.top();
            q.pop();


            sum=sum+(x+y);
            if(q.size()==0)
                break;
            else
                q.push(x+y);

        }

        cout<<sum<<endl;
    }
    return 0;
}
