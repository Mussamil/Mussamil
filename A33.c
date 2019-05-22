#include<stdio.h>
void main()
{
    int o,n;
    scanf("%d",&n);
    while(n>=60)
    {
        o++;
        n=n-60;
    }
    printf("%d %d",o,n);
    return 0;
}
