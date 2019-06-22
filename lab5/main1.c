#include <stdio.h>

void swap(int** v1, int** v2)
{
    int * tmp = *v1;
   *v1 =*v2;
   *v2 = tmp;

}

int main()
{
    int val1 = 5;
    int val2 = 9;
    int* ptr_val1 = &val1;
    int* ptr_val2 = &val2;
    printf("Before swap:\nval1 = %d\nval2 = %d\n", *ptr_val1, *ptr_val2);
    swap(&ptr_val1, &ptr_val2);
    printf("After swap:\nval1 = %d\nval2 = %d\n", *ptr_val1, *ptr_val2);
    return 0;


}
