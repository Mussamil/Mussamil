#include<stdio.h>
main()
{
int b,i,max=0;
scanf("%d",&b);
int ar[b];
for(i=0;i<b;i++)
{
  scanf("%d",&ar[i]);
  if(i==0)
  {
    max=ar[i];
    }
  if(ar[i]<max)
  {
    max=ar[i];
  }
  }
  printf("%d",max);
}
