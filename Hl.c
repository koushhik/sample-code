#include<stdio.h>
int main()
{
int n,j;
printf("enter the number of values \n");
scanf("%d",&n);
int a[n];
printf("enter the array elements\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
int great=a[0];
printf("the output of the array elements are\n");
for(int i=1;i<n;i++)
{
if(a[i]>great)
{
great=a[i];
j=i;
}
}
printf("%d ",a[j]);
for(int i=j+1;i<n;i++)
{ if(a[i]==great)
{
printf("%d ",a[i]);
continue;
}
for(int k=i+1;k<n;k++)
{
if(a[k]>=a[i])
break;
else
{
if(k>=n-1)
printf("%d ",a[i]);
}
}
}
printf("%d",a[n-1]);
}
