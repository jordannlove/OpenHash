//Hash.h

#include <iostream>
#include <string>
#include <fstream>

#ifndef HASH_H
#define HASH_H

class Hash
{
public:
  Hash(double entries);
  bool add(int index, std::string str);

private:
  double lambda = .75;
  double n;
  double m;
};

#endif
