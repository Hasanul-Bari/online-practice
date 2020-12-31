#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int one,two,three,four;
    one=two=three=four=0;

    for(int i=0; i<n; i++)
    {
        if(a[i]==4)
            four++;
        else if(a[i]==3)
            three++;
        else if(a[i]==2)
            two++;
        else if(a[i]==1)
            one++;
    }

    int c=four,ct,rem_three=0,rem_one=0;

    if(three>one)
    {
        c=c+one;
        rem_three=three-one;
        c=c+rem_three;
    }

    else if(three<one)
    {
        c=c+three;
        rem_one=three-one;
    }
    else if(three==one)
    {
        c=c+three;

    }

    if(two==rem_one)
    {
        c=c+two;
    }
    else if(two>rem_one)
    {
        c=c+two;
        rem_two=two-rem_one;
        c
    }






}
