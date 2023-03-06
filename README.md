# Link List Plus (the plus is a name variable used for lookup)

![This is an image](./assets/ToolboxAid.png)

## Libraries required (tag links):

- [TBA_Macros v1.0.2](https://github.com/ToolboxAid/TBA_Macros/releases/tag/v1.0.2)
- [TBA_SupportFunction v1.0.1](https://github.com/ToolboxAid/TBA_SupportFunction/releases/tag/v1.0.1)

```c++
===========================================
LinkListPlus memory free via destructor...
===========================================
Linked List BAD insert(s): verify fail: no insert and return ID: 0
 * insert ID = *** elementBase not set...explain yourself? Node NOT added!!!
0
 * insert ID = *** elementBase not set...explain yourself? Node NOT added!!!
0
 * insert ID = *** elementBase not set...explain yourself? Node NOT added!!!
0
 * insert ID = *** elementBase not set...explain yourself? Node NOT added!!!
0
 * insert ID = *** elementBase not set...explain yourself? Node NOT added!!!
0
 * insert ID = *** elementBase not set...explain yourself? Node NOT added!!!
0
------------------------------------------------------
Linked List traverseForward - Head to Tail: 'not set'
Linked List nodeCount: 0

Linked List insert(s): 
 <ElementBase.cpp>  identity: '1' name: 'hello world 1' debug Loc: 'test 1' 
 * insert ID = 1
 <ElementBase.cpp>  identity: '2' name: 'hello world 2' debug Loc: 'test 2' 
 * insert ID = 2
 <ElementBase.cpp>  identity: '3' name: 'hello world 3' debug Loc: 'test 3' 
 * insert ID = 3
 <ElementBase.cpp>  identity: '4' name: 'hello world 4' debug Loc: 'test 4' 
 * insert ID = 4
 <ElementBase.cpp>  identity: '5' name: 'hello world 5' debug Loc: 'test 5' 
 * insert ID = 5
------------------------------------------------------
Linked List traverseForward - Head to Tail: 'not set'
pos: '1'         prev: '0x00000000' ptr: '0x3FFB9154' next: '0x3FFB918C' data: '0x3FFB9138'  <ElementBase.cpp>  identity: '1' name: 'hello world 1' debug Loc: 'LLP' 
pos: '2'         prev: '0x3FFB9154' ptr: '0x3FFB918C' next: '0x3FFB91C4' data: '0x3FFB9170'  <ElementBase.cpp>  identity: '2' name: 'hello world 2' debug Loc: 'LLP' 
pos: '3'         prev: '0x3FFB918C' ptr: '0x3FFB91C4' next: '0x3FFB91FC' data: '0x3FFB91A8'  <ElementBase.cpp>  identity: '3' name: 'hello world 3' debug Loc: 'LLP' 
pos: '4'         prev: '0x3FFB91C4' ptr: '0x3FFB91FC' next: '0x3FFB9234' data: '0x3FFB91E0'  <ElementBase.cpp>  identity: '4' name: 'hello world 4' debug Loc: 'LLP' 
pos: '5'         prev: '0x3FFB91FC' ptr: '0x3FFB9234' next: '0x00000000' data: '0x3FFB9218'  <ElementBase.cpp>  identity: '5' name: 'hello world 5' debug Loc: 'LLP' 
Linked List nodeCount: 5

Linked List BAD insert(s): verify fail: no insert and return ID: 0
 * insert ID = *** elementBase not set...explain yourself? Node NOT added!!!
0
 * insert ID = *** elementBase not set...explain yourself? Node NOT added!!!
0
 * insert ID = *** elementBase not set...explain yourself? Node NOT added!!!
0
 * insert ID = *** elementBase not set...explain yourself? Node NOT added!!!
0
 * insert ID = *** elementBase not set...explain yourself? Node NOT added!!!
0
 * insert ID = *** elementBase not set...explain yourself? Node NOT added!!!
0
------------------------------------------------------
Linked List traverseForward - Head to Tail: 'not set'
pos: '1'         prev: '0x00000000' ptr: '0x3FFB9154' next: '0x3FFB918C' data: '0x3FFB9138'  <ElementBase.cpp>  identity: '1' name: 'hello world 1' debug Loc: 'LLP' 
pos: '2'         prev: '0x3FFB9154' ptr: '0x3FFB918C' next: '0x3FFB91C4' data: '0x3FFB9170'  <ElementBase.cpp>  identity: '2' name: 'hello world 2' debug Loc: 'LLP' 
pos: '3'         prev: '0x3FFB918C' ptr: '0x3FFB91C4' next: '0x3FFB91FC' data: '0x3FFB91A8'  <ElementBase.cpp>  identity: '3' name: 'hello world 3' debug Loc: 'LLP' 
pos: '4'         prev: '0x3FFB91C4' ptr: '0x3FFB91FC' next: '0x3FFB9234' data: '0x3FFB91E0'  <ElementBase.cpp>  identity: '4' name: 'hello world 4' debug Loc: 'LLP' 
pos: '5'         prev: '0x3FFB91FC' ptr: '0x3FFB9234' next: '0x00000000' data: '0x3FFB9218'  <ElementBase.cpp>  identity: '5' name: 'hello world 5' debug Loc: 'LLP' 
Linked List nodeCount: 5

Linked List inserting at begin: 
 <ElementBase.cpp>  identity: '6' name: 'hello world 6' debug Loc: 'test 6' 
 * insert ID = 6
------------------------------------------------------
Linked List traverseForward - Head to Tail: 'not set'
pos: '1'         prev: '0x00000000' ptr: '0x3FFB926C' next: '0x3FFB9154' data: '0x3FFB9250'  <ElementBase.cpp>  identity: '6' name: 'hello world 6' debug Loc: 'LLP' 
pos: '2'         prev: '0x3FFB926C' ptr: '0x3FFB9154' next: '0x3FFB918C' data: '0x3FFB9138'  <ElementBase.cpp>  identity: '1' name: 'hello world 1' debug Loc: 'LLP' 
pos: '3'         prev: '0x3FFB9154' ptr: '0x3FFB918C' next: '0x3FFB91C4' data: '0x3FFB9170'  <ElementBase.cpp>  identity: '2' name: 'hello world 2' debug Loc: 'LLP' 
pos: '4'         prev: '0x3FFB918C' ptr: '0x3FFB91C4' next: '0x3FFB91FC' data: '0x3FFB91A8'  <ElementBase.cpp>  identity: '3' name: 'hello world 3' debug Loc: 'LLP' 
pos: '5'         prev: '0x3FFB91C4' ptr: '0x3FFB91FC' next: '0x3FFB9234' data: '0x3FFB91E0'  <ElementBase.cpp>  identity: '4' name: 'hello world 4' debug Loc: 'LLP' 
pos: '6'         prev: '0x3FFB91FC' ptr: '0x3FFB9234' next: '0x00000000' data: '0x3FFB9218'  <ElementBase.cpp>  identity: '5' name: 'hello world 5' debug Loc: 'LLP' 
Linked List nodeCount: 6

Linked List inserting at end: 
 <ElementBase.cpp>  identity: '7' name: 'hello world 7' debug Loc: 'test 7' 
 * insert ID = 7
------------------------------------------------------
Linked List traverseForward - Head to Tail: 'not set'
pos: '1'         prev: '0x00000000' ptr: '0x3FFB926C' next: '0x3FFB9154' data: '0x3FFB9250'  <ElementBase.cpp>  identity: '6' name: 'hello world 6' debug Loc: 'LLP' 
pos: '2'         prev: '0x3FFB926C' ptr: '0x3FFB9154' next: '0x3FFB918C' data: '0x3FFB9138'  <ElementBase.cpp>  identity: '1' name: 'hello world 1' debug Loc: 'LLP' 
pos: '3'         prev: '0x3FFB9154' ptr: '0x3FFB918C' next: '0x3FFB91C4' data: '0x3FFB9170'  <ElementBase.cpp>  identity: '2' name: 'hello world 2' debug Loc: 'LLP' 
pos: '4'         prev: '0x3FFB918C' ptr: '0x3FFB91C4' next: '0x3FFB91FC' data: '0x3FFB91A8'  <ElementBase.cpp>  identity: '3' name: 'hello world 3' debug Loc: 'LLP' 
pos: '5'         prev: '0x3FFB91C4' ptr: '0x3FFB91FC' next: '0x3FFB9234' data: '0x3FFB91E0'  <ElementBase.cpp>  identity: '4' name: 'hello world 4' debug Loc: 'LLP' 
pos: '6'         prev: '0x3FFB91FC' ptr: '0x3FFB9234' next: '0x3FFB92A4' data: '0x3FFB9218'  <ElementBase.cpp>  identity: '5' name: 'hello world 5' debug Loc: 'LLP' 
pos: '7'         prev: '0x3FFB9234' ptr: '0x3FFB92A4' next: '0x00000000' data: '0x3FFB9288'  <ElementBase.cpp>  identity: '7' name: 'hello world 7' debug Loc: 'LLP' 
Linked List nodeCount: 7

Linked List inserting at (1) begin: 
 <ElementBase.cpp>  identity: '8' name: 'hello world 8' debug Loc: 'test 8' 
 * insert ID = 8
------------------------------------------------------
Linked List traverseForward - Head to Tail: 'not set'
pos: '1'         prev: '0x00000000' ptr: '0x3FFB92DC' next: '0x3FFB926C' data: '0x3FFB92C0'  <ElementBase.cpp>  identity: '8' name: 'hello world 8' debug Loc: 'LLP' 
pos: '2'         prev: '0x3FFB92DC' ptr: '0x3FFB926C' next: '0x3FFB9154' data: '0x3FFB9250'  <ElementBase.cpp>  identity: '6' name: 'hello world 6' debug Loc: 'LLP' 
pos: '3'         prev: '0x3FFB926C' ptr: '0x3FFB9154' next: '0x3FFB918C' data: '0x3FFB9138'  <ElementBase.cpp>  identity: '1' name: 'hello world 1' debug Loc: 'LLP' 
pos: '4'         prev: '0x3FFB9154' ptr: '0x3FFB918C' next: '0x3FFB91C4' data: '0x3FFB9170'  <ElementBase.cpp>  identity: '2' name: 'hello world 2' debug Loc: 'LLP' 
pos: '5'         prev: '0x3FFB918C' ptr: '0x3FFB91C4' next: '0x3FFB91FC' data: '0x3FFB91A8'  <ElementBase.cpp>  identity: '3' name: 'hello world 3' debug Loc: 'LLP' 
pos: '6'         prev: '0x3FFB91C4' ptr: '0x3FFB91FC' next: '0x3FFB9234' data: '0x3FFB91E0'  <ElementBase.cpp>  identity: '4' name: 'hello world 4' debug Loc: 'LLP' 
pos: '7'         prev: '0x3FFB91FC' ptr: '0x3FFB9234' next: '0x3FFB92A4' data: '0x3FFB9218'  <ElementBase.cpp>  identity: '5' name: 'hello world 5' debug Loc: 'LLP' 
pos: '8'         prev: '0x3FFB9234' ptr: '0x3FFB92A4' next: '0x00000000' data: '0x3FFB9288'  <ElementBase.cpp>  identity: '7' name: 'hello world 7' debug Loc: 'LLP' 
Linked List nodeCount: 8

Linked List inserting at (9) end: 
 <ElementBase.cpp>  identity: '9' name: 'hello world 9' debug Loc: 'test 9' 
 * insert ID = 9
------------------------------------------------------
Linked List traverseForward - Head to Tail: 'not set'
pos: '1'         prev: '0x00000000' ptr: '0x3FFB92DC' next: '0x3FFB926C' data: '0x3FFB92C0'  <ElementBase.cpp>  identity: '8' name: 'hello world 8' debug Loc: 'LLP' 
pos: '2'         prev: '0x3FFB92DC' ptr: '0x3FFB926C' next: '0x3FFB9154' data: '0x3FFB9250'  <ElementBase.cpp>  identity: '6' name: 'hello world 6' debug Loc: 'LLP' 
pos: '3'         prev: '0x3FFB926C' ptr: '0x3FFB9154' next: '0x3FFB918C' data: '0x3FFB9138'  <ElementBase.cpp>  identity: '1' name: 'hello world 1' debug Loc: 'LLP' 
pos: '4'         prev: '0x3FFB9154' ptr: '0x3FFB918C' next: '0x3FFB91C4' data: '0x3FFB9170'  <ElementBase.cpp>  identity: '2' name: 'hello world 2' debug Loc: 'LLP' 
pos: '5'         prev: '0x3FFB918C' ptr: '0x3FFB91C4' next: '0x3FFB91FC' data: '0x3FFB91A8'  <ElementBase.cpp>  identity: '3' name: 'hello world 3' debug Loc: 'LLP' 
pos: '6'         prev: '0x3FFB91C4' ptr: '0x3FFB91FC' next: '0x3FFB9234' data: '0x3FFB91E0'  <ElementBase.cpp>  identity: '4' name: 'hello world 4' debug Loc: 'LLP' 
pos: '7'         prev: '0x3FFB91FC' ptr: '0x3FFB9234' next: '0x3FFB92A4' data: '0x3FFB9218'  <ElementBase.cpp>  identity: '5' name: 'hello world 5' debug Loc: 'LLP' 
pos: '8'         prev: '0x3FFB9234' ptr: '0x3FFB92A4' next: '0x3FFB9314' data: '0x3FFB9288'  <ElementBase.cpp>  identity: '7' name: 'hello world 7' debug Loc: 'LLP' 
pos: '9'         prev: '0x3FFB92A4' ptr: '0x3FFB9314' next: '0x00000000' data: '0x3FFB92F8'  <ElementBase.cpp>  identity: '9' name: 'hello world 9' debug Loc: 'LLP' 
Linked List nodeCount: 9

Linked List inserting at (5) middle: 
 <ElementBase.cpp>  identity: '10' name: 'hello world A' debug Loc: 'test A' 
 * insert ID = 10
------------------------------------------------------
Linked List traverseForward - Head to Tail: 'not set'
pos: '1'         prev: '0x00000000' ptr: '0x3FFB92DC' next: '0x3FFB926C' data: '0x3FFB92C0'  <ElementBase.cpp>  identity: '8' name: 'hello world 8' debug Loc: 'LLP' 
pos: '2'         prev: '0x3FFB92DC' ptr: '0x3FFB926C' next: '0x3FFB9154' data: '0x3FFB9250'  <ElementBase.cpp>  identity: '6' name: 'hello world 6' debug Loc: 'LLP' 
pos: '3'         prev: '0x3FFB926C' ptr: '0x3FFB9154' next: '0x3FFB918C' data: '0x3FFB9138'  <ElementBase.cpp>  identity: '1' name: 'hello world 1' debug Loc: 'LLP' 
pos: '4'         prev: '0x3FFB9154' ptr: '0x3FFB918C' next: '0x3FFB91C4' data: '0x3FFB9170'  <ElementBase.cpp>  identity: '2' name: 'hello world 2' debug Loc: 'LLP' 
pos: '5'         prev: '0x3FFB918C' ptr: '0x3FFB91C4' next: '0x3FFB91FC' data: '0x3FFB91A8'  <ElementBase.cpp>  identity: '3' name: 'hello world 3' debug Loc: 'LLP' 
pos: '6'         prev: '0x3FFB91C4' ptr: '0x3FFB91FC' next: '0x3FFB934C' data: '0x3FFB91E0'  <ElementBase.cpp>  identity: '4' name: 'hello world 4' debug Loc: 'LLP' 
pos: '7'         prev: '0x3FFB91FC' ptr: '0x3FFB934C' next: '0x3FFB9234' data: '0x3FFB9330'  <ElementBase.cpp>  identity: '10' name: 'hello world A' debug Loc: 'LLP' 
pos: '8'         prev: '0x3FFB934C' ptr: '0x3FFB9234' next: '0x3FFB92A4' data: '0x3FFB9218'  <ElementBase.cpp>  identity: '5' name: 'hello world 5' debug Loc: 'LLP' 
pos: '9'         prev: '0x3FFB9234' ptr: '0x3FFB92A4' next: '0x3FFB9314' data: '0x3FFB9288'  <ElementBase.cpp>  identity: '7' name: 'hello world 7' debug Loc: 'LLP' 
pos: '10'        prev: '0x3FFB92A4' ptr: '0x3FFB9314' next: '0x00000000' data: '0x3FFB92F8'  <ElementBase.cpp>  identity: '9' name: 'hello world 9' debug Loc: 'LLP' 
Linked List nodeCount: 10

Search by ID
Search For ID: '10'    <ElementBase.cpp>  identity: '10' name: 'hello world A' debug Loc: 'found' 
Search For ID: '6'    <ElementBase.cpp>  identity: '6' name: 'hello world 6' debug Loc: 'found' 
Search For ID: '9'    <ElementBase.cpp>  identity: '9' name: 'hello world 9' debug Loc: 'found' 
Search For ID: '99'   *** 'not found' ***



Search by Name
Search For name: 'hello world 8'    <ElementBase.cpp>  identity: '8' name: 'hello world 8' debug Loc: 'found' 
Search For name: 'hello world 9'    <ElementBase.cpp>  identity: '9' name: 'hello world 9' debug Loc: 'found' 
Search For name: 'hello world A'    <ElementBase.cpp>  identity: '10' name: 'hello world A' debug Loc: 'found' 
Search For name: 'fake name'   *** 'not found' ***



Deleting by ID
Delete For ID: 8   *** 'found and deleted' ***
Delete For ID: 9   *** 'found and deleted' ***
Delete For ID: 10   *** 'found and deleted' ***
Delete For ID: 99   *** 'not found' ***
------------------------------------------------------
Linked List traverseForward - Head to Tail: 'not set'
pos: '1'         prev: '0x00000000' ptr: '0x3FFB926C' next: '0x3FFB9154' data: '0x3FFB9250'  <ElementBase.cpp>  identity: '6' name: 'hello world 6' debug Loc: 'LLP' 
pos: '2'         prev: '0x3FFB926C' ptr: '0x3FFB9154' next: '0x3FFB918C' data: '0x3FFB9138'  <ElementBase.cpp>  identity: '1' name: 'hello world 1' debug Loc: 'LLP' 
pos: '3'         prev: '0x3FFB9154' ptr: '0x3FFB918C' next: '0x3FFB91C4' data: '0x3FFB9170'  <ElementBase.cpp>  identity: '2' name: 'hello world 2' debug Loc: 'LLP' 
pos: '4'         prev: '0x3FFB918C' ptr: '0x3FFB91C4' next: '0x3FFB91FC' data: '0x3FFB91A8'  <ElementBase.cpp>  identity: '3' name: 'hello world 3' debug Loc: 'LLP' 
pos: '5'         prev: '0x3FFB91C4' ptr: '0x3FFB91FC' next: '0x3FFB9234' data: '0x3FFB91E0'  <ElementBase.cpp>  identity: '4' name: 'hello world 4' debug Loc: 'LLP' 
pos: '6'         prev: '0x3FFB91FC' ptr: '0x3FFB9234' next: '0x3FFB92A4' data: '0x3FFB9218'  <ElementBase.cpp>  identity: '5' name: 'hello world 5' debug Loc: 'LLP' 
pos: '7'         prev: '0x3FFB9234' ptr: '0x3FFB92A4' next: '0x00000000' data: '0x3FFB9288'  <ElementBase.cpp>  identity: '7' name: 'hello world 7' debug Loc: 'LLP' 
Linked List nodeCount: 7

Deleting by Name
Delete For name: hello world 6   *** 'found and deleted' ***
Delete For name: hello world 7   *** 'found and deleted' ***
Delete For name: hello world 3   *** 'found and deleted' ***
Delete For name: fake name   *** 'not found' ***
------------------------------------------------------
Linked List traverseForward - Head to Tail: 'not set'
pos: '1'         prev: '0x00000000' ptr: '0x3FFB9154' next: '0x3FFB918C' data: '0x3FFB9138'  <ElementBase.cpp>  identity: '1' name: 'hello world 1' debug Loc: 'LLP' 
pos: '2'         prev: '0x3FFB9154' ptr: '0x3FFB918C' next: '0x3FFB91FC' data: '0x3FFB9170'  <ElementBase.cpp>  identity: '2' name: 'hello world 2' debug Loc: 'LLP' 
pos: '3'         prev: '0x3FFB918C' ptr: '0x3FFB91FC' next: '0x3FFB9234' data: '0x3FFB91E0'  <ElementBase.cpp>  identity: '4' name: 'hello world 4' debug Loc: 'LLP' 
pos: '4'         prev: '0x3FFB91FC' ptr: '0x3FFB9234' next: '0x00000000' data: '0x3FFB9218'  <ElementBase.cpp>  identity: '5' name: 'hello world 5' debug Loc: 'LLP' 
Linked List nodeCount: 4

Linked List insert more: 
 <ElementBase.cpp>  identity: '11' name: 'hello world B' debug Loc: 'test B' 
 * insert ID = 11
 <ElementBase.cpp>  identity: '12' name: 'hello world C' debug Loc: 'test C' 
 * insert ID = 12
 <ElementBase.cpp>  identity: '13' name: 'hello world D' debug Loc: 'test D' 
 * insert ID = 13
 <ElementBase.cpp>  identity: '14' name: 'hello world E' debug Loc: 'test E' 
 * insert ID = 14
 <ElementBase.cpp>  identity: '15' name: 'hello world F' debug Loc: 'test F' 
 * insert ID = 15
------------------------------------------------------
Linked List traverseForward - Head to Tail: 'not set'
pos: '1'         prev: '0x00000000' ptr: '0x3FFB9154' next: '0x3FFB918C' data: '0x3FFB9138'  <ElementBase.cpp>  identity: '1' name: 'hello world 1' debug Loc: 'LLP' 
pos: '2'         prev: '0x3FFB9154' ptr: '0x3FFB918C' next: '0x3FFB91FC' data: '0x3FFB9170'  <ElementBase.cpp>  identity: '2' name: 'hello world 2' debug Loc: 'LLP' 
pos: '3'         prev: '0x3FFB918C' ptr: '0x3FFB91FC' next: '0x3FFB9234' data: '0x3FFB91E0'  <ElementBase.cpp>  identity: '4' name: 'hello world 4' debug Loc: 'LLP' 
pos: '4'         prev: '0x3FFB91FC' ptr: '0x3FFB9234' next: '0x3FFB91C4' data: '0x3FFB9218'  <ElementBase.cpp>  identity: '5' name: 'hello world 5' debug Loc: 'LLP' 
pos: '5'         prev: '0x3FFB9234' ptr: '0x3FFB91C4' next: '0x3FFB926C' data: '0x3FFB91A8'  <ElementBase.cpp>  identity: '11' name: 'hello world B' debug Loc: 'LLP' 
pos: '6'         prev: '0x3FFB91C4' ptr: '0x3FFB926C' next: '0x3FFB92A4' data: '0x3FFB9250'  <ElementBase.cpp>  identity: '12' name: 'hello world C' debug Loc: 'LLP' 
pos: '7'         prev: '0x3FFB926C' ptr: '0x3FFB92A4' next: '0x3FFB92DC' data: '0x3FFB9288'  <ElementBase.cpp>  identity: '13' name: 'hello world D' debug Loc: 'LLP' 
pos: '8'         prev: '0x3FFB92A4' ptr: '0x3FFB92DC' next: '0x3FFB9314' data: '0x3FFB92C0'  <ElementBase.cpp>  identity: '14' name: 'hello world E' debug Loc: 'LLP' 
pos: '9'         prev: '0x3FFB92DC' ptr: '0x3FFB9314' next: '0x00000000' data: '0x3FFB92F8'  <ElementBase.cpp>  identity: '15' name: 'hello world F' debug Loc: 'LLP' 
Linked List nodeCount: 9

Linked List delete node at begin: 
------------------------------------------------------
Linked List traverseForward - Head to Tail: 'not set'
pos: '1'         prev: '0x00000000' ptr: '0x3FFB918C' next: '0x3FFB91FC' data: '0x3FFB9170'  <ElementBase.cpp>  identity: '2' name: 'hello world 2' debug Loc: 'LLP' 
pos: '2'         prev: '0x3FFB918C' ptr: '0x3FFB91FC' next: '0x3FFB9234' data: '0x3FFB91E0'  <ElementBase.cpp>  identity: '4' name: 'hello world 4' debug Loc: 'LLP' 
pos: '3'         prev: '0x3FFB91FC' ptr: '0x3FFB9234' next: '0x3FFB91C4' data: '0x3FFB9218'  <ElementBase.cpp>  identity: '5' name: 'hello world 5' debug Loc: 'LLP' 
pos: '4'         prev: '0x3FFB9234' ptr: '0x3FFB91C4' next: '0x3FFB926C' data: '0x3FFB91A8'  <ElementBase.cpp>  identity: '11' name: 'hello world B' debug Loc: 'LLP' 
pos: '5'         prev: '0x3FFB91C4' ptr: '0x3FFB926C' next: '0x3FFB92A4' data: '0x3FFB9250'  <ElementBase.cpp>  identity: '12' name: 'hello world C' debug Loc: 'LLP' 
pos: '6'         prev: '0x3FFB926C' ptr: '0x3FFB92A4' next: '0x3FFB92DC' data: '0x3FFB9288'  <ElementBase.cpp>  identity: '13' name: 'hello world D' debug Loc: 'LLP' 
pos: '7'         prev: '0x3FFB92A4' ptr: '0x3FFB92DC' next: '0x3FFB9314' data: '0x3FFB92C0'  <ElementBase.cpp>  identity: '14' name: 'hello world E' debug Loc: 'LLP' 
pos: '8'         prev: '0x3FFB92DC' ptr: '0x3FFB9314' next: '0x00000000' data: '0x3FFB92F8'  <ElementBase.cpp>  identity: '15' name: 'hello world F' debug Loc: 'LLP' 
Linked List nodeCount: 8

Linked List delete node at position 4: 
------------------------------------------------------
Linked List traverseForward - Head to Tail: 'not set'
pos: '1'         prev: '0x00000000' ptr: '0x3FFB918C' next: '0x3FFB91FC' data: '0x3FFB9170'  <ElementBase.cpp>  identity: '2' name: 'hello world 2' debug Loc: 'LLP' 
pos: '2'         prev: '0x3FFB918C' ptr: '0x3FFB91FC' next: '0x3FFB9234' data: '0x3FFB91E0'  <ElementBase.cpp>  identity: '4' name: 'hello world 4' debug Loc: 'LLP' 
pos: '3'         prev: '0x3FFB91FC' ptr: '0x3FFB9234' next: '0x3FFB926C' data: '0x3FFB9218'  <ElementBase.cpp>  identity: '5' name: 'hello world 5' debug Loc: 'LLP' 
pos: '4'         prev: '0x3FFB9234' ptr: '0x3FFB926C' next: '0x3FFB92A4' data: '0x3FFB9250'  <ElementBase.cpp>  identity: '12' name: 'hello world C' debug Loc: 'LLP' 
pos: '5'         prev: '0x3FFB926C' ptr: '0x3FFB92A4' next: '0x3FFB92DC' data: '0x3FFB9288'  <ElementBase.cpp>  identity: '13' name: 'hello world D' debug Loc: 'LLP' 
pos: '6'         prev: '0x3FFB92A4' ptr: '0x3FFB92DC' next: '0x3FFB9314' data: '0x3FFB92C0'  <ElementBase.cpp>  identity: '14' name: 'hello world E' debug Loc: 'LLP' 
pos: '7'         prev: '0x3FFB92DC' ptr: '0x3FFB9314' next: '0x00000000' data: '0x3FFB92F8'  <ElementBase.cpp>  identity: '15' name: 'hello world F' debug Loc: 'LLP' 
Linked List nodeCount: 7

Linked List delete node at end: 
------------------------------------------------------
Linked List traverseForward - Head to Tail: 'not set'
pos: '1'         prev: '0x00000000' ptr: '0x3FFB918C' next: '0x3FFB91FC' data: '0x3FFB9170'  <ElementBase.cpp>  identity: '2' name: 'hello world 2' debug Loc: 'LLP' 
pos: '2'         prev: '0x3FFB918C' ptr: '0x3FFB91FC' next: '0x3FFB9234' data: '0x3FFB91E0'  <ElementBase.cpp>  identity: '4' name: 'hello world 4' debug Loc: 'LLP' 
pos: '3'         prev: '0x3FFB91FC' ptr: '0x3FFB9234' next: '0x3FFB926C' data: '0x3FFB9218'  <ElementBase.cpp>  identity: '5' name: 'hello world 5' debug Loc: 'LLP' 
pos: '4'         prev: '0x3FFB9234' ptr: '0x3FFB926C' next: '0x3FFB92A4' data: '0x3FFB9250'  <ElementBase.cpp>  identity: '12' name: 'hello world C' debug Loc: 'LLP' 
pos: '5'         prev: '0x3FFB926C' ptr: '0x3FFB92A4' next: '0x3FFB92DC' data: '0x3FFB9288'  <ElementBase.cpp>  identity: '13' name: 'hello world D' debug Loc: 'LLP' 
pos: '6'         prev: '0x3FFB92A4' ptr: '0x3FFB92DC' next: '0x00000000' data: '0x3FFB92C0'  <ElementBase.cpp>  identity: '14' name: 'hello world E' debug Loc: 'LLP' 
Linked List nodeCount: 6

Linked List traverseBackward - Tail to Head: 
pos: '6'  prev: '0x3FFB92A4' ptr: '0x3FFB92DC' next: '0x00000000' data: '0x3FFB92C0'  <ElementBase.cpp>  identity: '14' name: 'hello world E' debug Loc: 'LLP' 
pos: '5'  prev: '0x3FFB926C' ptr: '0x3FFB92A4' next: '0x3FFB92DC' data: '0x3FFB9288'  <ElementBase.cpp>  identity: '13' name: 'hello world D' debug Loc: 'LLP' 
pos: '4'  prev: '0x3FFB9234' ptr: '0x3FFB926C' next: '0x3FFB92A4' data: '0x3FFB9250'  <ElementBase.cpp>  identity: '12' name: 'hello world C' debug Loc: 'LLP' 
pos: '3'  prev: '0x3FFB91FC' ptr: '0x3FFB9234' next: '0x3FFB926C' data: '0x3FFB9218'  <ElementBase.cpp>  identity: '5' name: 'hello world 5' debug Loc: 'LLP' 
pos: '2'  prev: '0x3FFB918C' ptr: '0x3FFB91FC' next: '0x3FFB9234' data: '0x3FFB91E0'  <ElementBase.cpp>  identity: '4' name: 'hello world 4' debug Loc: 'LLP' 
pos: '1'  prev: '0x00000000' ptr: '0x3FFB918C' next: '0x3FFB91FC' data: '0x3FFB9170'  <ElementBase.cpp>  identity: '2' name: 'hello world 2' debug Loc: 'LLP' 
Linked List nodeCount: 6





Linked List iterate Node from Head to Tail: 
 data: '3FFB9170'  <ElementBase.cpp>  identity: '2' name: 'hello world 2' debug Loc: 'forward' 
 data: '3FFB91E0'  <ElementBase.cpp>  identity: '4' name: 'hello world 4' debug Loc: 'forward' 
 data: '3FFB9218'  <ElementBase.cpp>  identity: '5' name: 'hello world 5' debug Loc: 'forward' 
 data: '3FFB9250'  <ElementBase.cpp>  identity: '12' name: 'hello world C' debug Loc: 'forward' 
 data: '3FFB9288'  <ElementBase.cpp>  identity: '13' name: 'hello world D' debug Loc: 'forward' 
 data: '3FFB92C0'  <ElementBase.cpp>  identity: '14' name: 'hello world E' debug Loc: 'forward' 
Linked List nodeCount: 6




Linked List iterate Node from Tail to Head: 
  data: '3FFB92C0'  <ElementBase.cpp>  identity: '14' name: 'hello world E' debug Loc: 'back' 
  data: '3FFB9288'  <ElementBase.cpp>  identity: '13' name: 'hello world D' debug Loc: 'back' 

```
