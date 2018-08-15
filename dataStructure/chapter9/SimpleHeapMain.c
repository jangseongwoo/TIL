#include <stdio.h>
#include "SimpleHeap.h"

int main(){
    Heap heap;
    HeapInit(&heap);

    HInsert(&heap, 'A',1);
    HInsert(&heap, 'B',2);
    HInsert(&heap, 'C',3);
    HInsert(&heap, 'A',1);
    HInsert(&heap, 'B',2);

    while(!HIsEmpty(&heap))
        printf("%c \n", HDelete(&heap));

    return 0;


}