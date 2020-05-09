#include<stdio.h>
int main(void)
{
    int i,j,k,t,n,x,y;
    printf("Enter n:");
    scanf("%d",&n);
    int a[n];
    printf("enter non sorted numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(k=0;k<n-2;k++)
    {
        for(j=0;j<n-1;j++)
        {
          if(a[j]>a[j+1])
          {
              t=a[j];
              a[j]=a[j+1];
              a[j+1]=t;
          }
        }

    }
    printf(" From greater to smaller sorted form is :");
    for(i=n-1;i>=0;i--)

    {
        printf("%d\n",a[i]);
    }
        printf(" From smaller to greater sorted form is :");
    for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
         printf("Enter a new number:");
        scanf("%d",&x);
        for(i=0;i<n+1;i++)
        {
            if(a[i]>x)
                break;
        }
        for(j=n-1;j>=i;j--)
        {
            a[j+1]=a[j];
        }
        a[i]=x;
        printf("new sorted numbers are:");
        for(i=0;i<n+1;i++)//(i=0;i<=n;i++)etao hobe
        {
            printf("%d\n",a[i]);
        }

     printf("which number you want to delete:");
        scanf("%d",&y);
        for(i=0;i<n;i++)
        {
            if(a[i]==y)
                break;
        }
        for(j=i;j<n;j++)
        {
            a[j]=a[j+1];
        }
        printf("new sorted numbers are:");
        for(i=0;i<n;i++)//delete er por 1ta number kome gese
            printf("%d\n",a[i]);


}


