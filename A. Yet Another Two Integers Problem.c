#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,d,f,n,i,j;
    double c,e;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld%lld",&a,&b);
        if(a==b)
        {
            printf("0\n");
        }
        else if(a<b)
        {
            c=b-a;
            d=ceil(c/10);
            printf("%lld\n",d);


        }
        else
        {

            e=a-b;
            f=ceil(e/10);
            printf("%lld\n",f);

        }

    }
    return 0;



}

