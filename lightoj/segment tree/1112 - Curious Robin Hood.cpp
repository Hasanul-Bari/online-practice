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

    tree[node]=tree[left]+tree[right];
}

int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return 0;   ///outside segment

    if(i<=b && e<=j)              ///relevant segment
        return tree[node];

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    int x=query(left,b,mid,i,j);
    int y=query(right,mid+1,e,i,j);

    return x+y;
}


void update(int node,int b,int e,int i,int value)
{
    if(i>e || i<b)                 ///outside segment
        return;

    if(i<=b && e<=i)              ///relevant segment
    {
        if(value==0)
            tree[node]=value;
        else
            tree[node]=tree[node]+value;

        return;
    }

    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);

    tree[node]=tree[left]+tree[right];


}



int main()
{
    faster

    int n,q,t,k=1;
    scanf("%d",&t);

    while(t--)
    {

        printf("Case %d:\n",k);
        k++;

        scanf("%d%d",&n,&q);

        for(int i=1; i<=n; i++)
            scanf("%d",&a[i]);

        seg(1,1,n);

        int x,i,j,v;
        while(q--)
        {
            scanf("%d",&x);

            if(x==1)
            {
                scanf("%d",&i);
                //cout<<query(1,1,n,i+1,i+1)<<endl;

                printf("%d\n",query(1,1,n,i+1,i+1));
                update(1,1,n,i+1,0);
            }
            else if(x==2)
            {
                scanf("%d%d",&i,&v);
                update(1,1,n,i+1,v);
            }
            else
            {
                scanf("%d%d",&i,&j);
                //cout<<query(1,1,n,i+1,j+1)<<endl;
                printf("%d\n",query(1,1,n,i+1,j+1));
            }
        }


    }





    return 0;
}




