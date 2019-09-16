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
    int number;
    inFile >> number;
    LinkedList list(number);
    while(inFile >> number) //while not the end of file
    {
      list.add(number);
    }

    //main menu//
    if(exit == false)
    {
      std::cout << "menu";
    }
  }
}
