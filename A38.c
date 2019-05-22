#include <stdio.h>
#include<string.h>
int main()
{
    char t[100],i,d=0;
    //scanf("%[^\n]t",t);
    gets(t);
    while(t[i]!='\0')
    {
        if(t[i]=='.')
        {
            d=d+1;
        }
        i++;
    }
    d=d+1;
    printf("%d",d);
    return 0;
}
