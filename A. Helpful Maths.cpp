#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,i,j;
    string str;
    getline(cin,str);
    for(i=0; i<str.size(); i=i+2)
    {
        for(j=0; j<str.size()-1; j=j+2)
        {
            if(str[j]>str[j+2])
            {
                swap(str[j],str[j+2]);
            }
        }
    }
    cout<<str<<endl;
}






















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































