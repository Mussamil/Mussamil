#include<stdio.h>
void main()
{
  int d1,d2,n1,n2,l1,l2;
  scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
  if(d1>d2)
      {
          l1=d1-d2;
          l2=n1-n2;
      }
      else
      {
         l1=d2-d1;
         l2=n2-n1;
      }
      printf("%d",l1);
      printf(" ");
      printf("%d",l2);
      }
