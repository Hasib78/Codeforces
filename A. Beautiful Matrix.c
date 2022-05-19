#include<stdio.h>
int main()
{
    int a[10][10],b,c,d,e,f,g,w,x,y,z,i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                b=i;
                c=j;
            }
        }

    }
    if(b>=3 && c>=3)
    {
        d=b-3;
        e=c-3;
        printf("%d\n",d+e);

    }
    else if(b<=3 && c<=3)
    {
        f=3-b;
        g=3-c;
        printf("%d\n",f+g);

    }
    else if(b<=3 && c>=3)
    {
        w=3-b;
        x=c-3;
        printf("%d\n",w+x);
    }
    else if(b>=3 && c<=3)
    {
        y=b-3;
        z=3-c;
        printf("%d\n",y+z);
    }
    return 0;
}
