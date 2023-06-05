#ifndef QUEUEHEADER_H_INCLUDED
#define QUEUEHEADER_H_INCLUDED
#define MAXQUEUE 100
#define QueueEntry int
typedef struct queue{
    int front;
    int rear;
    int size;
    QueueEntry entry[MAXQUEUE];
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
