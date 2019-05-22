#include<stdio.h>
int main()
{
    char t[1000];
    int i,count=0;
    scanf("%[^\n]t",t);
    for(i=0;t[i]!='\0';i++)
{
if(t[i]==' ')        
count++;
    }
    printf("%d",count+1);
}
