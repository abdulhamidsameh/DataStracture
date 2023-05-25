#ifndef STACKHEADER_H_INCLUDED
#define STACKHEADER_H_INCLUDED
#include <stdlib.h>
#define StackEntry int
typedef struct stacknode{
    StackEntry entry;
    struct stacknode *next;
}StackNode;
typedef struct stack{
    StackNode *top;
    int size;
}Stack;

//pre :the stack is initailized
//post:the stack is empty
void CreateStack(Stack *);
//pre : the stack is initialized and not full
//post: the element e has been stored at the top of the stack and e does not change
void Push(StackEntry ,Stack *);
//pre :the stack is initialized
//post:if stack full return 1 otherwise return 0
int StackFull(Stack *);
//pre :the stack is initialized and not empty
//post:the last element entered is returned
void Pop(StackEntry *,Stack *);
//pre :the stack is initialized
//post:if stack is empty return 1 otherwise return 0
int StackEmpty(Stack *);
//pre :the stack is initialized and not empty
//post:the last element entered is returned
void StackTop(StackEntry *,Stack *);
//pre :the stack is initialized
//post:how many element exist
int StackSize(Stack *);
//pre :the stack is initialized
//post:destroy all element ,stack looks initialized
void ClearStack(Stack *);
void TraverseStack(Stack *,void (*)(StackEntry));
#endif // STACKHEADER_H_INCLUDED
