#include<stdio.h>
main()
{
int i,a,rem,mm,result;
scanf("%d",&a);
mm=a;
for(i=0;mm!=0;++i){
rem=mm%10;
result +=rem*rem*rem;
mm=mm/10;
}
if(result==a)
{
printf("yes");
}
else
{
printf("no");
}
}
