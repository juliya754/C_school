#define ARR_LENGTH 3
#define CHAR_N 10
#define CHAR_S 15
#include <stdio.h>
//#include <string.h>

struct student
{
    char name[CHAR_N];
    char surname[CHAR_S];
    unsigned int course;
    float group;
};

void fill_student(struct student* student)
{
    printf("Enter Name: ");
    scanf("%s", student->name);
    printf("Enter Surname: ");
    scanf("%s", student->surname);
    printf("Enter course: ");
    scanf("%u", &(student->course));
    printf("Enter group: ");
    scanf("%f", &(student->group));
}

void fill_students(struct student* allStudents, unsigned int length)
{
    unsigned int i;
    for (i = 0; i < length; i++)
    {
        printf("Enter info for student %d \n",i);
        fill_student(&(allStudents[i]));
    }
}

void print_student(struct student* student)
{
    printf("Name is %s \n", student->name);
    printf("Surname is %s \n", student->surname);
    printf("Course is %u \n", (student->course));
    printf("Group is %.1f \n", (student->group));
}

void print_students(struct student* allStudents, unsigned int length){
    unsigned int i;
    for(i = 0; i < length; i++)
    {
        printf("Student %d \n", i);
        print_student(&allStudents[i]);
    }
}

int main()
{
    struct student allStudents[ARR_LENGTH];
    //struct student st;
    //fill_student(& st);
    // print_student(& st);
    fill_students(allStudents, ARR_LENGTH);
    print_students(allStudents, ARR_LENGTH);
    return 0;
}
