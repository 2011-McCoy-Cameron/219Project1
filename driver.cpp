#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include "ALU.h"



int main()

{
  std::string operation, hexOperand1, hexOperand2, finalHex;

  
  std::string tempValue1, tempValue2;
 
  

  uint32_t resultInt1, resultInt2, finalInt;

  

  std::ifstream myFile("inputFile.txt");
  while(!myFile.eof())
  {
       std::stringstream ss1, ss2, ss3;

    myFile >> operation >> hexOperand1 >> hexOperand2;

    tempValue1 = hexOperand1;

    tempValue2 = hexOperand2;

    ss1 << std::hex << tempValue1;

    ss2 << std::hex << tempValue2;

    ss1 >> resultInt1;

    ss2 >> resultInt2;

    finalInt = resultInt1 + resultInt2;

    ss3 << std::hex << finalInt;

    ss3 >> finalHex;

   
    

   
    





    

    

    std::cout << operation << ": " << hexOperand1 << " + " << hexOperand2 << " = " << "0x" << finalHex << std::endl;
    
  }

    
  

  myFile.close();

  

 
  return 0;
}