
#include<stdio.h>
#include<stdlib.h>

struct Student
{
    int roll;
    char name[20];
};

struct Queue
{
    int front , rear;
    int arr[10];
};

void enqueue(struct Queue *ptr , int rollno)
{
    ptr->arr[ptr->rear++] = rollno;
}

void init(struct Queue *p)
{
    p->front = p->rear = 0;
}

int main()
{
    struct Student *s1 , *s2 , *s3;

    printf("Enter student name and roll number\n");
    scanf("%s", s1->name);
    scanf("%d", s1->roll);

    printf("Enter student name and roll number\n");
    scanf("%s", s2->name);
    scanf("%d", s2->roll);

    printf("Enter student name and roll number\n");
    scanf("%s", s3->name);
    scanf("%d", s3->roll);


    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    init(s1);
    init(s2);
    init(s3);



    if(s1->roll%2==0)
    {
        enqueue(q , s1->roll);
        printf("Enqueued");
        
    }
    
    if(s2->roll%2==0)
    {
        enqueue(q , s2->roll);
        printf("Enqueued");
        
    }

    if(s3->roll%2==0)
    {
        enqueue(q , s3->roll);
        printf("Enqueued");
        
    }

}