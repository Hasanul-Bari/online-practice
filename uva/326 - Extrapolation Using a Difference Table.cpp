#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,k;
    while(cin>>n && n!=0)
    {

        long long y[n][n];

        for(int i=0; i<n; i++)
        {
            cin>>y[i][0];
        }
        cin>>k;

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n - i; j++)
                y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
        }

        /*cout<<endl<<"Forward diffference table"<<endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i; j++)
                cout<< y[i][j]<<"     ";

            cout << endl;
        }*/


        vector<long long> v;

        for (int i=n-1,j = 0; j < n - i,i>=0; j++,i--)
        {
            //cout<< y[i][j]<<"     ";
            v.push_back(y[i][j]);

        }

        //cout<<endl<<endl;
        for(int j=0; j<k; j++)
        {

            for(int i=v.size()-2; i>=0; i--)
            {
                v[i]=v[i]+v[i+1];
            }
        }

        cout<<"Term "<<n+k<<" of the sequence is "<<v[0]<<endl;


    }



    return 0;
}

