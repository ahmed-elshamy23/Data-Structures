#include <stdio.h>
#include "stack.h"

errorCode stackInit(stack *s)
{
    s->sp = -1;
    return OK;
}

errorCode stackPush(stack *s, int data)
{
    if (s->sp == 10000)
    {
        printf("The stack is full. Can't push more elements\n");
        return FULL_STACK;
    }
    s->sp++;
    s->arr[s->sp] = data;
    return OK;
}

errorCode stackPop(stack *s)
{
    if (s->sp == -1)
    {
        printf("The stack is empty. Can't pop more elements\n");
        return EMPTY_STACK;
    }
    s->sp--;
    return OK;
}

errorCode printLastElementInStack(stack *s)
{
    if (s->sp == -1)
    {
        printf("The stack is empty. Can't print elements\n");
        return EMPTY_STACK;
    }
    printf("%d\n", s->arr[s->sp]);
    return OK;
}

errorCode printStack(stack *s)
{
    if (s->sp == -1)
    {
        printf("The stack is empty. Can't print elements\n");
        return EMPTY_STACK;
    }
    for (int i = 0; i <= s->sp; i++)
        printf("%d ", s->arr[i]);
    printf("\n");
    return OK;
}