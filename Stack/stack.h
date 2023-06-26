#ifndef STACK_H
#define STACK_H

typedef struct stack
{
    int arr[10000];
    int sp;
} stack;

typedef enum errorCode
{
    OK,
    EMPTY_STACK,
    FULL_STACK
} errorCode;

errorCode stackInit(stack *s);

errorCode stackPush(stack *s, int data);

errorCode stackPop(stack *s);

errorCode printLastElementInStack(stack *s);

errorCode printStack(stack *s);

#endif