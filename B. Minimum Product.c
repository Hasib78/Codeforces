#include<stdio.h>
long long int minimum(long long int a,long long int b,long long int x, long long int y, long long int n)
{
    long long int c,d,e,l;
    c=a-x;
    l=b-y;
    if(c>=n)
    {
        a=a-n;
        d=a*b;

        return d;



    }
    else
    {
        a=a-c;
        d=n-c;
        if(l<=d)
        {
            b=b-l;
            e=a*b;
            return e;
        }
        else
        {

            b=b-d;
            e=a*b;

            return e;
        }



    }

}


int main()
{
    long long int a,b,x,y,n,i,t,g,h;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld%lld%lld%lld%lld",&a,&b,&x,&y,&n);

        g=minimum(a,b,x,y,n);
        h=minimum(b,a,y,x,n);
        if(g<=h)
        {
            printf("%lld\n",g);
        }
        else
        {
            printf("%lld\n",h);

        }
    }



    return 0;
}
