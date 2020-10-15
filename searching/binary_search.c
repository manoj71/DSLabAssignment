//Binary search
#include <stdio.h>
int main()
{
int i, low, high, mid, n,num;
printf("Enter number of elements");
scanf("%d",&n);
int ar[n];
printf("Enter integers in ascending order");
for(i = 0; i < n; i++)
scanf("%d",&ar[i]);
printf("Enter number to be searched");
scanf("%d", &num);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high)
{
if(ar[mid] <num)
   low = mid + 1;
else if (ar[mid]==num)
{
printf("number found at index %d", mid);
break;
}
else
   high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found");
}
