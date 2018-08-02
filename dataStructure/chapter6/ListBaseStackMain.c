#include <stdio.h>
#include "ListBaseStack.h"

int main()
{
    Stack stack;
    StackInit(&stack);

    printf("insert start \n");
    SPush(&stack, 1);
    SPush(&stack, 2);
    SPush(&stack, 3);
    SPush(&stack, 4);
    SPush(&stack, 5);

    printf("insert ok \n");

    while (!SIsEmpty(&stack))
        printf("%d ", SPop(&stack));

    return 0;
}