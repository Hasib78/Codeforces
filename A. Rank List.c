#include<stdio.h>
int main()
{
    int n,k,i,j,a[50],b[50],temp,temp1;
    scanf("%d %d",&n,&k);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=1+i; j<n; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                temp1=b[i];
                a[i]=a[j];
                b[i]=b[j];
                a[j]=temp;
                b[j]=temp1;
            }
        }
    }
    j=0;
    for(i=0; i<n; i++)
    {
        if(a[k-1]==a[i])
        {
            c[j]=b[i];
            j++;
            count++;
        }

    }
    x=sizeof(c);
    if(count=0)
    {
        printf("1\n");
    }
    else
    {
        for(i=0; i<x-1; i++)
        {
            for(j=1+i; j<x; j++)
            {
                if(c[i]>c[j])
                {
                    y=c[i];
                    c[i]=c[j];
                    c[j]=y;
                }
            }
        }
        if(c[k-])
    }
}
