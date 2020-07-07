//Day5_task1

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void insertAfter(struct node* prev_node,int new_data)//Function for inserting elelment in the list 
{
    if(prev_node==NULL)
    {
        printf("The given previous node cannot be NULL");
        return ;
    }
    
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data=new_data;
        new_node->next=prev_node->next;
        prev_node->next=new_node;
    
    
}
void deleteNode(struct node*before_del)//Function for deleting th element
{
    struct node*temp;
    temp=before_del->next;
    before_del->next=temp->next;
    free(temp);
}
struct node*front(struct node* head,int new_data)//Function for adding elelment in the beggining of the list
{
    struct node *new_node=malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=head;
     head=new_node;
    return head;
}
void end(struct node*last_node,int new_data)//Function for adding element at the end of linked list
{
   struct node *last_new_node = (struct node *)malloc(sizeof(struct node));
    last_new_node->data=new_data;
     last_new_node->next=NULL;
      last_node->next=last_new_node;


}
void print(struct node*head)//Function for printing elements of the list
{
    struct node*temp=head;

    while(temp->next!=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("%d -> NULL",temp->data);
}

int main()
{
    
    
   
    struct node *head = (struct node *)malloc(sizeof(struct node));

    head->data = 100;
    head->next = NULL;


    struct node *second_link = (struct node *)malloc(sizeof(struct node));
    second_link->data = 110;
    second_link->next = NULL;

    head -> next = second_link;


    
    struct node *third_link = (struct node *)malloc(sizeof(struct node));
    third_link->data = 200;
    third_link->next = NULL;
    second_link->next = third_link;

    struct node *fourth_link = (struct node *)malloc(sizeof(struct node));
    fourth_link->data = 400;
    fourth_link->next = NULL;
    third_link->next = fourth_link;


     printf("\nList after inserting '50 'after second_link: \n");
     insertAfter(second_link,50);//inserting element after second_link
     print(head);

   printf("\nList after inserting elelment at the end of list is :\n");
    end(fourth_link,8888);
    print(head);

    printf("\nList after inserting elelment at the beginning of list:\n");
      head= front(head,75647);
    print(head);


    
    printf("\nList after deleting fourth_link :\n");
    deleteNode(third_link);
    print(head);
    
    return 0;

}