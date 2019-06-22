#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_LEN 10

void fill_array(int* arr)
{
    //srand(time(0));
    for (int i = 0; i < ARRAY_LEN; i++)
    {
        *(arr+i) = rand()%100;
    }
}

void print_even(int* arr, unsigned array_len)
{
    printf("\nEven values:\n");
    for (int i = 0; i < array_len; i++)
        if (*(arr+i)%2 == 0)
            printf("%d ", arr[i]);
    printf("\n");
}

void print_array(int* arr, unsigned array_len)
{
    for (int i = 0; i < array_len; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[ARRAY_LEN];

    srand(time(0));
    fill_array(arr);
    printf("Array:\n");
    print_array(arr, ARRAY_LEN);
    print_even(arr, ARRAY_LEN);
    return 0;
}
