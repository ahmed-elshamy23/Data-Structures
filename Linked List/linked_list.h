#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node
{
    int data;
    struct node *nextNode;
} node;

node *createNode(int element);

void printList(node *list);

node *addElementToHead(node *list, int element);

void addElementToTail(node *list, int element);

void addElementToPosition(node *list, int element, int position);

node *removeElementFromHead(node *list);

void removeElementFromTail(node *list);

void removeElementFromPosition(node *list, int position);

int findInList(node *list, int element);

#endif