#include <stdio.h>


void swap(int* a, int* b)
{
  int buf = *a;
  *a = *b;
  *b = buf;
}

int main()
{

  int a = 4;
  int b = 8;
  printf("a = %d\nb = %d\n", a, b);
  swap(&a,&b);
  printf("After swap:\na = %d\nb = %d\n", a, b);
  
  return 0;
}
