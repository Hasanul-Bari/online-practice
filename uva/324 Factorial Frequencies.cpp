#include<bits/stdc++.h>
using namespace std;

void factorial(int n)
{
    int res[1000];
    int a[10]={0,0,0,0,0,0,0,0,0,0};
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

    //cout<<res_size<<endl;
    for(int i=res_size-1; i>=0; i--)
    {
        if(res[i]==0)
            a[0]++;
        else if(res[i]==1)
            a[1]++;
        else if(res[i]==2)
            a[2]++;
        else if(res[i]==3)
            a[3]++;
        else if(res[i]==4)
            a[4]++;
        else if(res[i]==5)
            a[5]++;
        else if(res[i]==6)
            a[6]++;
        else if(res[i]==7)
            a[7]++;
        else if(res[i]==8)
            a[8]++;
        else if(res[i]==9)
            a[9]++;

    }

    cout<<n<<"! --"<<endl;
    cout<<"   (0)  "<<a[0]<<"    (1)   "<<a[1]<<"    (2)   "<<a[2]<<"    (3)   "<<a[3]<<"    (4)   "<<a[4]<<endl;
    cout<<"   (5)   "<<a[5]<<"    (6)   "<<a[6]<<"    (7)   "<<a[7]<<"    (8)   "<<a[8]<<"    (9)   "<<a[9]<<endl;

}



int main()
{
    int n;
    while(cin>>n && n!=0)
    {
        factorial(n);
    }
    return 0;

}



