#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

node *createNode(int element)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = element;
    newNode->nextNode = NULL;
    return newNode;
}

void printList(node *list)
{
    node *temp = list;
    while (1)
    {
        printf("%d ", temp->data);
        if (temp->nextNode != NULL)
            temp = temp->nextNode;
        else
            break;
    }
    printf("\n");
}

node *addElementToHead(node *list, int element)
{
    node *newNode = createNode(element);
    newNode->nextNode = list;
    return newNode;
}

void addElementToTail(node *list, int element)
{
    node *temp = list, *newNode = createNode(element);
    while (temp->nextNode != NULL)
        temp = temp->nextNode;
    temp->nextNode = newNode;
}

void addElementToPosition(node *list, int element, int position)
{
    node *temp = list, *newNode = createNode(element);
    position--;
    while (position--)
        temp = temp->nextNode;
    newNode->nextNode = temp->nextNode;
    temp->nextNode = newNode;
}

node *removeElementFromHead(node *list)
{
    node *temp = list;
    temp = temp->nextNode;
    return temp;
}

void removeElementFromTail(node *list)
{
    node *temp = list;
    while (temp->nextNode->nextNode != NULL)
        temp = temp->nextNode;
    temp->nextNode = NULL;
}

void removeElementFromPosition(node *list, int position)
{
    node *temp = list;
    position--;
    while (position--)
        temp = temp->nextNode;
    temp->nextNode = temp->nextNode->nextNode;
}

int findInList(node *list, int element)
{
    node *temp = list;
    int c = 0;
    while (1)
    {
        if (temp->data == element)
            return c;
        c++;
        if (temp->nextNode == NULL)
            break;
        temp = temp->nextNode;
    }
    return -1;
}