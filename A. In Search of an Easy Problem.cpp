#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    int count=0;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            count++;
        }
    }
    if(count>0)
    {
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
}
