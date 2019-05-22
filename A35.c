#include<stdio.h>
#include<string.h>
void main()
{
int a,b=0,i,t;
char a[50];
gets(a);
n=strlen(a);
for(i=0;i<a;i++)
{
if(a[i] == ' ')
{
                       b++;
}
}
t=a-b;
printf("%d",t);
}
