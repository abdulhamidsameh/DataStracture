#include <stdio.h>
#include <stdlib.h>
#include "ListHeader.h"
int main()
{
    void Display(ListEntry e)
    {
        printf("l is : %d\n",e);
    }
    List l;
    CreateList(&l);
    printf("%d\n",ListEmpty(&l));
    printf("%d\n",ListFull(&l));
    printf("%d\n",ListSize(&l));
    printf("**********************************\n");
    DestroyList(&l);
    printf("%d\n",ListEmpty(&l));
    printf("%d\n",ListFull(&l));
    printf("%d\n",ListSize(&l));
    printf("**********************************\n");

    printf("%d\n",ListEmpty(&l));
    printf("%d\n",ListFull(&l));
    printf("%d\n",ListSize(&l));
     InsertList(0,122,&l);
    InsertList(1,1,&l);
    InsertList(2,2,&l);
    InsertList(3,3,&l);
    InsertList(4,4,&l);
    InsertList(5,5,&l);
    InsertList(6,6,&l);
    InsertList(7,7,&l);
    InsertList(8,8,&l);
    InsertList(9,9,&l);
    printf("%d\n",ListSize(&l));
    printf("**********************************\n");

    printf("%d\n",ListSize(&l));
    printf("**********************************\n");
    int x;

    printf("%d\n",ListSize(&l));
    printf("**********************************\n");
    TraverseList(&l,&Display);
    return 0;
}
