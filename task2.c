#include<stdio.h>
#include<string.h>

struct Student{
 int student_id;
 float student_cgpa;
 int student_year;
 char name[30];
};
int main()
{
    struct Student student[4];
    int i=0;
    for(i=0;i<4;i++)
    {
        printf("\nEnter the details  about student: ",i+1);
        printf("\nEnter name: ");
        scanf("%s", student[i].name);
 
        printf("Enter the Gr_number: ");
        scanf("%d", &student[i].student_id);
 
        printf("Enter CGPA: ");
        scanf("%f", &student[i].student_cgpa);
        
        printf("Enter the year: ");
        scanf("%f", &student[i].student_year);

    }
    // printf("NAME\tGr_Number\tCGPA\tYear\n");
    for(i=0;i<4;i++)
    {
        printf("\n Name :%s", student[i].name);
        printf(" \nGr_number :%d",student[i].student_id);
        printf( "\nCGPA: %f",student[i].student_cgpa);
        printf(" \nYear :%d",student[i].student_year);
        printf("\n");
    }
}