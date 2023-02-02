// C program to implement all functions
// used in Double Linked List
#include <Arduino.h>

#include "LinkListPlus.h"
#include "ElementBase.h"

void itoratorForward(LinkListPlus *linkListPlus)
{
    // To iterate Node from Head to Tail
    Serial.println("Linked List iterate Node from Head to Tail: ");
    linkListPlus->setCurrentToHead();
    ElementBase *current = linkListPlus->getNext();
    while (NULL != current)
    {
        Serial.print(" data: '");
        Serial.print((uint)current, HEX);
        Serial.print("' ");
        current->debugSerial("forward");

        current = linkListPlus->getNext();
    }
    Serial.print("Linked List nodeCount: ");
    Serial.println(linkListPlus->getNodeCount());
    Serial.println("\n\n");
}
void itoratorBackward(LinkListPlus *linkListPlus)
{ // ===================================== // To iterate Node from Tail to Head
    Serial.println("Linked List iterate Node from Tail to Head: ");
    linkListPlus->setCurrentToTail();
    ElementBase *current = linkListPlus->getPrev();
    while (NULL != current)
    {
        Serial.print("  data: '");
        Serial.print((uint)current, HEX);
        Serial.print("' ");
        current->debugSerial("back");

        current = linkListPlus->getPrev();
    }
    Serial.print("Linked List nodeCount: ");
    Serial.println(linkListPlus->getNodeCount());
    Serial.println("\n\n");
}

void insertNoData(LinkListPlus *linkListPlus)
{ // Adding node(s) to the linked List
    Serial.println("Linked List BAD insert(s): verify fail: no insert and return ID: 0");

    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(NULL));

    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtBegin(NULL));

    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(NULL));

    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtPos(NULL, 1));

    // bottom
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtPos(NULL, linkListPlus->getNodeCount() + 1));

    // middle
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtPos(NULL, 5));

    // To print the linked List
    linkListPlus->traverseForward();
}

void insert(LinkListPlus *linkListPlus)
{ // Adding node(s) to the linked List

    Serial.println("Linked List insert(s): ");

    ElementBase *base1 = new ElementBase("hello world 1");
    base1->debugSerial("test 1");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(base1));

    ElementBase *base2 = new ElementBase("hello world 2");
    base2->debugSerial("test 2");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(base2));

    ElementBase *base3 = new ElementBase("hello world 3");
    base3->debugSerial("test 3");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(base3));

    ElementBase *base4 = new ElementBase("hello world 4");
    base4->debugSerial("test 4");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(base4));

    ElementBase *base5 = new ElementBase("hello world 5");
    base5->debugSerial("test 5");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(base5));

    // To print the linked List
    linkListPlus->traverseForward();
}
void insertMore(LinkListPlus *linkListPlus)
{ // Adding node(s) to the linked List
    Serial.println("Linked List insert more: ");

    ElementBase *baseB = new ElementBase("hello world B");
    baseB->debugSerial("test B");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(baseB));

    ElementBase *baseC = new ElementBase("hello world C");
    baseC->debugSerial("test C");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(baseC));

    ElementBase *baseD = new ElementBase("hello world D");
    baseD->debugSerial("test D");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(baseD));

    ElementBase *baseE = new ElementBase("hello world E");
    baseE->debugSerial("test E");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(baseE));

    ElementBase *baseF = new ElementBase("hello world F");
    baseF->debugSerial("test F");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(baseF));

    // To print the linked List
    linkListPlus->traverseForward();
}
void insertBegin(LinkListPlus *linkListPlus)
{
    Serial.println("Linked List inserting at begin: ");
    ElementBase *base6 = new ElementBase("hello world 6");
    base6->debugSerial("test 6");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtBegin(base6)); // insertAtBegin(1);
    linkListPlus->traverseForward();
}
void insertEnd(LinkListPlus *linkListPlus)
{
    Serial.println("Linked List inserting at end: ");
    ElementBase *base7 = new ElementBase("hello world 7");
    base7->debugSerial("test 7");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(base7));
    linkListPlus->traverseForward();
}
void insertAt(LinkListPlus *linkListPlus)
{ // top
    Serial.println("Linked List inserting at (1) begin: ");
    ElementBase *base8 = new ElementBase("hello world 8");
    base8->debugSerial("test 8");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtPos(base8, 1));
    linkListPlus->traverseForward();

    // bottom
    Serial.println("Linked List inserting at (9) end: ");
    ElementBase *base9 = new ElementBase("hello world 9");
    base9->debugSerial("test 9");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtPos(base9, linkListPlus->getNodeCount() + 1));
    linkListPlus->traverseForward();

    // middle
    Serial.println("Linked List inserting at (5) middle: ");
    ElementBase *baseA = new ElementBase("hello world A");
    baseA->debugSerial("test A");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtPos(baseA, 5));
    linkListPlus->traverseForward();
}

void searchForID(LinkListPlus *linkListPlus, uint16_t id)
{
    Serial.print("Search For ID: '");
    Serial.print(id);
    Serial.print("'   ");

    ElementBase *eb = linkListPlus->searchID(id);
    if (NULL == eb)
    {
        Serial.println("*** 'not found' ***");
    }
    else
    {
        eb->debugSerial("found");
    }
}
void searchForName(LinkListPlus *linkListPlus, const char *name)
{
    Serial.print("Search For name: '");
    Serial.print(name);
    Serial.print("'   ");

    ElementBase *eb = linkListPlus->searchName(name);
    if (NULL == eb)
    {
        Serial.println("*** 'not found' ***");
    }
    else
    {
        eb->debugSerial("found");
    }
}

void deleteForID(LinkListPlus *linkListPlus, uint16_t id)
{
    Serial.print("Delete For ID: ");
    Serial.print(id);
    Serial.print("   ");

    bool deleted = linkListPlus->deleteID(id);
    if (deleted)
    {
        Serial.println("*** 'found and deleted' ***");
    }
    else
    {
        Serial.println("*** 'not found' ***");
    }
}
void deleteForName(LinkListPlus *linkListPlus, const char *name)
{
    Serial.print("Delete For name: ");
    Serial.print(name);
    Serial.print("   ");

    bool deleted = linkListPlus->deleteName(name);
    if (deleted)
    {
        Serial.println("*** 'found and deleted' ***");
    }
    else
    {
        Serial.println("*** 'not found' ***");
    }
}

void deleteBegin(LinkListPlus *linkListPlus)
{
    Serial.println("Linked List delete node at begin: ");
    linkListPlus->delAtBegin();
    linkListPlus->traverseForward();
}
void deleteEnd(LinkListPlus *linkListPlus)
{
    Serial.println("Linked List delete node at end: ");
    linkListPlus->delAtEnd();
    linkListPlus->traverseForward();
}
void deleteMiddle(LinkListPlus *linkListPlus)
{
    Serial.println("Linked List delete node at position 4: ");
    linkListPlus->delAtPos(4);
    linkListPlus->traverseForward();
}

void clearList(LinkListPlus *linkListPlus)
{
    Serial.println("Clearing Linked List: ");

    linkListPlus->clearLinkList();

    Serial.print("Linked List nodeCount: ");
    Serial.print(linkListPlus->getNodeCount());
    Serial.println("\n\n");
}

void setup() /* Test code */
{
    // Use serial port
    Serial.begin(115200);
    while (!Serial && (millis() <= 5000))
        ;

    Serial.println("\n\n===========================================");
    Serial.println("LinkListPlus memory free via destructor...");
    Serial.println("===========================================");
    LinkListPlus *linkListPlus = new LinkListPlus();

    insertNoData(linkListPlus); // continues to be an empty list
    insert(linkListPlus);
    insertNoData(linkListPlus); // only valid data populate from prior step  the list
    insertBegin(linkListPlus);
    insertEnd(linkListPlus);
    insertAt(linkListPlus);

    Serial.println("Search by ID");
    searchForID(linkListPlus, 10);
    searchForID(linkListPlus, 6);
    searchForID(linkListPlus, 9);
    searchForID(linkListPlus, 99);
    Serial.println("\n\n");

    Serial.println("Search by Name");
    searchForName(linkListPlus, "hello world 8");
    searchForName(linkListPlus, "hello world 9");
    searchForName(linkListPlus, "hello world A");
    searchForName(linkListPlus, "fake name");
    Serial.println("\n\n");

    Serial.println("Deleting by ID");
    deleteForID(linkListPlus, 8);
    deleteForID(linkListPlus, 9);
    deleteForID(linkListPlus, 10);
    deleteForID(linkListPlus, 99);
    linkListPlus->traverseForward();

    Serial.println("Deleting by Name");
    deleteForName(linkListPlus, "hello world 6");
    deleteForName(linkListPlus, "hello world 7");
    deleteForName(linkListPlus, "hello world 3");
    deleteForName(linkListPlus, "fake name");
    linkListPlus->traverseForward();

    insertMore(linkListPlus);

    deleteBegin(linkListPlus);
    deleteMiddle(linkListPlus);
    deleteEnd(linkListPlus);

    // *** no need, already run many times ***
    // Iterate Node from Head to Tail
    // linkListPlus->traverseForward();
    // Serial.println("");

    // Iterate Node from Tail to Head
    linkListPlus->traverseBackward();

    // Iterate Node from Head to Tail
    itoratorForward(linkListPlus);

    // Iterate Node from Tail to Head
    itoratorBackward(linkListPlus);

    /* Not needed: this is part of the LinkList delete functions
        Serial.println("Linked List DeleteElements...needs replaced");
        deleteDataElements();
    */

    linkListPlus->clearLinkList();
}

void loop(/* forever */)
{
    Serial.print(".");
    delay(1000);
}
