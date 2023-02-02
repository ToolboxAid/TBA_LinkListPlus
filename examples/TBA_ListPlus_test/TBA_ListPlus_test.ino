
#include "Arduino.h"

#include "TBA_ListPlus.h"
#include "VirtualBase.h"

#include "../examples/TBA_ListPlus_test/DerivedElement.h"
#include "../examples/TBA_ListPlus_test/DerivedElement2.h"

/*

//old, do not use: https://roboticsbackend.com/arduino-stl-library/


 TBA_ListPlus will only work with a Derived class of VirtualBase.h
 In this case, DerivedElements.h extend VirtualBase.h

*/

void updateRecord(TBA_ListPlus<DerivedElement> *myLinkList)
{
  Serial.println(" --- update record  --- ");
  // insert record to update
  std::string moreData = "mD before update";
  DerivedElement de = DerivedElement("update", 0, moreData, 0);
  myLinkList->insertBottom(de);

  DerivedElement *found = myLinkList->searchName("update");
  if (found == NULL)
  {
    Serial.println("ID is NULL");
  }
  else
  { // Update moreData
    found->debugSerial("Name Found");
    found->setMoreData("mD post update & longer");

    DerivedElement *foundPost = myLinkList->searchName("update");
    foundPost->debugSerial("Post Found");
  }
  myLinkList->display();
  Serial.print("Post deletes - Size: ");
  Serial.println(myLinkList->sizeOfList());
}

void updateRecordDisplay(TBA_ListPlus<DerivedElement> *myLinkList)
{
  Serial.println(" --- display update overload --- ");
  DerivedElement *found = myLinkList->searchName("update");
  if (found == NULL)
  {
    Serial.println("ID is NULL");
  }
  else
  { // check if we got around memory location issue
    found->debugSerial("New Name Found");
  }
  myLinkList->display();
  Serial.print("Post deletes - Size: ");
  Serial.println(myLinkList->sizeOfList());
}

void inserts(TBA_ListPlus<DerivedElement> *myLinkList)
{
  Serial.println(" --- insert data --- ");
  // uint16_t max value 65535
  DerivedElement de = DerivedElement("1st element    ", 1111);
  myLinkList->insertBottom(de);

  // Insert Top
  de = DerivedElement("Insert Top     ", 500);
  myLinkList->insertTop(de);

  // Insert Bottom
  de = DerivedElement("2nd element    ", 2222);
  myLinkList->insertBottom(de);

  de = DerivedElement("3rd element    ", 3333);
  myLinkList->insertBottom(de);

  // Insert After ID
  de = DerivedElement("AfterID-1      ", 4444);
  myLinkList->insertAfterID(1, de);

  myLinkList->display();
  Serial.print("Post Search/InsertAfters - size: ");
  Serial.println(myLinkList->sizeOfList());
}

void searches(TBA_ListPlus<DerivedElement> *myLinkList)
{
  Serial.println(" --- Search --- ");
  // Search ID and Insert After ExternID
  DerivedElement *found = myLinkList->searchID(2);
  if (found == NULL)
  {
    Serial.println("ID is NULL");
  }
  else
  {
    found->debugSerial("ID Found");
    DerivedElement de = DerivedElement("afterSearch #2 ", 550);
    myLinkList->insertAfterID(found->getIdentity(), de);
  }

  // Search ID and Insert After ExternID
  found = myLinkList->searchExternID(2222);
  if (found == NULL)
  {
    Serial.println("ExternID is NULL");
  }
  else
  {
    found->debugSerial("ExternID Found");
    DerivedElement de = DerivedElement("afterSearch #2222 ", 2323);
    myLinkList->insertAfterExternID(found->getExternalID(), de);
  }

  // Search Name
  found = myLinkList->searchName("2nd element    ");
  if (found == NULL)
  {
    Serial.println("Name is NULL");
  }
  else
  {
    found->debugSerial("Name Found");
  }
}

void insert4Deletes(TBA_ListPlus<DerivedElement> *myLinkList)
{
  Serial.println(" --- insert for delete --- ");

  // Insert Top for Delete
  DerivedElement de = DerivedElement("Top for del    ", 100);
  myLinkList->insertTop(de);

  // Insert Middle for Delete
  de = DerivedElement("Middle for del ", 5151);
  myLinkList->insertAfterID(5, de);

  // Insert Bottom for Delete
  de = DerivedElement("Bottom for del ", 10000);
  myLinkList->insertBottom(de);

  myLinkList->display();
  Serial.print("Post insert for delete - Size: ");
  Serial.println(myLinkList->sizeOfList());
}
void deletes(TBA_ListPlus<DerivedElement> *myLinkList)
{
  Serial.println(" --- deletes --- ");
  bool deleted;
  deleted = myLinkList->removeExternID(100);
  Serial.println(deleted);

  deleted = myLinkList->removeExternID(5151);
  Serial.println(deleted);

  deleted = myLinkList->removeExternID(10000);
  Serial.println(deleted);

  // Not found
  deleted = myLinkList->removeExternID(10000);
  Serial.println(deleted);

  myLinkList->display();
  Serial.print("Post deletes - Size: ");
  Serial.println(myLinkList->sizeOfList());
}

void overloads(TBA_ListPlus<DerivedElement> *myLinkList)
{
  Serial.println(" --- Post overload --- ");
  // Check overloads
  DerivedElement de = DerivedElement("overload 0"); // externalID defaults to 0
  myLinkList->insertBottom(de);

  de = DerivedElement("overload 1", 9000, "more data", 9001);
  myLinkList->insertBottom(de);

  myLinkList->display();
  Serial.print("Post overload - Size: ");
  Serial.println(myLinkList->sizeOfList());
}

void insertAfters(TBA_ListPlus<DerivedElement> *myLinkList)
{
  Serial.println(" --- Insert afters --- ");
  // Insert After ID
  DerivedElement de = DerivedElement("AfterID-2      ", 5555);
  myLinkList->insertAfterID(2, de);

  // Insert After ID
  de = DerivedElement("AfterID-99>last", 6666);
  myLinkList->insertAfterID(99, de);

  // Insert After externID
  de = DerivedElement("AfterExternID^1", 7777);
  myLinkList->insertAfterExternID(1111, de);

  // Insert After externID
  de = DerivedElement("AfterExternID^3", 8888);
  myLinkList->insertAfterExternID(3333, de);

  // Insert Bottom
  de = DerivedElement("insert last    ", 9999);
  myLinkList->insertBottom(de);

  myLinkList->display();
  Serial.print("post insert after - Size: ");
  Serial.println(myLinkList->sizeOfList());
}

void iterator(TBA_ListPlus<DerivedElement> *myLinkList)
{
  uint16_t cnt = 0;
  Serial.println(" --- Iterator --- ");
  myLinkList->iteratorHead();
  DerivedElement *iterator = myLinkList->iteratorNext();
  while (iterator)
  {
    cnt++;
    iterator->debugSerial("iterator");
    iterator = myLinkList->iteratorNext();
  }
  Serial.print("Iterator count ");
  Serial.println(cnt);
}

void LinkListPlusTest()
{
  TBA_ListPlus<DerivedElement> *myLinkList = new TBA_ListPlus<DerivedElement>();
  Serial.println(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");

  inserts(myLinkList);
  Serial.println(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");

  searches(myLinkList);
  Serial.println(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");

  insert4Deletes(myLinkList);
  Serial.println(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");

  deletes(myLinkList);
  Serial.println(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");

  overloads(myLinkList);
  Serial.println(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");

  insertAfters(myLinkList);
  Serial.println(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");

  iterator(myLinkList);
  Serial.println(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");

  updateRecord(myLinkList);
  Serial.println(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
  updateRecordDisplay(myLinkList);
  Serial.println(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");

  Serial.print("All methods executed, Size: ");
  Serial.println(myLinkList->sizeOfList());
  myLinkList->display();
  Serial.println(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");

  Serial.println("Clearing list...");
  myLinkList->clear();

  Serial.print("Post clear - Size: ");
  Serial.println(myLinkList->sizeOfList());
  myLinkList->display();
  Serial.println(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
}

void setup()
{
  Serial.begin(115200); // Use serial port
  while (!Serial && (millis() <= 1000))
    ;
  Serial.println("*** Double link list test ***");
  LinkListPlusTest();
}

void loop()
{
  Serial.print(".");
  delay(10000); // Slow down dot print
  yield();      // Allow WDT to reset
}
