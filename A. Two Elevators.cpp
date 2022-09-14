#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        x=abs(a-1);
        y=abs(b-c);
        z=y+abs(c-1);
        if(x<z)
        {
            cout<<'1'<<endl;
        }
        else if(x>z)
        {
            cout<<'2'<<endl;
        }
        else

        {
            cout<<'3'<<endl;
        }

    }
}
