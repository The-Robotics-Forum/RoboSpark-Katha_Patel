
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}node;


void add_at_start(node *first, int data)
{
    if (first->next == NULL)
        return;

    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = first;
    printf("%d -> ", newnode->data);
}

void insert(node *prevnode, int data)
{
    if(prevnode->next==NULL)
        return;

    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = prevnode->next;
    prevnode->next = newnode;
    printf("%d -> ", newnode->data);
}

void add_at_end(node *prevnode, int data)
{
    if (prevnode->next == NULL)
    {
        node *newnode = (node *)malloc(sizeof(node));
        newnode->data = data;
        prevnode->next = newnode;
        newnode->next = NULL;
    }
    
}

void del(node *todelete, node *prevnode)
{
    if (todelete->next==NULL)
    {
        prevnode->next==NULL;
        free(todelete);
    }

    else if(prevnode->next==todelete)
    {
        prevnode->next = todelete->next;
        free(todelete);
    }
    else
    {
        node *temp = todelete;
        todelete->next = todelete;
        free(todelete);
    }
    
}


int main()
{
    node *head = (node *)malloc(sizeof(node));
    node *second = (node *)malloc(sizeof(node));
    node *third = (node *)malloc(sizeof(node));
    node *fourth = (node *)malloc(sizeof(node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    add_at_start(head , 0);  // added node at begining;
    printf("%d -> ", head->data);
    printf("%d -> ", second->data);
    printf("%d -> ", third->data);
    printf("%d -> ", fourth->data);
    printf("\n");


    printf("%d -> ", head->data);
    printf("%d -> ", second->data);
    printf("%d -> ", third->data);
    insert(third, 65);              // inserted a node here
    printf("%d -> ", fourth->data);
    printf("\n");

    del(third, second);       // deleted a node

    printf("%d -> ", head->data);
    printf("%d -> ", second->data); //not printed third as, now it contains some garbage value
    printf("%d -> ", fourth->data);
    printf("\n");

    return 0;
}