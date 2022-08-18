#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        vector<int>result;
        int x=1,y,z;
        cin>>n;
        while(n)
        {
            x=x*10;
            y=n%x;
            if(y)
            {
                result.push_back(y);
            }
            n-=y;
        }
        z=result.size();
        cout<<z<<endl;
        for(int i=0;i<z;i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<endl;

    }
}
