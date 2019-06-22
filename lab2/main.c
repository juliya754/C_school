#include <stdio.h>
#define WORLD "world"

void scan_dec()
{
  int ret;
  int i;
    printf("Enter demical: ");
  ret =  scanf("%d",&i);
  if (0 != ret)
    {
      printf("Entered demical: %d\n", i);
      
    }
  else
    {
      printf("Invalid input\n");
    }
  }

void scan_str()
{
  int ret;
  char str[128];
    printf("Enter string: ");
  ret =  scanf("%s", str);
  if (0 != ret)
    {
      printf("Entered string: %s\n", str);
      
    }
  else
    {
      printf("Invalid input\n");
    }
}

void scan_char()
{
   int ret;
  char c;
    printf("Enter char: ");
  ret =  scanf(" %c", &c);
  if (0 != ret)
    {
      printf("Entered char: %c\n", c);
      
    }
  else
    {
      printf("Invalid input\n");
    }
}



int main()

{
  /*  int ret; //for errors
  int i;*/
  scan_dec();
   scan_str();
  scan_char();
  //printf("Hello %s %d\n", WORLD, i);//важен порядок
      return 0;
}
