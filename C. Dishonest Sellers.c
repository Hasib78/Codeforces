#include<stdio.h>
int main()
{
    long long int n,k,i,j,x,y,sum=0,add=0,count=0,l=0,temp,temp1,temp2;
    scanf("%lld %lld",&n,&k);
    long long int a[n],b[n],c[n],d[n],e[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%lld",&b[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]<=b[i])
        {
            sum=sum+a[i];
            count++;
        }
        else
        {
            add=add+b[i];
            c[l]=a[i]-b[i];
            e[l]=a[i];
            d[l]=b[i];
            l++;
        }


    }
    for(i=0; i<n-1; i++)
    {
        for(j=1+i; j<n; j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                temp1=d[i];
                temp2=e[i];
                c[i]=c[j];
                d[i]=d[j];
                e[i]=e[j];
                c[j]=temp;
                d[j]=temp1;
                e[j]=temp2;
            }
        }
    }
    if(count<k)
    {
        y=k-count;
        for(i=0; i<y; i++)
        {
            sum=sum+e[i];
            add=add-d[i];
        }
        x=sum+add;
        printf("%lld\n",x);
    }
    else
    {
        x=sum+add;
        printf("%lld\n",x);
    }

}
