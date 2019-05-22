#include <stdio.h>
int main()
{
    int b=10,c[20],max=0;
    for(int i=0;i<b;i++)
    {
        scanf("%d",&c[i]);
    }
    for(int i=0;i<c;i++)
    {
        if(c[i]>max)
        {
            max=c[i];
        }
    }
    printf("%d",max);
    return 0;
}
