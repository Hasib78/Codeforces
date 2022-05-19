#include<stdio.h>
int main()
{
    int a,b[1001],c,i,j,temp;
    scanf("%d",&a);



    for(i=0; i<a; i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0; i<a-1; i++)
    {
        for(j=i+1; j<a; j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    if(a%2!=0)
    {
        c=(a/2)+1;
        printf("%d\n",b[c-1]);
    }
    else
    {
        c=a/2;
        printf("%d\n",b[c-1]);
    }

    return 0;

}
