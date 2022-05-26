#include<stdio.h>
int main()
{
    long long int a,b,t,i,temp;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld",&a,&b);
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if((a+b)%3==0 && a*2>=b)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
}

