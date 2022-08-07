#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n<=1399?cout<<"Division 4"<<endl:n>=1900?cout<<"Division 1"<<endl:
        n<=1899 && n>=1600?cout<<"Division 2"<<endl:
        cout<<"Division 3"<<endl;
    }
}
