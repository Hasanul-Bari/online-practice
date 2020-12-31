#include<bits/stdc++.h>
using namespace std;

void factorial(int n)
{
    int res[10000];
    res[0]=1;
    int res_size=1;

    for(int x=2; x<=n; x++)
    {
        int carry=0;
        for(int i=0; i<res_size; i++)
        {
            int product= res[i]*x +carry;
            res[i]=product%10;
            carry=product/10;

        }

        while(carry)
        {
            res[res_size]=carry%10;
            carry=carry/10;
            res_size++;
        }

    }

    for(int i=res_size-1; i>=0; i--)
        cout<<res[i];
    cout<<endl;



}



int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n>=8 && n<=13)
            factorial(n);
        else if(n<8 && n>=0)
            cout<<"Underflow!"<<endl;
        else if(n<0 && abs(n)%2==0)
            cout<<"Underflow!"<<endl;

        else
            cout<<"Overflow!"<<endl;





    }
    return 0;

}


