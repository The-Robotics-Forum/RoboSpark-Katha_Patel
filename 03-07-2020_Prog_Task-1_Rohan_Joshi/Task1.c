
#include<stdio.h>
#include<stdlib.h>


struct Student
{
    int arr[10];
    char name;
    int rollno;
    int front , rear;
};

void init(struct Student *ptr)
{
    ptr->front = 0;
    ptr->rear = 0;
}

void enqueue(struct Student *q , int data)
{
    q->arr[q->rear++] = data;
}

int main()
{
    struct Student *stud1 = (struct Student *)malloc(sizeof(struct Student));
    init(stud1);
    stud1->name = 'A';
    printf("Enter roll number of student");
    scanf("%d", &stud1->rollno);
    if(stud1->rollno % 2 == 0)
    {
        enqueue(stud1 , stud1->rollno);
        printf("Student having roll number %d enqueued" , stud1->rollno);
    }
    else
    {
        printf("cannot enqueue due to odd roll number");
    }
    

}