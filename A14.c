#include <stdio.h>
int main(void) 
{
	int a,b,c[25],z=0;
	scanf("%d%d",&a,&b);
	for(int i=0;i<a;i++)
	scanf("%d",&c[i]);
	for(int i=0;i<b;i++)
	z+=c[i];
	printf("%d",z);
	return 0;
  }
