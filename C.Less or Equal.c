#include<stdio.h>
#include<stdlib.h>
void merge(long long int arr[],long long int l,long long int m,long long int r)
{
    long long int i, j, k;
    long long int n1 = m - l + 1;
    long long int n2 = r - m;


    long long int L[n1], R[n2];


    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];


    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(long long int arr[],long long int l,long long int r)
{
    if (l < r)
    {

       long long int m = l + (r - l) / 2;

        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}


int main()
{
    long long int a,b,c,i,j,x[200000],temp,min;
    scanf("%lld%lld",&a,&b);



    for(i=0; i<a; i++)
    {
        scanf("%lld",&x[i]);


    }
    if(a<=0 || b<=0)
    {
        min=x[0];
        for(i=1; i<a; i++)
        {

            if(x[i]<min)
            {
                min=x[i];
            }


        }

        if(min>1)
        {
            printf("1\n");
        }
        else
        {
            printf("-1\n");
        }
        exit(0);

    }
    else
    {

        mergesort(x,0,a-1);






        if(a<b)
        {
            printf("-1\n");
            exit(0);
        }
        else if(a>200000)
        {
            printf("-1\n");
            exit(0);
        }

        else if(a==b)
        {
            printf("%lld\n",x[b-1]);

        }

        else if(x[b-1]<x[b])
        {
            printf("%lld\n",x[b-1]);
        }

        else
        {

            printf("-1\n");
        }



    }
}
