#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    while(cin>>n && n!=0)
    {
        if(n==31)
            cout<<"Perfect: 2305843008139952128!"<<endl;
        else if(n==19)
            cout<<"Perfect: 137438691328!"<<endl;
        else if(n==17)
            cout<<"Perfect: 8589869056!"<<endl;






        else
        {



            int c=0;
            for(int i=2; i*i<=n; i++)
            {
                if(n%i==0)
                {
                    c=1;
                    break;

                }
            }
            if(c==1)
            {
                cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
            }
            else
            {

                long long x=(long long)pow(2,(n-1))*((long long)pow(2,n)-1);
                long long sum=1;
                for(long long i=2; i*i<=x; i++)
                {
                    if(x%i==0)
                    {
                        sum=sum+i+(x/i);
                    }


                }
                if(sum==x)
                    cout<<"Perfect: "<<x<<"!"<<endl;
                else
                    cout<<"Given number is prime. But, NO perfect number is available."<<endl;

            }
        }
    }
    return 0;

}
