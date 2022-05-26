#include<stdio.h>

void merge(long long int c[],long long int l,long long int m, int r)
{
   long long int i, j, k;
   long long int n1 = m - l + 1;
   long long int n2 = r - m;


   long long int L[n1], R[n2];


    for (i = 0; i < n1; i++)
        L[i] = c[l + i];
    for (j = 0; j < n2; j++)
        R[j] = c[m + 1 + j];


    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            c[k] = L[i];
            i++;
        }
        else
        {
            c[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        c[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        c[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(long long int c[],long long int l,long long int r)
{
    if (l < r)
    {

        long long int m = l + (r - l) / 2;

        mergesort(c, l, m);
        mergesort(c, m + 1, r);

        merge(c, l, m, r);
    }
}




int main()
{
    long long int n,x,b=0,i,j,temp;
    scanf("%lld %lld",&n,&x);
    long long int c[n],e[n];


    for(i=0; i<n; i++)
    {
        scanf("%lld",&c[i]);

    }
    if(n==1)
    {
        printf("%lld\n",c[0]*x);
    }


    else
    {
          mergesort(c,0,n-1);

        for(i=0; i<n; i++)
        {
            b=b+(x*c[i]);
            if(x>1)
            {
                x--;
            }
        }
        printf("%lld\n",b);


    }
}
