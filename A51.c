#include<stdio.h>
void main()
{
    int m,b[100],i,j,temp;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
for(i=0;i<m-1;i++)
{
 for(j=1;j<m;j++)
 {
     if(b[i]>b[j])
     {
         temp=b[i];
         b[i]=b[j];
         b[j]=temp;
     }
 }
 }
  printf("%d %d",b[0],b[m-1]);
}
