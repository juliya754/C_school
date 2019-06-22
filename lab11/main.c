#include <stdio.h>
#include <stdlib.h>

void fill_print_array(int** arr, int x_len, int y_len)
{
    int i;
    int j;
    for (i = 0; i < x_len; i++)
    {
        for (j = 0; j < y_len; j++)
        {
            *(*(arr + i) + j) = rand()%100;
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
}

void delete_arr(int** arr, int x_len, int y_len)
{
    for (int i = 0; i < x_len; i++)
    {
        free(*(arr + i));
    }
    free(arr);
}


void print_even(int** arr, int x_len, int y_len)
{
    printf("\n");
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

        int** arr = malloc(sizeof(int*) * y);
        for (int i = 0; i < y; i++)
        {
            *(arr + i) = malloc(sizeof(int) * x);

        }
        int** arr2 = malloc(sizeof(int*) * y + x * y * sizeof(int));
        fill_print_array(arr2, x, y);
        print_even(arr, x, y);
        delete_arr(arr, x, y);
        free(arr2);
    }
    else
    {
        printf("Argc must be 3\n");
        return -1;
    }
    return 0;
}
