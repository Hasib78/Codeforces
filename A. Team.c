#include<stdio.h>
int main()
{
    int a,b,c,d,count=0,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %d %d",&b,&c,&d);
        if((b==1 && c==1) || (b==1 && c==1 && d==1) || (c==1 && d==1) || (b==1 && d==1))
        {
            count++;
        }

    }
    printf("%d\n",count);
    return 0;
}
