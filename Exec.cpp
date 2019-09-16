//Exec.cpp

#include <iostream>
#include <string>
#include <fstream>

#include"Exec.h"
#include "LinkedList.h"
#include"Hash.h"


Exec::Exec(std::string m_textFile)
{
  std::ifstream inFile;
  inFile.open(m_textFile); //open file passed from main
  if(!inFile.is_open())
  {
    std::cout << "File could not be opened.\n";
  }
  else
  {
    std::cout << "File opened successfully.\n";
    double numEntries = 0;
    std::string entry;
    while(inFile >> entry)
    {
      numEntries++;
    }
    inFile.close(); //close file

    //reopen file for hashing
    inFile.open(m_textFile);
    if(!inFile.is_open())
    {
      std::cout << "File could not be reopened.\n";
    }
    else
    {
      Hash hash(numEntries);
      std::string element;
      for(int i = 0; i < numEntries; i++) //while not the end of file
      {
        inFile >> element;
        std::cout << "Element for hash.add(): " << element << '\n';
        hash.add(i, element);
      }
      // while(inFile >> element) //while not the end of file
      // {
      //
      //   std::cout << "Element for hash.add(): " << element << '\n';
      //   hash.add(element);
      // }
    }
  }
}
