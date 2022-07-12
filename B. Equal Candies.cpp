#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,d,i,j;
    int c[100];
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>b;
        int sum=0;
        cin>>c[0];
        d=c[0];
        for(j=1;j<b;j++)
        {
            cin>>c[j];
            if(c[j]<d)
            {
                d=c[j];
            }

        }
        for(j=0;j<b;j++)
        {
            sum=sum+(c[j]-d);
        }
        cout<<sum<<endl;

    }
}
