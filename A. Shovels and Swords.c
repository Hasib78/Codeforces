#include<stdio.h>

int main()
{
    unsigned long long int b,c,d;
    int a,i;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {

        scanf("%llu%llu",&b,&c);
        if(b>=2*c)
        {
            printf("%llu\n",c);
        }
        else if(c>=2*b)
        {
            printf("%llu\n",b);

        }
        else{

        d=(b+c)/3;
        printf("%llu\n",d);

        }
    }

    return 0;
}
