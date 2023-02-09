#pragma once

#ifndef LinkListPlus_cpp
#define LinkListPlus_cpp

#include "..\LinkListDebug.h" // You are required to create this file in every Project that uses LinkListPlus at root folder \LinkListDebug.h
// LinkListPlusDebug

#include "LinkListPlus.h"

const char *validPosition = "Please enter a valid position";
const char *explainYourSelf = "*** elementBase not set...explain yourself? Node NOT added!!!";

LinkListPlus::LinkListPlus() {}
LinkListPlus::~LinkListPlus() {}

int LinkListPlus::getNodeCount()
{
    return nodeCount;
}

void LinkListPlus::setCurrentToHead()
{
    current = head;
}
ElementBase *LinkListPlus::getNext()
{ /* Nodes points from head node to tail node */
    temp = current;
    if (current == NULL)
    {
        return NULL;
    }
    else
    {
        current = current->next;
    }
    return temp->data;
}

void LinkListPlus::setCurrentToTail()
{
    current = tail;
}
ElementBase *LinkListPlus::getPrev()
{ /* Nodes points from tail node to head node */
    temp = current;
    if (current == NULL)
    {
        return NULL;
    }
    else
    {
        current = current->prev;
    }
    return temp->data;
}

void LinkListPlus::explainYourself()
{
    Serial.println(explainYourSelf);
}

/* Function to insert a node at the beginning of the linked list */
uint16_t LinkListPlus::insertAtBegin(ElementBase *elementBase)
{
    if (NULL == elementBase)
    {
        explainYourself();
        return 0;
    }

    /* Allocating memory to the Node ptr */
    temp = (node *)malloc(sizeof(node));

    /* Assign value to data temp */
    temp->data = elementBase;
    /* Next and prev pointer to NULL */
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    { /* If head is NULL */
        head = temp;
        tail = head;
    }
    else
    { /* Else insert at beginning and change the head to current node */
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    nodeCount++;

    return temp->data->getIdentity();
}
/* Function to insert Node at any position pos */
uint16_t LinkListPlus::insertAtPos(ElementBase *elementBase, int pos)
{
    if (NULL == elementBase)
    {
        explainYourself();
        return 0;
    }

    /* For Invalid Position */
    if (pos < 1 || pos > nodeCount + 1)
    {
        Serial.println(validPosition);
    }
    else if (pos == 1)
    { /* If position is at the front, then call insertAtBegin() */
        return insertAtBegin(elementBase);
    }
    else if (pos == nodeCount + 1)
    { /* Position is at length of Linked list + 1, then insert at the end */
        return insertAtEnd(elementBase);
    }
    else
    { /* Else traverseForward till position pos and insert the Node */
        node *src = head;

        /* Move head pointer to pos */
        while (pos--)
        {
            src = src->next;
        }
        /* Allocate memory to new Node */
        temp = (node *)malloc(sizeof(node));
        /* Assign value to data */
        temp->data = elementBase;
        /* Change the previous and next pointer of the
           nodes inserted with previous and next node */
        temp->prev = src;
        temp->next = src->next;
        src->next = temp;
        temp->next->prev = temp;

        nodeCount++;
        return temp->data->getIdentity();
    }
    return 0;
}
/* Function to insert Node at end */
uint16_t LinkListPlus::insertAtEnd(ElementBase *elementBase)
{
    if (NULL == elementBase)
    {
        explainYourself();
        return 0;
    }

    /* Allocating memory to the Node ptr */
    temp = (node *)malloc(sizeof(node));

    /* Assign value to data temp */
    temp->data = elementBase;

    /* Next and prev pointer to NULL */
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    { /* If head is NULL */
        head = temp;
        tail = head;
    }
    else
    { /* Else insert at the end */
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
    nodeCount++;

    return temp->data->getIdentity();
}

/* Function to search for ID */
ElementBase *LinkListPlus::searchID(uint16_t elementID)
{
    if (NULL != elementID)
    {
        temp = head;

        while (temp != NULL)
        { /* While pointer is not NULL, traverseForward */
            if (temp->data->getIdentity() == elementID)
            {
                return temp->data;
            }
            temp = temp->next;
        }
    }
    return NULL;
}
/* Function to search for ID */
ElementBase *LinkListPlus::searchName(const char *name)
{
    if (NULL != name)
    {
        // Check for empty String here...
        temp = head;
        while (temp != NULL)
        { /* While pointer is not NULL, traverseForward */
            if (strcmp(temp->data->getName(), name) == 0)
            {
                return temp->data;
            }
            temp = temp->next;
        }
    }
    return NULL;
}

/* Function to delete node at the beginning of the list */
void LinkListPlus::delAtBegin()
{ // Move head to next and decrease length by 1
    temp = head;
    head = head->next;
    if (head != NULL)      // dq added.
        head->prev = NULL; // dq added.
    nodeCount--;

    delete temp->data;
    free(temp);
}
/* Function to delete the node at a given position pos */
void LinkListPlus::delAtPos(int pos)
{
    if (pos < 1 || pos > nodeCount)
    { /* If invalid position */
        Serial.println(validPosition);
    }
    else if (pos == 1)
    { /* If position is 1, then call delAtBegin() */
        delAtBegin();
    }
    else if (pos == nodeCount)
    { /* If position is at the end, then call delAtEnd() */
        delAtEnd();
    }
    else
    { /* Else traverseForward till pos, and delete the node at pos */
        /* Src node to find which node to be deleted */
        node *temp = head;
        pos--;

        /* Traverse node till pos */
        while (pos--)
        {
            temp = temp->next;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        /* Decrease the length of the Linked List */
        nodeCount--;
        delete temp->data;
        free(temp);
    }
}
/* Function to delete at the end of the list */
void LinkListPlus::delAtEnd()
{
    // Mode tail to the prev and decrease length by 1
    temp = tail; // dq from head to tail
    tail = tail->prev;
    if (tail != NULL) // dq added.
        tail->next = NULL;
    nodeCount--;
    delete temp->data;
    free(temp);
}
/* Function to search for ID */
bool LinkListPlus::deleteID(uint16_t elementID)
{
    if (NULL != elementID)
    {
        int pos = 1;

        temp = head;
        while (temp != NULL)
        { /* While pointer is not NULL, traverseForward */
            if (temp->data->getIdentity() == elementID)
            {
                delAtPos(pos);
                return true;
            }
            temp = temp->next;
            pos++;
        }
    }
    return false;
}
/* Function to search for ID */
bool LinkListPlus::deleteName(const char *name)
{
    if (NULL != name)
    {
        int pos = 1;

        temp = head;
        while (temp != NULL)
        { /* While pointer is not NULL, traverseForward */
            if (strcmp(temp->data->getName(), name) == 0)
            {
                delAtPos(pos);
                return true;
            }
            temp = temp->next;
            pos++;
        }
    }
    return false;
}

/* Function to traverseForward the Doubly Linked List  (used for testing only)*/
void LinkListPlus::clearLinkList()
{
    while (nodeCount > 0)
    {
        delAtBegin();
        // delAtEnd();
    }
}

/*  TESTIN ONLY BELOW HERE

    TESTIN ONLY BELOW HERE

    TESTIN ONLY BELOW HERE

    TESTIN ONLY BELOW HERE
*/

void LinkListPlus::traversePrint(node *ptr)
{
//#ifdef LinkListPlusDebug
    Serial.print(" prev: '");
    Serial.print((uint)ptr->prev, HEX);
    Serial.print("' ptr: '");
    Serial.print((uint)ptr, HEX);
    Serial.print("' next: '");
    Serial.print((uint)ptr->next, HEX);
    Serial.print("' data: '");
    Serial.print((uint)ptr->data, HEX);
    Serial.print("' ");
    ptr->data->debugSerial("back");
//#endif
}
/* Function to traverseForward the Doubly Linked List  (used for testing only)*/
void LinkListPlus::traverseForward() //(used for testing only)
{                                    /* Nodes points towards head node */
//#ifdef LinkListPlusDebug
    Serial.println("\n");
    Serial.println("Linked List traverseForward - Head to Tail: ");

    temp = head;

    int pos = 1;
    /* Printing info of the node */
    while (temp != NULL)
    { /* While pointer is not NULL, traverseForward and print the node */

        Serial.print("pos: '");
        Serial.print(pos++);
        Serial.print("' ");
        traversePrint(temp);
        Serial.println();

        temp = temp->next;
    }
    Serial.print("Linked List nodeCount: ");
    Serial.println(getNodeCount());
    Serial.println("\n");
//#endif
}
/* Function to traverseBackward the Doubly Linked List  (used for testing only)*/
void LinkListPlus::traverseBackward() //(used for testing only)
{
#ifdef LinkListPlusDebug
    Serial.println("Linked List traverseBackward - Tail to Head: ");

    /* Nodes points towards head node */
    temp = tail;

    int pos = getNodeCount();
    /* Printing info of the node */
    while (temp != NULL)
    { /* While pointer is not NULL, traverseForward and print the node */

        Serial.print("pos: '");
        Serial.print(pos--);
        Serial.print("' ");

        traversePrint(temp);

        temp = temp->prev;
    }
    Serial.print("Linked List nodeCount: ");
    Serial.println(getNodeCount());
    Serial.println("\n\n");
#endif
}

#endif