#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,i,j;
    string str;

    cin>>x;
    cin>>str;
    int coun=0;
    for(i=0;i<x-1;i++)
    {
        if(str[i]==str[i+1])
        {
            coun++;
        }
    }
    cout<<coun<<endl;
}
