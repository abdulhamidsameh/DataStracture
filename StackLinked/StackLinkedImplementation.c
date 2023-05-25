#include"StackHeader.h"
void CreateStack(Stack *ps)
{
    ps->size=0;
    ps->top=NULL;
}
void Push(StackEntry e,Stack *ps)
{
    StackNode *pn=(StackNode*)malloc(sizeof(StackNode));
    pn->entry=e;
    pn->next=ps->top;
    ps->top=pn;
    ps->size++;
}
int StackFull(Stack *ps)
{
    return 0;
}
void Pop(StackEntry *pe,Stack *ps)
{
    StackNode *pn;
    *pe=ps->top->entry;
    pn=ps->top;
    ps->top=ps->top->next;
    free(pn);
    ps->size--;
}
int StackEmpty(Stack *ps)
{
    return (!ps->size);
}
void StackTop(StackEntry *pe,Stack *ps)
{
    *pe=ps->top->entry;
}
int StackSize(Stack *ps)
{
    return ps->size;
}
void ClearStack(Stack *ps)
{
    StackNode *pn=ps->top;
    StackNode *qn=ps->top;
    while(pn){
        pn=pn->next;
        free(qn);
        qn=pn;
    }
    ps->top=NULL;
    ps->size=0;
}
void TraverseStack(Stack *ps,void (*pf)(StackEntry))
{

    for(StackNode *pn=ps->top;pn;pn=pn->next)
        (*pf)(pn->entry);
}
