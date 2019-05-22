#include<stdio.h>
void main()
{
int m,b[200],i,q;
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
q=b[0];

for(i=1;i<m;i++)
{
if(b[i]>q)
q=b[i];
}
printf("%d",q);
}
