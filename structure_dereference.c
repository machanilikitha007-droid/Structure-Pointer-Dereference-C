#include <stdio.h>

struct Student
{
    int rollNo;
    float marks;
};

int main()
{
    struct Student student = {101, 87.5f};
    struct Student *ptr = &student;

    printf("Roll Number: %d\n", (*ptr).rollNo);
    printf("Marks: %.2f\n", (*ptr).marks);

    return 0;
}
