#ifndef LISTHEADER_H_INCLUDED
#define LISTHEADER_H_INCLUDED
#define ListEntry int
#include <stdio.h>
#include <stdlib.h>
typedef struct listnode{
    ListEntry entry;
    struct listnode *next;
}ListNode;
typedef struct list{
    ListNode *head;
    int size;
}List;
void CreateList(List *);
int ListEmpty(List *);
int ListFull(List *);
int ListSize(List *);
void DestroyList(List *);
void InsertList(int ,ListEntry ,List *);
void DeleteList(int ,ListEntry *,List *);
void RetrieveList(int ,ListEntry *,List *);
void ReplaceList(int ,ListEntry ,List *);
void TraverseList(List *,void (*)(ListEntry));

#endif // LISTHEADER_H_INCLUDED
