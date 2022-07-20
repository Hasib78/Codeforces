#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,even,odd;
    cin>>n;
    if(n%2==0)
    {
        even=n/2;
        cout<<even<<endl;

    }
    else
    {
        odd=-(n+1)/2;
        cout<<odd<<endl;
    }
}
