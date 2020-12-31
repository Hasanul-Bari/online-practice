#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;

    queue<int> q;

    q.push(n);

    while(q.empty()!=1)
    {
        int x=q.front();
        q.pop();
        if(x-a==b || x-a==c)
        {

        }
    }

}
