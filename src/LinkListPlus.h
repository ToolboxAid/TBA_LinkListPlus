#pragma once

#ifndef LinkListPlus_h
#define LinkListPlus_h

#include <Arduino.h>

#include <stdio.h>
#include <stdlib.h>

#include "ElementBase.h"

class LinkListPlus
{
private:
    typedef struct node /* Definition of Node structure for Doubly Linked List */
    {
        struct node *prev;
        struct node *next;
        ElementBase *data;
    } node;

    int nodeCount = 0;

    node *head = NULL;
    node *tail = NULL;
    node *temp = NULL;
    node *current = NULL;

protected:
public:

    LinkListPlus();
    ~LinkListPlus();

    int getNodeCount();

    void setCurrentToHead();
    ElementBase *getNext();

    void setCurrentToTail();
    ElementBase *getPrev();

    void explainYourself();

    /* Function to insert a node at the beginning of the linked list */
    uint16_t insertAtBegin(ElementBase *elementBase);

    /* Function to insert Node at end */
    uint16_t insertAtEnd(ElementBase *elementBase);

    /* Function to insert Node at any position pos */
    uint16_t insertAtPos(ElementBase *elementBase, int pos);

    /* Function to search for ID */
    ElementBase *searchID(uint16_t elementID);
    /* Function to search for ID */
    ElementBase *searchName(char *name);

    /* Function to delete node at the beginning of the list */
    void delAtBegin();

    /* Function to delete at the end of the list */
    void delAtEnd();

    /* Function to delete the node at a given position pos */
    void delAtPos(int pos);

    /* Function to search for ID */
    bool deleteID(uint16_t elementID);

    /* Function to search for ID */
    bool deleteName(char *name);

    /* Function to traverseForward the Doubly Linked List  (used for testing only)*/
    void clearLinkList();

    /*  TESTIN ONLY BELOW HERE

        TESTIN ONLY BELOW HERE

        TESTIN ONLY BELOW HERE

        TESTIN ONLY BELOW HERE
    */

    void traversePrint(node *ptr);

    /* Function to traverseForward the Doubly Linked List  (used for testing only)*/
    void traverseForward();

    /* Function to traverseBackward the Doubly Linked List  (used for testing only)*/
    void traverseBackward();
};

#endif