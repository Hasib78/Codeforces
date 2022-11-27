#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;

    string str;
    int arr[1000],i,j;
    int arr1[]= {113,119,101,114,116,121,117,105,111,112,97,115,100,102,
                 103,104,106,107,108,59,122,120,99,118,98,110,109,44,46,47
                };

    cin>>a;
    cin>>str;

    if(a=='R')
    {
        for(i=0; i<str.size(); i++)
        {
            arr[i]=str[i];
        }

        for(i=0; i<str.size(); i++)
        {
            for(j=0; j<30; j++)
            {
                if(arr[i]==arr1[j])
                {
                    arr[i]=arr1[j-1];
                    break;
                }

            }

        }

        for(i=0; i<str.size(); i++)
        {
            str[i]=arr[i];
        }

        cout<<str<<endl;
    }
    else
    {
        for(i=0; i<str.size(); i++)
        {
            arr[i]=str[i];
        }

        for(i=0; i<str.size(); i++)
        {
            for(j=0; j<30; j++)
            {
                if(arr[i]==arr1[j])
                {
                    arr[i]=arr1[j+1];
                    break;
                }

            }

        }

        for(i=0; i<str.size(); i++)
        {
            str[i]=arr[i];
        }

        cout<<str<<endl;
    }
}
