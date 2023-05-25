#include <stdio.h>
#include <stdlib.h>
#include "StackHeader.h"

int main()
{
    void Display(StackEntry e)
    {
        printf("e is : %d\n",e);
    }
    Stack s;
    CreateStack(&s);
    Push(1,&s);
    Push(2,&s);
    Push(3,&s);
    Push(4,&s);
    Push(5,&s);
    Push(6,&s);
    printf("%d\n",StackSize(&s));
    int x;
    Pop(&x,&s);
    printf("%d\n",x);
    printf("%d\n",StackSize(&s));
    printf("%d\n",StackEmpty(&s));
    StackTop(&x,&s);
    printf("%d\n",x);
    StackTop(&x,&s);
    printf("%d\n",x);
    StackTop(&x,&s);
    printf("%d\n",x);
    StackTop(&x,&s);
    printf("%d\n",x);
    StackTop(&x,&s);
    printf("%d\n",x);
    printf("%d\n",StackSize(&s));
    TraverseStack(&s,&Display);
    printf("Hello world!\n");
    return 0;
}
