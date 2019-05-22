#include<stdio.h>
void main()
{
int m,d=1,e=1,i,f;
scanf("%d",&m);
for(i=1;i<=m;i++)
{
    printf("%d ",d);
    f=d+e;
    d=e;
    e=f;
}
}
