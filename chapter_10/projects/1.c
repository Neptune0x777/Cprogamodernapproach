#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top= 0;

void stack_underflow(void);
void stack_overflow(void);
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);

int main(void)
{
    char ch;
    printf("Enter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n') {
        if (ch == '(' || ch == '{') {
            push(ch);
        } 
        else if (ch == ')') {
            if (is_empty() || pop() != '(') {
                printf("Parentheses/braces arent nested properly\n");
                return 0;
            }
        }
        else if (ch == '}') {
            if (is_empty() || pop() != '{') {
                printf("Parentheses/braces arent nested properly\n");
                return 0;
            }
        }
    }
    if (is_empty()) 
        printf("Parentheses/braces are nested properly\n");
    else
        printf("Parentheses/braces arent nested properly\n");

    return 0;
}

void stack_underflow(void) 
{
    printf("Parentheses/braces arent nested properly\n");
    exit(EXIT_FAILURE);
}
void stack_overflow(void)
{
    printf("Stack Overflow!\n");
    exit(EXIT_FAILURE);
}
void make_empty(void)
{
    top=0;
}
bool is_empty(void)
{
    return top == 0;
}
bool is_full(void)
{
    return top == STACK_SIZE;
}
void push(char ch)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = ch;
}
char pop(void)
{
if (is_empty())
    stack_underflow();
else
    return contents[--top];
}
