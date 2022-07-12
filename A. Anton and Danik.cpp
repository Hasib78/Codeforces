#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a=0,d=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='A')
        {
            a++;
        }
        else{
            d++;
        }
    }
    a>d?cout<<"Anton"<<endl:a==d?cout<<"Friendship"<<endl:cout<<"Danik"<<endl;
}
