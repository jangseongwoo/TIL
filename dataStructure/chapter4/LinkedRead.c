#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    int data;
    struct _node *next;
} Node;

int main()
{
    Node *head = NULL;
    Node *temp = NULL;
    Node *deleteNext = NULL;
    Node *tail = NULL;
    //Node *newNode=NULL;
    int data;

    while (1)
    {
        scanf("%d", &data);
        if (data < 0)
            break;

        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL)
         {   
            head = newNode;
            tail = newNode;
            //printf("first %d \t", head->data);
        }
        else
        {
            newNode->next = head;
            head = newNode;
            //printf("next %d \t", head->data);
        }
        
    }

    printf("show all\n");

    if(head == NULL){
        printf("error");
    }
    else{
        temp = head;
        printf("data: %d \t", temp->data);

        while(temp->next != NULL){
            temp= temp->next;
            printf("data: %d \t", temp->data);
        }
    }

    if(head==NULL)
        return 0;
    else{
        temp = head;
        deleteNext = head->next;

        free(temp);

        while(deleteNext->next !=NULL){
            temp = deleteNext;
            deleteNext = deleteNext->next;

            free(temp);
        }
    }

    return 0;
}