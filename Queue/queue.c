#include <stdio.h>
#include "queue.h"

errorCode queueInit(queue *q)
{
    q->start = -1;
    q->end = -1;
    return OK;
}

errorCode enqueueElement(queue *q, int element)
{
    if (q->end == 10000)
    {
        printf("The queue is full. Can't enqueue more elements.\n");
        return FULL_QUEUE;
    }
    q->end++;
    q->arr[q->end] = element;
    return OK;
}

errorCode dequeueElement(queue *q)
{
    if (q->end == -1)
    {
        printf("The queue is empty. Can't dequeue elements.\n");
        return EMPTY_QUEUE;
    }
    q->start++;
    if (q->start == q->end)
    {
        q->start = -1;
        q->end = -1;
    }
    return OK;
}

errorCode printFirstElementInQueue(queue *q)
{
    if (q->end == -1)
    {
        printf("The queue is empty. Can't print elements.\n");
        return EMPTY_QUEUE;
    }
    printf("%d\n", q->arr[q->start + 1]);
    return OK;
}

errorCode printLastElementInQueue(queue *q)
{
    if (q->end == -1)
    {
        printf("The queue is empty. Can't print elements.\n");
        return EMPTY_QUEUE;
    }
    printf("%d\n", q->arr[q->end]);
    return OK;
}

errorCode printQueue(queue *q)
{
    if (q->end == -1)
    {
        printf("The queue is empty. Can't print elements.\n");
        return EMPTY_QUEUE;
    }
    for (int i = q->start + 1; i <= q->end; i++)
        printf("%d ", q->arr[i]);
    printf("\n");
    return OK;
}