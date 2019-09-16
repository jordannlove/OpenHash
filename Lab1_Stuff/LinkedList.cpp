//LinkedList.cpp

#include <iostream>
#include <string>

#include "LinkedList.h"
#include "Node.h"


////
//constructors
LinkedList::LinkedList()
{
  std::cout << "LinkedList constructor reached\n";
  //head = nullptr;
  itemCount = 0;
}

LinkedList::~LinkedList()
{

}

////
//methods
bool LinkedList::add(int entry)
{
  std::cout << "LinkedList add() reached.\n";
  std::cout << entry << '\n';

  Node* newNodePtr = new Node();
  newNodePtr->setValue(entry);
  newNodePtr->setNext(head);
  head = newNodePtr;
  itemCount++;
  return true;
}

bool LinkedList::isEmpty() const
{
  if(itemCount == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int LinkedList::getLength() const
{
  return itemCount;
}

// bool LinkedList::insert(int newPosition, const int newEntry)
// {
//   bool insertable = (newPosition >= 1) && (newPosition <= itemCount + 1);
//   if(insertable)
//   {
//     Node* newNodePtr = new Node(newEntry);
//     if(newPosition == 1)
//     {
      
//     }
//     else
//     {
//       Node* prevPtr = getNodeAt(newPosition - 1);
//       newNodePtr->setNext(prevPtr->getNext());
//       prevPtr->setNext(newNodePtr);
//     }
//     itemCount++;
//   }
//   return insertable;
// }

bool LinkedList::remove(int position)
{

}

void LinkedList::clear()
{

}

int LinkedList::getEntry(int position) const throw(PrecondViolatedExcep)
{

}

int LinkedList::replace(int position, const int newEntry) throw(PrecondViolatedExcep)
{

}
