#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,i,h,j=0,k=0,l=0,x[5005],y[5005],z[5005];
    scanf("%d",&a);


    for(i=0; i<a; i++)
    {
        scanf("%d",&b);
        if(b==1)
        {
            x[j]=i+1;
            j++;
        }
        else if(b==2)
        {
            y[k]=i+1;
            k++;
        }
        else if(b==3)
        {
            z[l]=i+1;
            l++;
        }
    }
    if(j==0 || k==0 || l==0)
    {
        printf("0\n");
        exit(0);
    }
    else if(j<=k && j<=l)
    {
        printf("%d\n",j);
        h=j;


    }
    else if(k<=j && k<=l)
    {
        printf("%d\n",k);
        h=k;


    }
    else
    {
        printf("%d\n",l);
        h=l;

    }
    for(i=0; i<h; i++)
    {
        printf("%d %d %d\n",x[i],y[i],z[i]);
    }

    return 0;
}
