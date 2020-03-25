#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int a[100009];
int tree[400099];

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

    tree[node]=tree[left]*tree[right];
}

int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return 1;   ///outside segment

    if(i<=b && e<=j)              ///relevant segment
        return tree[node];

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    int x=query(left,b,mid,i,j);
    int y=query(right,mid+1,e,i,j);

    return x*y;
}


void update(int node,int b,int e,int i,int value)
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

    tree[node]=tree[left]*tree[right];


}



int main()
{
    faster

    int n,q;
    while(cin>>n>>q)
    {


        for(int i=1; i<=n; i++)
        {
            cin>>a[i];

            if(a[i]<0)
                a[i]=-1;
            if(a[i]>0)
                a[i]=1;
        }


        seg(1,1,n);

        char c;
        int i,j;
        vector<char> v;
        while(q--)
        {
            cin>>c>>i>>j;

            if(c=='C')
            {
                if(j<0)
                    j=-1;
                if(j>0)
                    j=1;

                update(1,1,n,i,j);
                /*for(int i=1; i<=4*n; i++)
                    cout<<tree[i]<<" ";
                cout<<endl;*/

            }
            else
            {
                //cout<<query(1,1,n,i,j)<<endl;
                int x=query(1,1,n,i,j);

                if(x==0)
                    v.pb('0');
                else if(x>0)
                    v.pb('+');
                else if(x<0)
                    v.pb('-');
            }

        }

        for(int i=0; i<v.size(); i++)
            cout<<v[i];
        cout<<endl;

    }


    return 0;
}

