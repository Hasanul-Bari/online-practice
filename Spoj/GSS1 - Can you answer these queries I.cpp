#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int a[50009];
ll tree[200036];
ll mx;
void seg(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=a[b];
        return;
    }

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    seg(left,b,mid);
    seg(right,mid+1,e);

    tree[node]=tree[left]+tree[right];
}

ll query(int node,int b,int e,int i,int j)
{
    cout<<i<<" i j "<<j<<endl;

    if(i>e || j<b)
        return 0;   ///outside segment

    if(i<=b && e<=j)              ///relevant segment
    {
        if(mx<tree[node])
            mx=tree[node];

        cout<<tree[node]<<" tree node "<<endl;

        return tree[node];
    }

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    ll x=query(left,b,mid,i,j);
    ll y=query(right,mid+1,e,i,j);

    if(mx<x)
        mx=x;

    if(mx<y)
        mx=y;

    if(mx<x+y)
        mx=x;

    cout<<x<<" x "<<b<<" "<<mid<<endl;
    cout<<x<<" y "<<mid+1<<" "<<e<<endl;

    return x+y;
}


/*void update(int node,int b,int e,int i,int value)
{
    if(i>e || i<b)                 ///outside segment
        return;

    if(i<=b && e<=i)              ///relevant segment
    {
        tree[node]=value;
        return;
    }

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);

    tree[node]=tree[left]+tree[right];


}*/



int main()
{
    faster

    int n,q,x,y,t;


    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }


    seg(1,1,n);

    cin>>q;
    while(q--)
    {
        cin>>x>>y;
        cout<<query(1,1,n,x,y)<<endl;
        //cout<<mx<<endl;

        for(int i=1; i<=4*n; i++)
            cout<<tree[i]<<" ";
        cout<<endl;

    }


    return 0;
}



