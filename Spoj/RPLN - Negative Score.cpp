#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

ll a[1000009];
ll tree[4000099];

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

    tree[node]=min(tree[left],tree[right]);
}

ll query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return 1000000003;   ///outside segment

    if(i<=b && e<=j)              ///relevant segment
        return tree[node];

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    ll x=query(left,b,mid,i,j);
    ll y=query(right,mid+1,e,i,j);

    return min(x,y);
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
    cin>>t;
    for(int k=1; k<=t; k++)
    {

        cin>>n>>q;

        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }


        seg(1,1,n);
        cout<<"Scenario #"<<k<<":"<<endl;
        while(q--)
        {
            cin>>x>>y;
            if(x>y)
                swap(x,y);

            cout<<query(1,1,n,x,y)<<endl;

        }

    }










    return 0;
}



