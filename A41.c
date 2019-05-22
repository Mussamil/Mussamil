#include<stdio.h>
int main()
{
    long l,m,temp;
    scanf("%d%d",&l,&m);
    temp=l;
    l=m;
    m=temp;
    printf("%d %d ",l,m);
}
