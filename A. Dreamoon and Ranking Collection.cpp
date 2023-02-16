#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,a,j,i;

    cin>>t;

    while(t--)
    {
        cin>>n>>x;
        vector<int>v(220,0);
        for(i=0;i<n;i++)
        {
            cin>>a;
            v[a]=1;
        }

        j=1;
        while(x)
        {
            if(v[j]==0)
            {
                v[j]=1;
                x--;
            }
            j++;
        }

        int count=0;

        i=1;
        while(v[i])
        {
            i++;
           count++;
        }
        cout<<count<<endl;



    }


}
