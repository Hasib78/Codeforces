#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x;
    cin>>a>>b;

    int i=0,count=0;

    for(;;)
    {
        count++;
        i++;
        if(a-i==0 || b-i==0)
        {
            break;
        }
    }
    if(count%2==0)
    {
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
}
