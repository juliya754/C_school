#include <stdio.h>

union my_union
{
    char c;
    int i;
    int* pi;
};
/* |  8  |
    1
   'c'
   4
   10
 */
int main()
{
    union my_union u;
    printf("Size = %d\n",(int)sizeof(u));
    return 0;
}
