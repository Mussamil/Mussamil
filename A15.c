#include <stdio.h>
int main()
{
    int a,b,i=0,sum=1;
    scanf("%d %d",&a,&b);
    while(i<b)
    {
      sum=sum*a;
      i++;
    }
    printf("%d",sum);
    return 0;
}
