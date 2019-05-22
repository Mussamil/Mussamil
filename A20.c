#include<stdio.h>
int main() 
{
   int i,j,d,c,count;
   scanf("%d%d",&c,&d);
   for(i=c+1;i<=d;i++)
   {
       count=0;
       for(j=2;j<=i;j++)
       {
       if(i%j==0)
       {
           break;
       }
       }
       if(j==i)
       {
           printf("%d ",i);
       }
   }
}
