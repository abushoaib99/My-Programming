#include<stdio.h>
struct personal
{
    char name[20];
    int day;
    char month[10];
    int year;
    float salary;
};

int main()
{
    struct personal person;
    printf("Input Value\n");
    scanf("%s %d %s %d %f",person.name,&person.day,person.month,&person.year,&person.salary);
    printf("%s %d %s %d %.2f",person.name,person.day,person.month,person.year,person.salary);
    return 0;
}
