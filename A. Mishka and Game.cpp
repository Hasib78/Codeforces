#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    int count=0,count1=0;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
        {
            count++;
        }
        else if(a<b)
        {
            count1++;
        }
    }
    count>count1?cout<<"Mishka"<<endl:count<count1?cout<<"Chris"<<endl:cout<<"Friendship is magic!^^"<<endl;
}
