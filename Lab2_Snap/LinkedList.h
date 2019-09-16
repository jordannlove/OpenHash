//LinkedList.h

#include <iostream>
#include <string>

#include "Node.h"

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList
{
public:
  LinkedList();
  LinkedList(int entry);
  virtual ~LinkedList();

  bool isEmpty() const;
  int getLength() const;
  // bool insert(int newPosition, const int newEntry);
  bool remove(int position);  //Delete
  void clear();
  int getEntry(int position) const;
  int replace(int position, const int newEntry);
  bool add(int entry); //add

private:
  Node* head;
  int itemCount;
  Node* getNodeAt(int position) const;
};

#endif
