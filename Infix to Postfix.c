#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* stack;
int top=-1;

int isOperator(char c)
{
    if(c=='+' || c=='-' || c=='*' ||c=='/') return 1;
    else return 0;
}
void push(char c)
{
    top++;
    stack[top]=c;
}
void pop()
{
    top--;
}
int isEmpty()
{
    if(top==-1) return 1;
    else return 0;
}
int prec(char c)
{
    if(c=='+' || c=='-') return 1;
    else if(top==-1) return 0;
    else return 2;
}

void main()
{
    char* infix={"x-y*z"};
    char* postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
    stack=(char*)malloc(strlen(infix)*sizeof(char));
    printf("Expression : %s %ld",infix,strlen(infix));
    
    int i=0,j=0;
    
    while(infix[i]!='\0')
    {
        if(!isOperator(infix[i]))
        {
            postfix[j]=infix[i];
            i++,j++;
        }
        else
        {
            if(prec(stack[top]) < prec(infix[i]))
            {
                push(infix[i]);
                i++;
            }
            else
            {
                postfix[j]=stack[top];
                pop();
                j++;
            }
        }
    }
    while(!isEmpty())
    {
        postfix[j]=stack[top];
        pop();
        j++;
    }
    postfix[j]='\0';
    
    printf("\n\nResult : %s",postfix);
}
