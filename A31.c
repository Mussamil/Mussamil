#include <stdio.h>
#include<ctype.h>
int main()
{
    char d;
    scanf("%c",&d);
    if(isdigit(d))
    {
    printf("yes");
    }
    else
    {
    printf("No");
    }
 return 0;
}
