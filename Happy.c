#include<stdio.h>
int stack[10]={0};
int top=-1;

void push(int c)
{
stack[++top]=c;
}

void pop()
{
stack[top--]=0;
}

int main()
{
int N,max=0;
int order=1;
 printf("enter the N elements\n");
scanf("%d",&N);
int arr[N];
printf("enter the array element\n");
for(int i=0;i<N;i++)
{
scanf("%d",&arr[i]);
if(max<arr[i])
max=arr[i];
}

for(int i=0;i<N;i++)
{
while(top!=-1 && stack[top]==order)
{
order++;
pop();
}
if(arr[i]==order)
{
order++;

}
else
push(arr[i]);

}
while(top!=-1 && stack[top]==order)
{
order++;
pop();
}

if(order==max+1)
printf("Happy");
else
printf("Sad");


}
