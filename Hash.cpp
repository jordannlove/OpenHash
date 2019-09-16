//Hash.cpp

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

#include"Hash.h"
#include "LinkedList.h"

Hash::Hash(double entries)
{
  std::cout << "Hash constructor reached\n";
  n = entries;
  m = ceil(n/lambda);
  int size = int (m); //typecast m to an int called size
  LinkedList* table;
  table = new LinkedList[size];
}

bool Hash::add(int index, std::string str)
{
  std::cout << "Hash add reached\n";
}
