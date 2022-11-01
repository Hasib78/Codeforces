#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        string s;
        char ch='a';
        int count=1;
        for(i=0; i<n; i++,count++)
        {


            s.push_back(ch);
            ch++;
            if(count==b)
            {
                ch='a';
                count=0;
            }
            if(ch>'z')
            {
                ch='a';
            }

        }
        cout<<s<<endl;
    }
}

//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//
//	int t;
//	cin >> t;
//	while (t--) {
//		int n, a, b;
//		cin >> n >> a >> b;
//		for (int i = 0; i < n; ++i) {
//			cout << char('a'+i%b);//n=7,a=5,b=3;
//		}                         //i%b=0%3=0
//		cout << endl;             //1%3=1
//	}                             //2%3=2
//                                  //3%3=0
//	return 0;
//
//}
