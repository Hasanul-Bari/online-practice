#include<bits/stdc++.h>
using namespace std;

int main()
{
    char x='%';
    string s,h;
    while(getline(cin,s))
    {
        getline(cin,h);

        int s1=0,s2=0;

        for(int i=0; i<s.length(); i++)
        {
            if(isalpha(s[i]))
            {
                if(islower(s[i]))
                    s1=s1+(s[i]-96);
                else
                    s1=s1+(s[i]-64);
            }
        }

        for(int i=0; i<h.length(); i++)
        {
            if(isalpha(h[i]))
            {
                if(islower(h[i]))
                    s2=s2+(h[i]-96);
                else
                    s2=s2+(h[i]-64);
            }
        }

        //cout<<s1<<" "<<s2<<endl;

        while(s1/10>0)
        {
            int x=s1;
            s1=0;
            while(x!=0)
            {
                s1=s1+(x%10);
                x=x/10;
            }
        }

        while(s2/10>0)
        {
            int x=s2;
            s2=0;
            while(x!=0)
            {
                s2=s2+(x%10);
                x=x/10;
            }
        }

        //cout<<s1<<" "<<s2<<endl;
        double ans;
        if(s1>=s2)
            ans=((double(s2))/(double(s1)))*100.0;
        else
            ans=(double(s1)/double(s2))*100.00;


        printf("%.2lf %c\n",ans,x);



    }

    return 0;
}
