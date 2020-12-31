#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

class info
{
public:
    ll prop,sum;
};


//int a[100009];
info tree[400099];    /// size 300099 nile wa khaisi... 3*n nile wa

/*void seg(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].sum=a[b];
        return;
    }

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    seg(left,b,mid);
    seg(right,mid+1,e);

    tree[node].sum=tree[left].sum+tree[right].sum;
}*/

ll query(int node,int b,int e,int i,int j,ll carry=0)
{
    if(i>e || j<b)
        return 0;   ///outside segment

    if(i<=b && e<=j)              ///relevant segment
        return tree[node].sum+(carry*(e-b+1));

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    ll x=query(left,b,mid,i,j, carry+tree[node].prop);
    ll y=query(right,mid+1,e,i,j, carry+tree[node].prop);

    //cout<<x+y<<" ***"<<endl;

    return x+y;


}


void update(int node,int b,int e,int i,int j,ll value)
{
    if(i>e || j<b)                 ///outside segment
        return;

    if(i<=b && e<=j)              ///relevant segment
    {
        tree[node].sum=tree[node].sum +  ( (e-b+1)*value);
        tree[node].prop=tree[node].prop + value;
        return;
    }

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    update(left,b,mid,i,j,value);
    update(right,mid+1,e,i,j,value);

    tree[node].sum=tree[left].sum+tree[right].sum+( (e-b+1)*tree[node].prop );


}



int main()
{
    faster

    int n,c,t;
    cin>>t;

    while(t--)
    {

        cin>>n>>c;

        for(int i=1; i<=(4*n)+5; i++)
            tree[i].sum=0,tree[i].prop=0;

        int x,p,q;
        ll v;
        while(c--)
        {
            cin>>x;

            if(x==0)
            {
                cin>>p>>q>>v;

                update(1,1,n,p,q,v);
                //cout<<query(1,1,n,p,v)<<endl;

                /*for(int i=1; i<=3*n; i++)
                {
                    cout<<i<<"->"<<tree[i].sum<<",";
                }
                cout<<endl;*/


            }
            else
            {
                cin>>p>>q;
                cout<<query(1,1,n,p,q)<<endl;
            }
        }

    }






    return 0;
}




/*
7
4 -9 3 7 1 0 2
*/


