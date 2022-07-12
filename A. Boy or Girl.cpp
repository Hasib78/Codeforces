#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,b,j,k;
    string str;
    cin>>str;
    int count=0;
    a=str.length();
    for(i=0;i<a-1;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(str[i]==str[j])
            {
                for(k=0;k<i;k++)
                {
                    if(str[k]==str[i])
                    {
                        count--;
                        break;
                    }

                }
                count++;


            }
        }
    }
    b=a-count;
    if(b%2!=0)
    {
        cout<<"IGNORE HIM!"<<endl;

    }
    else
    {
        cout<<"CHAT WITH HER!"<<endl;
    }


}
