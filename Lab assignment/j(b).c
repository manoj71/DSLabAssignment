//J(b).program to sort array using selection sort
#include<stdio.h>
int main()
{
     int i,j,n;
    printf("enter length of array");
    scanf("%d",&n);
    int a[n];
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //selection sort code
    for(i=0;i<n-1;i++)
    {    int index=i;
        for(j=i+1;j<n;j++)
        {
            if(a[index]>a[j])
            {
                index=j;
            }
        }
        int temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
  printf("sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
