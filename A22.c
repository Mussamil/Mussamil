#include <stdio.h>
int main()
{
  int a1, a2, i, temp, num, rem;
  scanf("%d %d", &a1, &a2);
    for(i=a1+1; i<a2; ++i)
  {
      temp=i;
      num=0;
      while(temp!=0)
      {
          rem=(temp%10);
          num+=rem*rem*rem;
          temp/=10;
      }
      if(i==num)
      {
          printf("%d ",i);
      }
  }
  return 0;
}
