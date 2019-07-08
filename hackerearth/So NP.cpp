#include<bits/stdc++.h>
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m,k,a,b;
    cin>>n>>m>>k;
    map <int, vector<int> > mm;
    for(int i=0; i<m; i++)
    {
        cin>>a>>b;
        mm[a].push_back(b);
        mm[b].push_back(a);
    }

    //cout<<mm.size()<<endl;
    int y=mm.size();

    if(k>y)
        cout<<-1<<endl;
    else
        cout<<m-k<<endl;



    return 0;
}
