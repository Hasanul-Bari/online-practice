#include<bits/stdc++.h>
using  namespace std;

int main()
{
    int x;

    vector<int> a;
    while(cin>>x && x!=0)
    {
        a.push_back(x);
        while(cin>>x && x!=0)
        {
            a.push_back(x);
        }

        int max=a[0],k=0;
        for(int i=0; i<a.size(); i++)
            if(a[i]>max)
                max=a[i];
        //cout<<max<<endl;
        for(int i=max; i>1; i--)
        {
            int c=0;
            for(int j=1; j<a.size(); j++)
            {
                if( (((a[j]%i)+i)%i) == (((a[j-1]%i)+i)%i))
                {
                    c++;
                    //cout<<c<<" ";
                }

            }
            if(c==a.size()-1)
            {
                k=1;
                cout<<i<<endl;
                break;
            }



            //a.clear();

        }
        if(k==0)
            cout<<1<<endl;
        a.clear();

    }
    return 0;
}
