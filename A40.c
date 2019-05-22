#include <stdio.h>
#include<string.h>
int main()
{
    char t[100],i,d=0;
    //scanf("%[^\n]t",t);
    gets(t);
    while(t[i]!='\0')
    {
        if(t[i]>=48&&s[i]<=57||t[i]>=97&&t[i]<=122||t[i]>=65&&t[i]<=90||t[i]==' ')
        {
            d=d;
        }
        else
        {
            d=d+1;
        }
        i++;
    }
    printf("%d",d);
    return 0;
}
