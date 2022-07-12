#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,x,y,z,i,j,k,m;
    scanf("%lld",&a);
    for(i=0; i<a; i++)
    {
        scanf("%lld %lld",&b,&c);
        x=0,y=1,i=0,j=0,k=0,z=0,d=0,e=0,m=1;

        if(b==c)
        {
            printf("0\n");
        }
        else if(c>b)
        {
            for(k=0; k<3; k++)
            {
                b=b*2;
                if(b==c)
                {
                    printf("1\n");
                    x++;
                    break;
                }
            }
            d=c/b;
            if(x==0)
            {
                d=c/b;
                if(d>=2)
                {


                    while(d%8==0)
                    {
                        d=d/8;
                        y++;
                    }
                    if(d==2 || d==4)
                    {
                        printf("%lld\n",y+1);
                    }
                    else if(d==1)
                    {
                        printf("%lld\n",y);
                    }
                }
                else
                {
                    printf("-1\n");
                }


            }

        }
        else if(c<b)
        {
            for(j=0; j<3; j++)
            {
                b=b/2;
                if(b==c)
                {
                    printf("1\n");
                    z++;
                    break;
                }
            }
            if(z==0)
            {
                e=b/c;
                if(e>=2)
                {


                    while(e%8==0)
                    {
                        e=e/8;
                        z++;
                    }
                    if(e==2 || e==4)
                    {
                        printf("%lld\n",m+1);
                    }
                    else if(e==1)
                    {
                        printf("%lld\n",m);
                    }
                }
                else
                {
                    printf("-1\n");
                }
            }
        }
    }
}
