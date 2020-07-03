#include<stdio.h>

int push(char element,char *stack,int top)
{
    stack[++top]=element;
    return top;
}

int pop(int top)
{
    if(top==-1)
    {
        printf("\nNot Balanced");
        exit(0);
    }
    else
    {
    return --top;
    }
}

int isEmpty(int top)
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    char stack[8];
    int top=-1,i=0;
    
    printf("Enter the brackets");
    scanf("%s",stack);
    
    while(stack[i]!='\0')
    {
        if(stack[i]=='(')
        {
            top=push(stack[i],stack,top);
        }
        else if(stack[i]==')')
        {
            top=pop(top);
        }
        i++;
    }
        
    if(isEmpty(top))
    {
        printf("Brackets are Balanced : ");
    }
    else
    {
        printf("Brackets aren't  Balanced :");
    }
    
    
}