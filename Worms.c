#include<stdio.h>

int binarysearch(int low,int high,int q,int s[])
{
    int index;
    if(low>high)
        index=0;
    else
    {
        int mid=(low+high)/2;
        if(q==s[mid])
            index=mid+1;
        else
        {
            if(q<s[0])
                return 1;
            if((q>s[mid])&&(q<s[mid+1]))
                index=mid+2;
            else if(q<s[mid])
                index=binarysearch(low,mid-1,q,s);
            else
                index=binarysearch(mid+1,high,q,s);
        }
    }
    return index;
}
int main()
{
    int n,m,i;
    scanf("%d",&n);
    int a[n],sum=0,s[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
              sum=sum+a[i];
              s[i]=sum;
    }
    scanf("%d",&m);
    while(m--)
    {
        int p,q;
        scanf("%d",&q);
        p=binarysearch(0,n,q,s);
        printf("%d\n",p);
    }
    return 0;
}
