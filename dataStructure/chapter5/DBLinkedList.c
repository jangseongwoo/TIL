#include <stdio.h>
#include <stdlib.h>
#include "DBLinkedList.h"

void ListInit(List *plist)
{
    plist->cur = NULL;
    plist->head = NULL;
    plist->numOfData = 0;
}

void LInsert(List *plist, Data data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next =NULL;
    newNode->prev = NULL;
    Node *temp;
    if (plist->head == NULL)
    {
        plist->head = newNode;
        plist->cur = newNode;
    }
    else
    {
        temp = plist->head;
        while (temp->next != NULL)
        {
            temp = temp->next; 
        }
        temp->next = newNode;
        newNode->prev = temp->next;
    }

    plist->numOfData++;
}
//void LInsertFront(List *plist, Data data);

int LFirst(List *plist, Data *pdata)
{
    if(plist->head == NULL)
        return -1;
    
    plist->cur= plist->head;
    *pdata = plist->cur->data;

    return 1;
}
int LNext(List *plist, Data *pdata)
{
    if(plist->cur == NULL)
        return -1;

    *pdata = plist->cur->data;

    return 1;
}
//Data LRemove(List *plist);
int LCount(List *plist)
{
    return plist->numOfData;
}

int LPrevious(List* plist, Data *pdata){
    plist->cur = plist->cur->prev;
    
    *pdata = plist->cur->data;

    return 1;
}
