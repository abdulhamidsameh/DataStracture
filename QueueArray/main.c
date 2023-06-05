#include <stdio.h>
#include <stdlib.h>
#include "QueueHeader.h"
int main()
{
    void Display(QueueEntry e)
    {
        printf("e is : %d\n",e);
    }
    printf("Hello world!\n");
    Queue q;
    CreateQueue(&q);
    printf("%d\n",QueueEmpty(&q));
    printf("%d\n",QueueSize(&q));
    printf("%d\n\n",QueueFull(&q));
    Append(1,&q);
    Append(2,&q);
    Append(3,&q);
    Append(4,&q);
    Append(5,&q);
    Append(6,&q);
    Append(7,&q);
    printf("%d\n",QueueEmpty(&q));
    printf("%d\n",QueueSize(&q));
    printf("%d\n\n",QueueFull(&q));
    ClearQueue(&q);
    printf("%d\n",QueueEmpty(&q));
    printf("%d\n",QueueSize(&q));
    printf("%d\n\n",QueueFull(&q));
    Append(1,&q);
    Append(2,&q);
    Append(3,&q);
    Append(4,&q);
    Append(5,&q);
    Append(6,&q);
    Append(7,&q);
    TraverseQueue(&q,&Display);
    int x;
    Serve(&x,&q);
    printf("%d\n",x);
    Serve(&x,&q);
    printf("%d\n",x);
    Serve(&x,&q);
    printf("%d\n",x);
    Serve(&x,&q);
    printf("%d\n",x);
    Serve(&x,&q);
    printf("%d\n",x);
    Serve(&x,&q);
    printf("%d\n",x);
    Serve(&x,&q);
    printf("%d\n",x);
    printf("%d\n",QueueEmpty(&q));
    printf("%d\n",QueueSize(&q));
    printf("%d\n\n",QueueFull(&q));
    return 0;
}
