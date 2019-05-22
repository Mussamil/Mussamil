#include <stdio.h>
#include <string.h>
 void main()
{
    char t[200];
    int count = 0, i;
    scanf("%[^\n]t", t);
    for (i = 0;t[i] != '\0';i++)
    {
        if (t[i]>=48&&t[i]<=57)
            count++;    
    }
    printf("%d", count);
}
