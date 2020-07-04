//Day3_task1 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 100

typedef struct {
    int item[size];
    int rear,front;

}queue;
//functions prototypes
void initqueue(queue *);
void enqueue(queue *,int p);
int dequeue(queue *);
//function for intializing the queue
void initqueue(queue *q)
{
   q->front=0;
   q->rear=0;
}
void enqueue(queue *q,int x)
{
    if(q->rear==size)
    {
        printf("Queue Overflow\n");
        return ;
    }
    else
    {
        q->item[q->rear]= x;
        q->rear=q->rear+1;
        
    }
    

}
int dequeue(queue *q)
{
    int y;
    if(q->rear==q->front)
    {
        return 0;
    }
    else
    {
      y=q->item[q->front];
      q->front=q->front+1;
      return y;
    }
    

}




 struct Student
 {
 int student_roll_no;
 char name[30];
};
int main()
{
    int n;
      queue*q=(queue*)malloc(sizeof(queue));
   
    initqueue(q);
    // void enqueue(&q,10);

    printf("Enter the number of data you want to store:");
    scanf("%d",&n);
;struct Student student[n];
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("\nEnter the details  about student: ",i+1);
        printf("\nEnter name: ");
        scanf("%s", student[i].name);
        
        printf("Enter the ROll no.: ");
        scanf("%d", &student[i].student_roll_no);

    }
   
    int p;
    for(int i=0;i<n;i++)
    {
        if((student[i].student_roll_no)%2==0)
        {
           
           p=student[i].student_roll_no;
           enqueue(q, p );

          printf("Student having even roll numbers are:\n");
          printf(" Name:%s\n",student[i].name);
           printf(" Roll no. :%d\n",dequeue(q));



        }
    }
    return 0;
}