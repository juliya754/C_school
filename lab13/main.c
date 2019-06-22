#include <stdio.h>
#include <stdlib.h>

#define elem(i,j) (*(arr + (i) * y + (j)))

int* create_arr(int x, int y)
{
    int* arr = malloc(x * y * sizeof(int));
    return arr;
}

void fill_print_array(int* arr, int x, int y)
{
    printf("Dynamic array:\n");
    int i;
    int j;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
           elem(i,j) = rand()%100;
           printf("%d ", elem(i,j));
        }
        printf("\n");
    }
}

void print_even(int* arr, int x, int y)
{
    printf("\nEven elements:\n");
    int i;
    int j;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            if (elem(i,j)%2 == 0)
            {
                printf("%d ", elem(i, j));
            }
        }
        printf("\n");
    }
}

int main(int argc, char** argv)
{
    int x;
    int y;

    if (argc == 3)
    {
        x = atoi(argv[1]);
        y = atoi(argv[2]);

        int* arr2 = create_arr(x, y);

        fill_print_array(arr2, x, y);
        print_even(arr2, x, y);
        free(arr2);
    }
    else
    {
        printf("Argc must be 3\n");
        return -1;
    }
    return 0;
}
