#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
problem website
https://www.acmicpc.net/problem/10828

[Main Points]
1. Make Stack

[Solution]
1. Same as Main Points

*/

typedef struct Stack
{
    int data;
    struct Stack *next;
} Stack;

Stack *newStack()
{
    Stack *newNode = (Stack *)malloc(sizeof(Stack));
    newNode->data = 0;
    newNode->next = NULL;

    return newNode;
}

int isEmpty(Stack *stack)
{
    if (stack == NULL)
        return 1;
    return 0;
}

void push(Stack **stack, int data)
{
    Stack *newNode = newStack();
    newNode->data = data;
    newNode->next = *stack;
    *stack = newNode;
}

int pop(Stack **stack)
{
    if (isEmpty(*stack))
        return -1;
    Stack *tmp = *stack;
    int popData = (*stack)->data;
    *stack = (*stack)->next;
    free(tmp);
    return popData;
}

int size(Stack *stack)
{
    int count = 0;
    while (!isEmpty(stack))
    {
        count++;
        stack = stack->next;
    }
    return count;
}

int top(Stack *stack)
{
    if (isEmpty(stack))
        return -1;
    return stack->data;
}

void commandStack(Stack **stack)
{
    char command[10];
    scanf("%s", command);
    if (strcmp(command, "push") == 0)
    {
        int data;
        scanf("%d", &data);
        push(stack, data);
    }

    if (strcmp(command, "pop") == 0)
    {
        printf("%d\n", pop(stack));
    }
    if (strcmp(command, "size") == 0)
    {
        printf("%d\n", size(*stack));
    }
    if (strcmp(command, "empty") == 0)
    {
        printf("%d\n", isEmpty(*stack));
    }
    if (strcmp(command, "top") == 0)
    {
        printf("%d\n", top(*stack));
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    Stack *stack = NULL;

    while (num--)
    {
        commandStack(&stack);
    }
}