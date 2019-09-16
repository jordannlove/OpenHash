//LinkedList.h

#include <iostream>
#include <string>

#include "PrecondViolatedExcep.h"
#include "Node.h"

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList
{
public:
  LinkedList();
  virtual ~LinkedList();

  bool isEmpty() const;
  int getLength() const;
  // bool insert(int newPosition, const int newEntry);
  bool remove(int position);  //Delete
  void clear();
  int getEntry(int position) const throw(PrecondViolatedExcep);
  int replace(int position, const int newEntry) throw(PrecondViolatedExcep);
  bool add(int entry); //add

  //Smallest
  //Largest
  //Average
  //Merge two lists
  //Print
  //Reverse list

private:
  Node* head;
  int itemCount;
  Node* getNodeAt(int position) const;
};

#endif
