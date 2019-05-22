#include <stdio.h>
int main(void) 
{
	char str3[50],str4[50];
	scanf("%s %s",&str3,&str4);
	if(sizeof(str1)>sizeof(str4))
	{
		printf("%s",str3);
	}
	else
	{
		printf("%s",str4);
	}
	return 0;
}
