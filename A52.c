#include <stdio.h>
int main()
{
    int b[10],m,sum=0,i;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
        sum=sum+b[i];
    }
    sum=sum/m;
    printf("%d",sum);
    return 0;
}
