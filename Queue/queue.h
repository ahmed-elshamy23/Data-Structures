#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue
{
int arr[10000];
int start;
int end;
} queue;

typedef enum errorCode
{
OK,
EMPTY_QUEUE,
FULL_QUEUE
} errorCode;

errorCode queueInit(queue *q);

errorCode enqueueElement(queue *q, int element);

errorCode dequeueElement(queue *q);

errorCode printFirstElementInQueue(queue *q);

errorCode printLastElementInQueue(queue *q);

errorCode printQueue(queue *q);

#endif