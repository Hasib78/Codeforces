#include<stdio.h>
#include<math.h>
int main()
{
    long long int a[1000],max,kx,d,b,m,n,i,y,j,sum=0;
    double x,c;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    if(n==1)
    {
        d=a[0]+m;
        printf("%lld %lld\n",d,d);

    }
    else
    {


        max=a[0];
        for(i=1; i<n; i++)
        {
            if(max<a[i])
            {
                max=a[i];
            }
        }
        kx=m+max;
        for(i=0; i<n; i++)
        {
            b=max-a[i];
            sum=sum+b;
        }
        if(sum>=m)
        {
            printf("%lld %lld\n",max,kx);
        }
        else
        {
            c=m-sum;
            x=ceil(c/n);
            y=x+max;



            printf("%lld %lld\n",y,kx);


        }
    }


}
