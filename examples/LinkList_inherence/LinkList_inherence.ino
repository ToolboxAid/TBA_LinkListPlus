// C program to implement all functions
// used in Doubly Linked List
#include <Arduino.h>
#include "LinkListPlus.h"

#include "ElementBase.h"

// These need to move inside functions once delete/free is complete
ElementBase *base1;
ElementBase *base2;
ElementBase *base3;
ElementBase *base4;
ElementBase *base5;
ElementBase *base6;
ElementBase *base7;
ElementBase *base8;
ElementBase *base9;
ElementBase *baseA;

ElementBase *baseB;
ElementBase *baseC;
ElementBase *baseD;
ElementBase *baseE;
ElementBase *baseF;

void itoratorForward()
{
    // To iterate Node from Head to Tail
    Serial.println("Linked List iterate Node from Head to Tail: ");
    setCurrentToHead();
    node *current = getNext();
    while (NULL != current)
    {
        Serial.print("' prev: '");
        Serial.print((uint)current->prev, HEX);
        Serial.print("' ptr: '");
        Serial.print((uint)current, HEX);
        Serial.print("' next: '");
        Serial.print((uint)current->next, HEX);
        Serial.print("' data: '");
        Serial.print((uint)current->data, HEX);
        Serial.print("' ");
        current->data->debugSerial("forward");

        current = getNext();
    }
    Serial.print("Linked List nodeCount: ");
    Serial.println(getModeCount());
    Serial.println("\n\n");
}

void itoratorBackward()
{ // ===================================== // To iterate Node from Tail to Head
    Serial.println("Linked List iterate Node from Tail to Head: ");
    setCurrentToTail();
    node *current = getPrev();
    while (NULL != current)
    {
        Serial.print("' prev: '");
        Serial.print((uint)current->prev, HEX);
        Serial.print("' ptr: '");
        Serial.print((uint)current, HEX);
        Serial.print("' next: '");
        Serial.print((uint)current->next, HEX);
        Serial.print("' data: '");
        Serial.print((uint)current->data, HEX);
        Serial.print("' ");
        current->data->debugSerial("back");

        current = getPrev();
    }
    Serial.print("Linked List nodeCount: ");
    Serial.println(getModeCount());
    Serial.println("\n\n");
}

void insertNoData()
{ // Adding node(s) to the linked List
    Serial.println("Linked List BAD insert(s): verify fail: no insert and return ID: 0");

    Serial.print(" * insert ID = ");
    Serial.println(addNode(NULL));

    Serial.print(" * insert ID = ");
    Serial.println(insertAtBegin(NULL));

    Serial.print(" * insert ID = ");
    Serial.println(insertAtEnd(NULL));

    Serial.print(" * insert ID = ");
    Serial.println(insertAtPos(NULL, 1));

    // bottom
    Serial.print(" * insert ID = ");
    Serial.println(insertAtPos(NULL, getModeCount() + 1));

    // middle
    Serial.print(" * insert ID = ");
    Serial.println(insertAtPos(NULL, 5));

    // To print the linked List
    traverseForward();
}

void insert()
{ // Adding node(s) to the linked List
    Serial.println("Linked List insert(s): ");

    base1 = new ElementBase("hello world 1");
    base1->debugSerial("test 1");
    Serial.print(" * insert ID = ");
    Serial.println(addNode(base1));

    base2 = new ElementBase("hello world 2");
    base2->debugSerial("test 2");
    Serial.print(" * insert ID = ");
    Serial.println(addNode(base2));

    base3 = new ElementBase("hello world 3");
    base3->debugSerial("test 3");
    Serial.print(" * insert ID = ");
    Serial.println(addNode(base3));

    base4 = new ElementBase("hello world 4");
    base4->debugSerial("test 4");
    Serial.print(" * insert ID = ");
    Serial.println(addNode(base4));

    base5 = new ElementBase("hello world 5");
    base5->debugSerial("test 5");
    Serial.print(" * insert ID = ");
    Serial.println(addNode(base5));

    // To print the linked List
    traverseForward();
}
void insertMore()
{ // Adding node(s) to the linked List
    Serial.println("Linked List insert more: ");

    baseB = new ElementBase("hello world B");
    baseB->debugSerial("test B");
    Serial.print(" * insert ID = ");
    Serial.println(addNode(baseB));

    baseC = new ElementBase("hello world C");
    baseC->debugSerial("test C");
    Serial.print(" * insert ID = ");
    Serial.println(addNode(baseC));

    baseD = new ElementBase("hello world D");
    baseD->debugSerial("test D");
    Serial.print(" * insert ID = ");
    Serial.println(addNode(baseD));

    baseE = new ElementBase("hello world E");
    baseE->debugSerial("test E");
    Serial.print(" * insert ID = ");
    Serial.println(addNode(baseE));

    baseF = new ElementBase("hello world F");
    baseF->debugSerial("test F");
    Serial.print(" * insert ID = ");
    Serial.println(addNode(baseF));

    // To print the linked List
    traverseForward();
}
void insertBegin()
{
    Serial.println("Linked List inserting at begin: ");
    base6 = new ElementBase("hello world 6");
    base6->debugSerial("test 6");
    Serial.print(" * insert ID = ");
    Serial.println(insertAtBegin(base6)); // insertAtBegin(1);

    traverseForward();
}
void insertEnd()
{
    Serial.println("Linked List inserting at end: ");
    base7 = new ElementBase("hello world 7");
    base7->debugSerial("test 7");
    Serial.print(" * insert ID = ");
    Serial.println(insertAtEnd(base7));
    traverseForward();
}
void insertAt()
{ // top
    Serial.println("Linked List inserting at (1) begin: ");
    base8 = new ElementBase("hello world 8");
    base8->debugSerial("test 8");
    Serial.print(" * insert ID = ");
    Serial.println(insertAtPos(base8, 1));
    traverseForward();

    // bottom
    Serial.println("Linked List inserting at (9) end: ");
    base9 = new ElementBase("hello world 9");
    base9->debugSerial("test 9");
    Serial.print(" * insert ID = ");
    Serial.println(insertAtPos(base9, getModeCount() + 1));
    traverseForward();

    // middle
    Serial.println("Linked List inserting at (5) middle: ");
    baseA = new ElementBase("hello world A");
    baseA->debugSerial("test A");
    Serial.print(" * insert ID = ");
    Serial.println(insertAtPos(baseA, 5));
    traverseForward();
}

void searchForID(uint16_t id)
{
    Serial.print("Search For ID: ");
    Serial.print(id);
    Serial.print("   ");

    ElementBase *eb = searchID(id);
    if (NULL == eb)
    {
        Serial.println("*** 'not found' ***");
    }
    else
    {
        eb->debugSerial("found");
    }
}
void searchForName(char *name)
{
    Serial.print("Search For name: ");
    Serial.print(name);
    Serial.print("   ");

    ElementBase *eb = searchName(name);
    if (NULL == eb)
    {
        Serial.println("*** 'not found' ***");
    }
    else
    {
        eb->debugSerial("found");
    }
}

void deleteForID(uint16_t id)
{
    Serial.print("Delete For ID: ");
    Serial.print(id);
    Serial.print("   ");

    bool deleted = deleteID(id);
    if (deleted)
    {
        Serial.println("*** 'found and deleted' ***");
    }
    else
    {
        Serial.println("*** 'not found' ***");
    }
}

void deleteForName(char *name)
{
    Serial.print("Delete For name: ");
    Serial.print(name);
    Serial.print("   ");

    bool deleted = deleteName(name);
    if (deleted)
    {
        Serial.println("*** 'found and deleted' ***");
    }
    else
    {
        Serial.println("*** 'not found' ***");
    }
}

void deleteBegin()
{
    Serial.println("Linked List delete node at begin: ");
    delAtBegin();
    traverseForward();
}
void deleteEnd()
{
    Serial.println("Linked List delete node at end: ");
    delAtEnd();
    traverseForward();
}
void deleteMiddle()
{
    Serial.println("Linked List delete node at position 4: ");
    delAtPos(4);
    traverseForward();
}

void deleteDataElements() // need this to be a part of delete functions
{
    delete base1;
    delete base5;
    delete base2;
    delete base4;
    delete base3;
    delete base6;
    delete base7;
    delete base8;
    delete base9;
    delete baseA;

    delete baseB;
    delete baseC;
    delete baseD;
    delete baseE;
    delete baseF;
}

void setup()
{
    // Use serial port
    Serial.begin(115200);
    while (!Serial && (millis() <= 5000))
        ;

    Serial.println("\n");
    insertNoData(); // with empty list
    insert();
    insertNoData(); // with populated list
    insertBegin();
    insertEnd();
    insertAt();

    Serial.println("Search by ID");
    searchForID(10);
    searchForID(6);
    searchForID(9);
    searchForID(99);
    Serial.println("\n\n");

    Serial.println("Search by Name");
    searchForName("hello world 8");
    searchForName("hello world 9");
    searchForName("hello world A");
    searchForName("fake name");
    Serial.println("\n\n");

    Serial.println("Deleting by ID");
    deleteForID(8);
    deleteForID(9);
    deleteForID(10);
    deleteForID(99);
    traverseForward();

    Serial.println("Deleting by Name");
    deleteForName("hello world 6");
    deleteForName("hello world 7");
    deleteForName("hello world 3");
    deleteForName("fake name");
    traverseForward();

    insertMore();

    deleteBegin();
    deleteMiddle();
    deleteEnd();

    /*

    Need to add:

    - delete/free memory of data
    - if this works, clearList


    - make it a class
    */

    // *** no need, already run many times ***
    // Iterate Node from Head to Tail
    // traverseForward();
    // Serial.println("");

    // Iterate Node from Tail to Head
    traverseBackward();

    // Iterate Node from Head to Tail
    itoratorForward();

    // Iterate Node from Tail to Head
    itoratorBackward();

    // Serial.println("Linked List DeleteElements...needs replaced");
    // deleteDataElements();
}

void loop()
{
    Serial.print(".");
    delay(1000);
}

// #include "Arduino.h"
// #include "RolodexList.h"
// //#include "RolodexList.cpp"

// /* Board and options
// ESP32 Wrover Kit (all version)(esp32)
// Huge APP (3MB No OTA/1MB SPIFFS)
// */

// void addRecords(RolodexList *rolodexList)
// {
//   // Back to Front
//   Serial.println("Add records");

//   Rolodex *rolodex = new Rolodex("ABCD", "123-456-7890");
//   rolodexList->Add(rolodex);
//   rolodexList->toString();

//   if (false) /*debug out*/
//   {
//     Serial.print(" &rolodex: ");
//     Serial.println((unsigned int)&rolodex, HEX);
//   }

//   rolodex = new Rolodex("DCBA", "712-555-1212");
//   rolodexList->Add(rolodex);
//   rolodexList->toString();

//   rolodex = new Rolodex("zyxw", "813-555-1212");
//   rolodexList->Add(rolodex);
//   rolodexList->toString();

//   rolodex = new Rolodex("wxyz", "555-555-1212");
//   rolodexList->Add(rolodex);
//   rolodexList->toString();

//   if (false) /*debug out*/
//   {
//     Rolodex *r = rolodexList->getCurrent();
//     Serial.print(" this: ");
//     Serial.print((unsigned int)r, HEX);
//     Serial.print(" prev: ");
//     Serial.print((unsigned int)r->getPrev(), HEX);
//     Serial.print(" next: ");
//     Serial.println((unsigned int)r->getNext(), HEX);
//   }
// }

// void frontToBack(RolodexList *rolodexList)
// {
//   Serial.println("Front to Back");

//   uint cnt = 0;

//   rolodexList->setCurrentToFirst();
//   while (rolodexList->getCurrent() != NULL)
//   {
//     Rolodex *r = rolodexList->getCurrent();
//     r->toString("front To Back");
//     if (false) /*debug out*/
//     {
//       Serial.print(" prev: ");
//       Serial.print((unsigned int)r->getPrev(), HEX);
//       Serial.print(" next: ");
//       Serial.println((unsigned int)r->getNext(), HEX);
//     }
//     rolodexList->incCurrent();

//     if (cnt++ > 30)
//       break; /* must be bad pointers*/
//   }
// }

// void backToFront(RolodexList *rolodexList)
// {
//   // Back to Front

//   uint cnt = 0;

//   Serial.println("Back to Front");
//   rolodexList->setCurrentToLast();
//   while (rolodexList->getCurrent() != NULL)
//   {
//     Rolodex *r = rolodexList->getCurrent();
//     r->toString("back To Front");
//     if (false) /*debug out*/
//     {
//       Serial.print(" prev: ");
//       Serial.print((unsigned int)r->getPrev(), HEX);
//       Serial.print(" next: ");
//       Serial.println((unsigned int)r->getNext(), HEX);
//     }
//     rolodexList->decCurrent();

//     if (cnt++ > 50)
//       break; /* must be bad pointers*/
//   }
// }

// void findIdentity(RolodexList *rolodexList, uint16_t identity)
// {
//   Serial.print("Get by ID: ");
//   Serial.println(identity);
//   bool found = rolodexList->findIdentity(identity);
//   if (found)
//   {
//     Rolodex *r = rolodexList->getCurrent();
//     Serial.print("getIdentity found:");
//     r->toString("getIdentity");
//   }
//   else
//   {
//     Serial.println("oops, pick a better Identity");
//   }
// }

// void deleteIdentity(RolodexList *rolodexList, uint16_t identity)
// {
//   Serial.print("Del by ID: ");
//   Serial.println(identity);
//   bool deleted = rolodexList->Delete(identity);
//   if (deleted)
//   {
//     Serial.print("getIdentity deleted ...");
//   }
//   else
//   {
//     Serial.println("oops, pick a better Identity to delete");
//   }
//   frontToBack(rolodexList);
// }

// void clearMyList(RolodexList *rolodexList)
// {
//   Serial.print("Clear all: ");
//   frontToBack(rolodexList);
//   bool deleted = rolodexList->clearList();
//   if (deleted)
//   {
//     Serial.println("List deleted ...");
//   }
//   else
//   {
//     Serial.println("oops, Had an issue");
//   }
//   frontToBack(rolodexList);
// }

// void setup()
// {
//   // Use serial port
//   Serial.begin(115200);
//   while (!Serial && (millis() <= 1000))
//     ;

//   Serial.println("*** LinkList list test ***");

//   RolodexList rolodexList = RolodexList();

//   addRecords(&rolodexList);
//   frontToBack(&rolodexList);
//   backToFront(&rolodexList);

//   findIdentity(&rolodexList, 2);
//   findIdentity(&rolodexList, 3);
//   findIdentity(&rolodexList, 0);

//   deleteIdentity(&rolodexList, 2); // Delete middle
//   deleteIdentity(&rolodexList, 1); // Delete first
//   deleteIdentity(&rolodexList, 4); // Delete last
//   deleteIdentity(&rolodexList, 0); // Not found

//   addRecords(&rolodexList);

//   clearMyList(&rolodexList); // delete all
// }

// void loop()
// {
//   Serial.print(".");
//   delay(5000); // Slow down print
//   yield();     // Allow WDT to reset
// }
