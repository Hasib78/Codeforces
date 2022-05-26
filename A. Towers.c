#include<stdio.h>
int main()
{
    int a,b=1,n,x[1000],i,j,temp,c=1,count=0;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0; i<a-1; i++)
    {
        for(j=i+1; j<a; j++)
        {
            if(x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    n=a;
    for(i=0; i<a; i++)
    {
        if(x[i]==x[i+1])
        {
            b++;
            count++;


        }
        else
        {
            if(b>c)
            {

                c=b;

            }
            if(count>0)
            {

                n=n-count;
                count=0;
            }
            b=1;


        }


    }
    printf("%d %d\n",c,n);


    return 0;
}
