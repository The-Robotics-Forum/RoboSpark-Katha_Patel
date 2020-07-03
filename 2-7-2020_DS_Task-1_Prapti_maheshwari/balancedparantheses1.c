#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define size 100
typedef struct {
      char item[size];
      int top;

}Stack;
void push(Stack *,char);
char pop(Stack*);
int is_empty(Stack*);
char stacktop(Stack*);

int is_opening_match(char,char);
int check_expr(char[]);

void push(Stack*s,char x)
{
    if(s->top==size-1){
        printf("Stack is overflow");
       // return 0;
    }
    else
    {
            s->top++;
        s->item[s->top]=x;
    }
}
char pop(Stack*s)
{
    if(is_empty(s))
    {
        printf("stack underflow");
        return 0;
    }
    else{
            char x;
        x=s->item[s->top];
    s->top--;
    return x;
    }
}
int is_empty(Stack*s)
{
    if(s->top==-1)
        {
        return 1;
        }
    return 0;
}
char stacktop(Stack*s)
{
    if(is_empty(s)){
        printf("stack underflow");
        return 0;
    }
    else{
        return s->item[s->top];
    }
}
int is_opening_match(char left,char right)
{
    int match=0;
    switch(left){
        case '(':if(right==')')
                  match=1;
                  break;
        case '{':if(right=='}')
                  match=1;
                  break;
        case '[':if(right==']')
                  match=1;
                  break;
        default: printf("invalid symbol");
                  return 0;
    }
    return match;

}
int check_expr(char expr[]){
    Stack stack;
    stack.top=-1;
    int error=0;
    int i=0;
    while(expr[i]!='\0')
    {
        char next_char=expr[i];
        if(next_char=='('|| next_char=='{'|| next_char=='[')
            {
            push(&stack,next_char);
           }
        else if(next_char==')'|| next_char=='}'|| next_char==']')
        {
            if(is_empty(&stack))
                {
                error=1;
                break;
            }
            else if(is_opening_match(stacktop(&stack),next_char))
            {
                pop(&stack);
            }
            else{
                    error=1;
                     break;

            }

        }
        ++i;
    }
    if(!is_empty(&stack)){
        error=1;
    }
    return error;



}
int main(){
    char expr[size];
    printf("enter the input expression:");
    scanf("%s",expr);
     if(check_expr(expr)){
        printf("expression is not balanced");
     }
     else{
        printf("expression is balanced");
     }
     return 0;
}
