#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int count2=0,count3=0;

        while(n%2==0)
        {
            n/=2;
            count2++;
        }
        while(n%3==0)
        {
            n/=3;
            count3++;
        }

        if(n!=1 || count2>count3)
        {
            cout<<"-1"<<endl;
        }
        else
        {

            cout<<(count3-count2)+count3<<endl;
        }


    }
}
