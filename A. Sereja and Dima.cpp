#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{

    int t,n,i,s=0,d=0;
    cin>>t;
    deque<int>v;

    while(t--)
    {

        cin>>n;
        v.push_back(n);
    }

    int a=v.size();
    for(i=0; i<a ; i++)
    {

        if(i%2==0)
        {
            if(v.front()>=v.back())
            {

                s=s+v.front();
                v.pop_front();
            }
            else
            {
                s=s+v.back();
                v.pop_back();
            }
        }
        else
        {
            if(v.front() >= v.back())
            {
                d=d+v.front();
                v.pop_front();
            }
            else
            {
                d=d+v.back();
                v.pop_back();
            }


        }


    }
    cout<<s<<" "<<d<<endl;

}
