#include<stdio.h>
int main()
{
char ch;
printf("Enter any character: ");
scanf("%c",&ch);
if(( ch>='a' && ch<='z') || ( ch>='A' && ch<='Z'))
{
printf("entered character %c is an alphabet",ch);
}
else
{
printf("entered character %c is not an alphabet",ch);
}
return 0;
}
