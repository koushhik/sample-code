
/*Micro and Array Update in c*/
#include<stdio.h>
int main()
{
    int t,n,i,min=100,k;
    printf("enter the number of test cases\n");
    scanf("%d",&t);
    while(t--)
    {
     min=100;
     printf("enter the n and k value\n");
     scanf("%d%d",&n,&k);
     int a[n];
     printf ("enter the array elements\n");
     for(i=0;i<n;i++)
     {
      scanf("%d",&a[i]);
      if(a[i]<min)
       min=a[i];
     }
     //printf("%d ",min);
     if(min>=k)
      printf("0\n");
     else
      printf("%d\n",k-min);
    }
    return 0;

}
