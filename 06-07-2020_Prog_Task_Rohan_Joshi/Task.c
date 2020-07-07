
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// these can be done in single function using if statement , but for sake of convenience ... wrote different functions

void add_at_end(struct node *prev , int val)
{
    if (prev->next == NULL)
    {
        struct node *newnode  = (struct node *)malloc(sizeof(struct node));
        newnode -> data = val;
        newnode -> next = NULL;
        prev -> next = newnode;
    }

    else
    {
        return;
    }
}

void insert(struct node *prev, struct node *nextnode, int val)
{
    if (prev->next == NULL)
    {
        return;
    }
    
    else
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        prev->next = newnode;
        newnode -> data = val;
        newnode->next = nextnode;
    }
    
}

void add_at_start(struct node *nextnode, int val)
{
    struct node *newhead = (struct node *)malloc(sizeof(struct node));
    newhead->next = nextnode;
    newhead->data = val;  
}

void del(struct node *prevnode , struct node *nextnode)
{
    if(prevnode->next!=NULL && nextnode->next==NULL)
    {
        prevnode->next = NULL;
    }
    else if (prevnode->next!=NULL && nextnode->next!=NULL)
    {
        prevnode->next = nextnode;
    }
    else
    {
        free(prevnode);
    }
    
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    struct node *toinsert;
    struct node *starthere;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head -> data = 1;
    head -> next = second;

    second -> data  = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = fourth;

    fourth -> data = 4;
    fourth -> next = NULL;

    add_at_end(fifth, 5);
    insert(third, fourth, 8);
    add_at_start(second, 12);

    del(fourth, fifth);


    return 0;
}