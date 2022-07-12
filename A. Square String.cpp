#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,j,b,c,d,i,count;
    char a[1000];

    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a;
        count=0;
        b=strlen(a);
        c=b/2;
        d=c;
        if(b%2!=0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            for(j=0;j<d;j++)
            {
                if(a[j]==a[c])
                {
                    count++;

                }
                else{
                    cout<<"No"<<endl;
                    break;
                }
                c++;
            }
            if(count==d)
            {
                cout<<"Yes"<<endl;
            }
        }
    }
}
