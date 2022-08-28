#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,y,i,a,b,count;
    cin>>n>>k;
    a=5-k;
    count=0;
    while(n--)
    {
        cin>>y;
        if(y<=a)
        {
            count++;
        }
    }
    b=count/3;
    cout<<b<<endl;

}
