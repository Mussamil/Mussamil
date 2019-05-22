#include <stdio.h>
int main(void) {
	int a,a1,c,sum=0;
	scanf("%d",&a);
a1=a;
	while(a>0)
	{    
		c=a%10;    
		sum=(sum*10)+c;    
		a=a/10;    
	}   	
if (a1==sum)
{
printf("yes");
}
else
{
printf("no");
}
    return 0;
}
