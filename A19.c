#include<stdio.h>
int main()
{
    int a,b,i,rem;
scanf("%d%d",&a,&b);
for(i=a+1;i<b;++i)
{
rem=i%2;
if(rem==0)
{
printf("%d ",i);
}
}
}
