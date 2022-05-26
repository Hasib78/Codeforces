#include<stdio.h>

int binary(int low,int high,int c[],int b)
{
    int pos;
    if(low>high)

        pos=0;

    else
    {
        int mid=(low+high)/2;
        if(c[mid]==b)
        {
            pos=mid+1;
        }
        else if(b<c[0])
        {
            pos=1;
        }
        else if(b>c[mid] && b<c[mid+1])
        {
            pos=mid+2;
        }
        else if(b<c[mid])
        {
            pos=binary(low,mid-1,c,b);
        }
        else
        {
            pos=binary(mid+1,high,c,b);

        }
    }
    return pos;
}

int main()
{
    int n,a[100],m,b,c[100000],d,i,j,sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        c[i]=sum;
    }
    scanf("%d",&m);
    for(j=0; j<m; j++)
    {
        scanf("%d",&b);
        d=binary(0,n-1,c,b);
        printf("%d\n",d);


    }


}

