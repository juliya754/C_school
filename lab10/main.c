#include <stdio.h>
#include <stdlib.h>

#define LEN_X 10
#define LEN_Y 5

void fill_print_array(int array[][LEN_Y])
{
    int i;
    int j;
    for (i = 0; i < LEN_X; i++)
    {
        for (j = 0; j < LEN_Y; j++)
        {
            array[i][j] = rand()%100;
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void print_even(int array[][LEN_Y])
{
    printf("\n");
    int i;
    int j;
    for (i = 0; i < LEN_X; i++)
    {
        for (j = 0; j < LEN_Y; j++)
        {
            if (array[i][j]%2 == 0)
            {
                printf("%d ", array[i][j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    int myarray[LEN_X][LEN_Y];
    fill_print_array(myarray);
    print_even(myarray);
    return 0;
}
