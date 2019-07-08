#include<bits/stdc++.h>
using namespace std;

int pattern_matching(string P,string T)
{
    int k=0,INDEX,c=0,l;
    int max=T.length()-P.length();

    while(k<=max)
    {
        c=0;
        for(l=0; l<P.length(); l++)
        {
            if(P[l]!=T[k+l])
            {
                k++;
                break;
            }


        }
        if(l==P.length())
        {
            INDEX=k+1;
            return INDEX;
        }

    }
    INDEX=0;
    return INDEX;

}


int main()
{
    int t,q;
    scanf("%d ",&t);
    string s,h;
    for(int j=0; j<t; j++)
    {
        cin>>s>>q;
        for(int i=0; i<q; i++)
        {
            cin>>h;
            int x=pattern_matching(h,s);
           // cout<<x<<endl;

            if(x==0)
                cout<<"n"<<endl;
            else
                cout<<"y"<<endl;

        }


    }
    return 0;
}

