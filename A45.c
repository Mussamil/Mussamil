#include <stdio.h>
int main(void) 
{
	char string[150];
	int a,i;
	scanf("%s",&string);
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		printf("%s",string);
		printf("\a");
	}
	return 0;
}
