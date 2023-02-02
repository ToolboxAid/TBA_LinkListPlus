// C program to implement all functions
// used in Double Linked List
#include <Arduino.h>

#define LinkListPlusMemoryDebug

#include "LinkListPlus.h"
#include "ElementDerived.h"
#include "InnerClass.h"
#include "TBA_SupportFunction.h"

TBA_SupportFunction supportFunction = TBA_SupportFunction();

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
{ // Inserting node(s) to the linked List
    Serial.println("Linked List insert(s): ");

    // ESP32 HEAP mem limits, 2714 max allowable before failure(using Hugh program space)
    for (uint16_t x = 0; x < 2714; x++)
    {
        InnerClass *innerClass = new InnerClass("data");
        ElementDerived *base = new ElementDerived("hello world", innerClass);
#ifdef LinkListPlusMemoryDebug
        base->debugSerial("test");
        Serial.print(" * insert ID = ");
        Serial.println(linkListPlus->insertAtEnd(base));
#else
        linkListPlus->insertAtEnd(base);
#endif
    }
    // To print the linked List
#ifdef LinkListPlusMemoryDebug
    itoratorForward(linkListPlus);
#else
    Serial.print("Linked List nodeCount: ");
    Serial.println(linkListPlus->getNodeCount());
#endif
}

void clearList(LinkListPlus *linkListPlus)
{
    Serial.println("Clearing Linked List: ");

    linkListPlus->clearLinkList();

    Serial.print("\nLinked List nodeCount: ");

#ifdef LinkListPlusMemoryDebug
    Serial.print(linkListPlus->getNodeCount());
    Serial.println("\n\n");
#else
    Serial.println(linkListPlus->getNodeCount());
#endif
}

void stressItOut(LinkListPlus *linkListPlus)
{
    insert(linkListPlus);
    supportFunction.memoryInfo(); // memory consumed
    clearList(linkListPlus);
    //supportFunction.memoryInfo(); // memory freed
}

void setup() /* Test code */
{
    // Use serial port
    Serial.begin(115200);
    while (!Serial && (millis() <= 5000))
        ;

    Serial.println("\n\n===========================================");
    Serial.println("LinkListPlus with memory test...");
    Serial.println("===========================================");

    // stressItOut(linkListPlus);
    supportFunction.memoryInfo();
    supportFunction.memoryInfo();
}

void loop(/* forever */)
{
    static uint8_t cnt = 0;
    if (++cnt % 5 == 0)
    {
        LinkListPlus *linkListPlus = new LinkListPlus();

        Serial.println();
        stressItOut(linkListPlus);

        delete linkListPlus; // Remember to cleanup after ourselves...
    }
    Serial.print(".");
    delay(1000);
}
