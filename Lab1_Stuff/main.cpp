//main.cpp

#include <iostream>
#include <string>
#include <fstream>

#include "Exec.h"

int main(int argc, char* argv[])
{
  if(argc < 2)
  {
    std::cout << "Invalid parameters - must type data file name after './Lab1'.\n";
  }
  else
  {
    std::string textFile = argv[1];
    Exec run(textFile); //create Exec object for program run
  }
  return(0);
}
