//Linear search
#include<stdio.h>
int main()
{
    int i,n,num;
    printf("enter length of array");
    scanf("%d",&n);
    int a[n];
    printf("enter elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a number to be searched \n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num){
            break;
        }
    }
    if(i!=n)
        printf("number found at index:%d \n",i);
    else
        printf("number not found");

}
