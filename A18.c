#include<stdio.h>
#include<stdlib.h>
void main()
{
 int a,d,i;
 scanf("%d %d",&a,&d);
 if(a>=d)
 {
 printf("Invalid");
 exit(1);
 }
 for(i=a+1;i<d;i++)
 {
  if(i%2!=0)
  {
  printf("%d",i);
  if(i!=(d-1))
  printf(" ");
  }
 }
}
