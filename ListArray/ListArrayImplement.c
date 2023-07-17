#include "ListHeader.h"
void CreateList(List *pl){
    pl->size=0;
}
int ListEmpty(List *pl){
    return !pl->size;
}
int ListFull(List *pl){
    return pl->size==MAXLIST;
}
int ListSize(List *pl){
    return pl->size;
}
void DestroyList(List *pl){
    pl->size=0;
}
void InsertList(int p,ListEntry e,List *pl){
    int i;
    for(i=pl->size-1;i>=p;i--){
        pl->entry[i+1]=pl->entry[i];
    }
    pl->entry[p]=e;
    pl->size++;
}
void DeleteList(int p,ListEntry *pe,List *pl){
    *pe=pl->entry[p];
    int i;
    for(i=p+1;i<pl->size-1;i++){
        pl->entry[i-1]=pl->entry[i];
    }
    pl->size--;
}
void RetrieveList(int p,ListEntry *pe,List *pl){
    *pe=pl->entry[p];
}
void ReplaceList(int p,ListEntry e,List *pl){
    pl->entry[p]=e;
}
void TraverseList(List *pl,void (*pf)(ListEntry)){
    int i;
    for(i=0;i<pl->size;i++){
        (*pf)(pl->entry[i]);
    }
}


