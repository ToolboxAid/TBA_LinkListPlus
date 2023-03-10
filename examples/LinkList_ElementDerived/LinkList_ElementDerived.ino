// C program to implement all functions
// used in Double Linked List
#include <Arduino.h>

#include "LinkListPlus.h"
#include "ElementDerived.h"

void itoratorForward(LinkListPlus *linkListPlus)
{
    // To iterate Node from Head to Tail
    Serial.println("Linked List iterate Node from Head to Tail: ");
    linkListPlus->setCurrentToHead();
    ElementDerived *current = (ElementDerived *)linkListPlus->getNext();
    while (NULL != current)
    {
        Serial.print(" data: '");
        Serial.print((uint)current, HEX);
        Serial.print("' ");
        current->debugSerial("itoratorForward");

        current = (ElementDerived *)linkListPlus->getNext();
    }
    Serial.print("Linked List nodeCount: ");
    Serial.println(linkListPlus->getNodeCount());
    Serial.println("\n\n");
}

void insert(LinkListPlus *linkListPlus)
{ // Adding node(s) to the linked List

    Serial.println("Linked List insert(s): ");

    ElementDerived *base1 = new ElementDerived("hello world 1", "1");
    base1->debugSerial("test 1");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(base1));

    ElementDerived *base2 = new ElementDerived("hello world 2", "22");
    base2->debugSerial("test 2");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(base2));

    ElementDerived *base3 = new ElementDerived("hello world 3", "333");
    base3->debugSerial("test 3");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(base3));

    ElementDerived *base4 = new ElementDerived("hello world 4", "4444");
    base4->debugSerial("test 4");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(base4));

    ElementDerived *base5 = new ElementDerived("hello world 5", "55555");
    base5->debugSerial("test 5");
    Serial.print(" * insert ID = ");
    Serial.println(linkListPlus->insertAtEnd(base5));

    // To print the linked List
    itoratorForward(linkListPlus);
}

void searchForID(LinkListPlus *linkListPlus, uint16_t id)
{
    Serial.print("Search For ID: '");
    Serial.print(id);
    Serial.print("'   ");

    ElementDerived *ed = (ElementDerived *)linkListPlus->searchID(id);
    if (NULL == ed)
    {
        Serial.println("*** 'not found' ***");
    }
    else
    {
        ed->debugSerial("found");
    }
}
void searchForName(LinkListPlus *linkListPlus, const char *name)
{
    Serial.print("Search For name: '");
    Serial.print(name);
    Serial.print("'   ");

    ElementDerived *ed = (ElementDerived *)linkListPlus->searchName(name);
    if (NULL == ed)
    {
        Serial.println("*** 'not found' ***");
    }
    else
    {
        ed->debugSerial("found");
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
    Serial.println("LinkListPlus memory free of ElementDerived...");
    Serial.println("===========================================");

    LinkListPlus *linkListPlus = new LinkListPlus();

    insert(linkListPlus);

    Serial.println("Search by ID");
    searchForID(linkListPlus, 1);
    searchForID(linkListPlus, 2);
    searchForID(linkListPlus, 3);
    Serial.println("\n\n");

    Serial.println("Search by Name");
    searchForName(linkListPlus, "hello world 1");
    searchForName(linkListPlus, "hello world 3");
    searchForName(linkListPlus, "hello world 5");
    Serial.println("\n\n");

    Serial.println("Deleting by ID");
    deleteForID(linkListPlus, 2);
    deleteForID(linkListPlus, 4);
    itoratorForward(linkListPlus);

    Serial.println("Deleting by Name");
    deleteForName(linkListPlus, "hello world 3");
    deleteForName(linkListPlus, "hello world 5");
    itoratorForward(linkListPlus);

    clearList(linkListPlus);
}

void loop(/* forever */)
{
    Serial.print(".");
    delay(1000);
}
