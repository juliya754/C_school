#include <stdio.h>

void sum(int a,int b)
{
  int sum = a + b;
  printf("%d \n", sum);
}

int main()
{
  
  int a, b, ret;
  printf("Enter a: ");
  ret = scanf("%d", &a);
 
  if (0 != ret)
    {
      printf("Enter b: ");
      ret = scanf("%d", &b);
	if (0 != ret)
	  sum(a,b);
    }
  else printf("Invalid input");
  return 0;
}
