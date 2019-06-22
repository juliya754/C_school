#include <stdio.h>
#include <stdlib.h>

int** create_arr(int x, int y)
{
    int** arr = (int**)malloc(sizeof(int*) * y + x * y * sizeof(int));

    for (int j = 0; j < x; j++)
    {
        arr[j] = (int *)(arr + y) + j * x;
    }
    return arr;
}

void fill_print_array(int** arr, int x_len, int y_len)
{
    int i;
    int j;
    printf("Dynamic array:\n");
    for (i = 0; i < x_len; i++)
    {
        for (j = 0; j < y_len; j++)
        {
            arr[i][j] = rand()%100;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void print_even(int** arr, int x_len, int y_len)
{
    printf("\nEven elements:\n");
    int i;
    int j;
    for (i = 0; i < x_len; i++)
    {
        for (j = 0; j < y_len; j++)
        {
            if (arr[i][j]%2 == 0)
            {
                printf("%d ", arr[i][j]);
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

        int** arr2 = create_arr(x, y);

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
