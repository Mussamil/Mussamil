#include <stdio.h>
int main()
{
    int m,d;
    scanf("%d",&m);
    while(m!=0)
    {
      d=d+1;
      m=m/10;
    }
    printf("%d",d);
    return 0;
}
