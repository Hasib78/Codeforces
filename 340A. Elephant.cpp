#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,i;
    cin>>a;
    int count=0;
    if(a<=5)
    {
        cout<<"1"<<endl;
    }
    else{
        for(i=5;i<a;i+=5)
        {
            count++;
        }
        cout<<count+1<<endl;
    }

}
