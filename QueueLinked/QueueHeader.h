#ifndef QUEUEHEADER_H_INCLUDED
#define QUEUEHEADER_H_INCLUDED
#include <stdlib.h>
#define QueueEntry int
typedef struct queuenode{
    QueueEntry entry;
    struct queuenode *next;
}QueueNode;
typedef struct queue{
    QueueNode *front;
    QueueNode *rear;
    int size;
}Queue;
void CreateQueue(Queue *);
void Append(QueueEntry ,Queue *);
void Serve(QueueEntry *,Queue *);
int QueueEmpty(Queue *);
int QueueFull(Queue *);
int QueueSize(Queue *);
void ClearQueue(Queue *);
void TraverseQueue(Queue *, void (*)(QueueEntry));
#endif // QUEUEHEADER_H_INCLUDED
