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



string s;
info tree[400099];

void seg(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].sum=s[b-1]-48;
        tree[node].prop=0;
        return;
    }

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    seg(left,b,mid);
    seg(right,mid+1,e);

    tree[node].sum=tree[left].sum+tree[right].sum;
    tree[node].prop=0;
}

int query(int node,int b,int e,int i,int j,int carry=0)
{
    if(i>e || j<b)
        return 0;   ///outside segment

    if(i<=b && e<=j)              ///relevant segment
        return tree[node].sum+(carry*(e-b+1));

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    int x=query(left,b,mid,i,j, carry+tree[node].prop);
    int y=query(right,mid+1,e,i,j, carry+tree[node].prop);

    return x+y;
}


void update(int node,int b,int e,int i,int j,int value)
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

    tree[node].sum=tree[left].sum+tree[right].sum;


}



int main()
{
    faster


    int t,k=1;
    cin>>t;

    while(t--)
    {


        cout<<"Case "<<k<<":"<<endl;
        k++;

        cin>>s;
        int n=s.length();
        seg(1,1,n);

        int q,i,j;
        char c;

        cin>>q;

        while(q--)
        {
            cin>>c;
            if(c=='I')
            {
                cin>>i>>j;
                update(1,1,n,i,j,1);
            }
            else
            {
                cin>>i;
                cout<<query(1,1,n,i,i)%2<<endl;
            }

        }




    }









    return 0;
}





