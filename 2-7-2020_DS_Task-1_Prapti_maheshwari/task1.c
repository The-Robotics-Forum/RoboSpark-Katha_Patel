#include<stdio.h>
#include<string.h>

struct Student{
 int student_id;
 float student_cgpa;
 int student_year;
 char* name;
};
int main()
{
int i=0;
int n=4;
struct Student student[n];
student[0].student_id=11910360;
student[0].name="Prapti";
student[0].student_year=2;
student[0].student_cgpa=7.7;

student[1].student_id=11910900;
student[1].name="Vaishnavi";
student[1].student_year=2;
student[1].student_cgpa=7.4;

student[2].student_id=1191077;
student[2].name="Drashan";
student[2].student_year=2;
student[2].student_cgpa=7.4;

student[3].student_id=1191033;
student[3].name="Aarya";
student[3].student_year=2;
student[3].student_cgpa=7.7;

printf("Records of student are:\n");
for(i=0;i<n;i++)
{
    printf("\nStudent id : %d",student[i].student_id);
    printf("\nName of stuent is : %s",student[i].name);
    printf("\nYear : %d",student[i].student_year);
    printf("\nCGPA  is : %f",student[i].student_cgpa);

}

return 0;

}

