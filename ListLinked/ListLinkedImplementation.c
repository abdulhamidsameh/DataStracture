#include "ListHeader.h"
void CreateList(List *pl){
    pl->head=NULL;
    pl->size=0;
}
int ListEmpty(List *pl){
    return pl->size == 0;
}
int ListFull(List *pl){
    return 0;
}
int ListSize(List *pl){
    return pl->size;
}
void DestroyList(List *pl){
    ListNode *q;
    while(pl->head){
        q=pl->head->next;
        free(pl->head);
        pl->head=q;
    }
    pl->size=0;
}
void TraverseList(List *pl,void (*pf)(ListEntry)){
    ListNode *p=pl->head;
    while(p){
        (*pf)(p->entry);
        p=p->next;
    }
}
void InsertList(int pos,ListEntry e,List *pl){
    ListNode *p,*q;
    int i;
    p = (ListNode *)malloc(sizeof(ListNode));
    p->entry=e;
    p->next=NULL;
    if(pos==0){
        p->next=pl->head;
        pl->head=p;
    }else{
        for(q=pl->head,i=0;i<pos-1;i++)
            q=q->next;
        p->next=q->next;
        q->next=p;
    }
    pl->size++;
}
void DeleteList(int pos,ListEntry *pe,List *pl){
    int i;
    ListNode *q,*temp;
    if(pos==0){
        *pe=pl->head->entry;
        temp=pl->head->next;
        free(pl->head);
        pl->head=temp;
    }else{
        for(i=0,q=pl->head;i<pos-1;i++)
            q=q->next;
        *pe=q->next->entry;
        temp=q->next->next;
        free(q->next);
        q->next=temp;
    }
    pl->size--;
}
void RetrieveList(int pos,ListEntry *pe,List *pl){
    int i;
    ListNode *q;
    for(i=0,q=pl->head;i<pos;i++)
        q=q->next;
    *pe=q->entry;
}
void ReplaceList(int pos,ListEntry e,List *pl){
    int i;
    ListNode *q;
    for(i=0,q=pl->head;i<pos;i++)
        q=q->next;
    q->entry=e;
}
