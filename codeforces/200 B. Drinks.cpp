#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{

    double n,x,s=0;
    scanf("%lf",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%lf",&x);
        s=s+x;
    }
    printf("%.12lf",s/n);




    return 0;
}
