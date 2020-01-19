#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    //faster

    int n;

    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n))
    {
        if(n==0)
            break;

        ll s=0;

        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                if(i==n/i)
                    s=s+i;
                else
                    s=s+i+(n/i);

                //cout<<i<<" "<<n/i<<endl;
            }
        }
        if(n!=1)
            s++;

        //cout<<s<<endl;

        if(s==n)
            printf("%5d  PERFECT\n",n);
        else if(s<n)
            printf("%5d  DEFICIENT\n",n);
        else
            printf("%5d  ABUNDANT\n",n);
    }

    printf("END OF OUTPUT\n");




    return 0;
}
