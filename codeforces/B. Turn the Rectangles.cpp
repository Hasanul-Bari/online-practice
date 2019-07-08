#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,w,h,tw,th;
    cin>>n;

    bool c=0;
    for(int i=0; i<n; i++)
    {
        cin>>w>>h;

        if(i==0 && w>h)
            swap(w,h);

        if(i!=0)
        {
            //cout<<th<<" * "<<h<<endl;
            if(th>=h && th>=w)
            {
                if(h<w)
                    swap(w,h);
            }
            else if(th>=w && th<h)
            {
                swap(w,h);
            }
            else if(th>=h && th<w);
            else
            {
                c=1;
            }


        }

        th=h;
        tw=w;

    }
    if(c==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;





    return 0;
}
