#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* init_array(unsigned length)
{
    int* array = malloc(sizeof(int) * length);
    if (array != NULL)
        {
            srand(time(0));
            printf("Array: ");
            for (int i = 0; i < length; i++)
            {
                array[i] = rand()%100;
                printf("%d ", array[i]);
            }
            return array;
        }
    else
    {
        printf("Unable to allocate memory\n");
        return NULL;
    }
}

void print_even(int* array, unsigned length)
{
    printf("\nEven values: ");
    for (int i = 0; i < length; i++)
        if (array[i]%2 == 0)
            printf("%d ", array[i]);
    printf("\n");
}

void destroy_array(int* array)
{
    free(array);
}

int main(int argc, char** argv)
{
    int length;
    length = atoi(argv[1]);
    if (length < 1)
    {
        printf("Incorrect input\n");
        return -1;
    }
    int* myarray = init_array(length);
    if (myarray != NULL)
    {
        print_even(myarray, length);
        destroy_array(myarray);
    }
    else
    {
        printf("Impossible to init array\n");
        return -1;
    }
    return 0;
}
