#include <stdio.h>
#include <string.h>

struct my_struct
{
    char c;// 1
    /* padding 3 to machine word lenght = 4 */
    int i;//4
    int* pi;//8
}__attribute__((packed));

void f(struct my_struct* s)
{
    s->c = 'b';
    s->i = 20;
}

int main()
{
    struct my_struct s;
    printf("Size = %d\n",(int)sizeof(s));
    return 0;
}
