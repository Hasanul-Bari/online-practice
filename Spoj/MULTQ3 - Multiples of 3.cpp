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
    ll prop,sum0,sum1,sum2;
};


int a[10000];
info tree[30000];

void seg(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].sum0=1;
        return;
    }

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    seg(left,b,mid);
    seg(right,mid+1,e);

    tree[node].sum0=tree[left].sum0+tree[right].sum0;
}



int query(int node,int b,int e,int i,int j,int carry=0)
{
    if(i>e || j<b)
        return 0;   ///outside segment

    if(i<=b && e<=j)              ///relevant segment
        return tree[node].sum0;

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    int x=query(left,b,mid,i,j, carry+tree[node].prop);
    int y=query(right,mid+1,e,i,j, carry+tree[node].prop);

    return x+y;
}


void update(int node,int b,int e,int i,int j,int value)
{
    cout<<"node "<<node<<" "<<b<<" "<<e<<endl;

    if(i>e || j<b)                 ///outside segment
        return;

    if(i<=b && e<=j)              ///relevant segment
    {
        /*tree[node].sum=tree[node].sum +  ( (e-b+1)*value);
        tree[node].prop=tree[node].prop + value;*/

        ll temp= tree[node].sum0;
        tree[node].sum0=tree[node].sum2;
        tree[node].sum2=tree[node].sum1;
        tree[node].sum1=temp;


        return;
    }

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    update(left,b,mid,i,j,value);
    update(right,mid+1,e,i,j,value);

    tree[node].sum0=tree[left].sum0+tree[right].sum0;
    tree[node].sum1=tree[left].sum1+tree[right].sum1;
    tree[node].sum2=tree[left].sum2+tree[right].sum2;


}



int main()
{
    faster

    int n,q,x,i,j;
    cin>>n>>q;

    seg(1,1,n);

    /*for(int i=1; i<=3*n; i++)
    {
        cout<<i<<"->"<<tree[i].sum0<<",";
    }
    cout<<endl;*/

    while(q--)
    {
        cin>>x>>i>>j;

        if(x==0)
        {
            i++,j++;
            update(1,1,n,i,j,1);
            for(int i=1; i<=3*n; i++)
            {
                cout<<i<<"->"<<tree[i].sum0<<" "<<tree[i].sum1<<" "<<tree[i].sum2<<endl;
            }
            cout<<endl;
        }
        else
        {
            i++,j++;
            cout<<query(1,1,n,i,j)<<endl;
            for(int i=1; i<=3*n; i++)
            {
                cout<<i<<"->"<<tree[i].sum0<<" "<<tree[i].sum1<<" "<<tree[i].sum2<<endl;
            }
            cout<<endl;
        }
    }








    return 0;
}




