//d.(a)double ended queue using array
#include<stdio.h>
#define N 20
int deque[N];
int f=-1,r=-1;
void enqueuefront(int x)
{
    if((f==0&&r==N-1)||(f==r+1))
    {
        printf("queue is full");
    }
    else if(f==-1&&r==-1)
        {
            f=r=0;
            deque[f]=x;
        }
        else if(f==0)
        {
            f=N-1;
            deque[f]=x;
        }
        else
        {
            f--;
            deque[f]=x;
        }
}
void enquerear(int x)
{
    if((f==0&&r==N-1)||(f==r+1))
    {
        printf("queue is full");
    }
    else if(f==-1&&r==-1)
        {
            f=r=0;
            deque[r]=x;
        }
        else if(r==N-1)
        {
            r=0;
            deque[r]=x;
        }
        else
        {
            r++;
            deque[r]=x;
        }
}
void display()
{
    int i=f;
    if(f==-1&&r==-1)
    {
        printf("queue is empty");
    }
    else
    {
        while(i!=r)
        {
            printf("%d",deque[i]);
            i=(i+1)%N;
        }
        printf("%d",deque[r]);
    }
}
void deque_front()
{
    if(f=-1&&r==-1)
        printf("empty");
    else if(f==r){
        printf("%d",deque[f]);
        f=r=-1;
    }
    else if(f==N-1){
        printf("%d",deque[f]);
        f=0;
    }
    else{
    printf("%d",deque[f]);
        f++;
    }
}
void deque_rear()
{
    if(f=-1&&r==-1)
        printf("empty");
    else if(f==r)
    {
        f=r=-1;
        printf("%d",deque[r]);
    }
        else if(r==0)
        {
            r=N-1;
             printf("%d",deque[r]);
        }
        else
        {
            r--;
        }
}
int main()
{
    int a;int i=1;
    printf("insert at front 1\n");
     printf("insert at rear 2\n");
      printf("delete at front 3\n");
       printf("delete at rear 4\n");
        printf("display 5\n");
        printf("0 to exit\n");
        while(i)
        {   printf("enter choice");
        scanf("%d",&i);
            switch(i)
            {
            case 1:{printf("enter a no.");
            scanf("%d",&a);
                enqueuefront(a);
                break;
                }
                case 2:{printf("enter a no.");
            scanf("%d",&a);
                enquerear(a);
                break;
                }
                case 3:deque_front();
                break;
                case 4:deque_rear();
                break;
                case 5:display();
                break;
        }
}
}
