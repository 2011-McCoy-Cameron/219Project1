#include <iostream>
#include <string>
#include <iomanip>


#ifndef ALU_H
#define ALU_H




class ALU

{

    private:
      std::string operation, operand1, operand2;
      

    public:
      std::string getOperation();
      std::string getOperand1();
      std::string getOperand2();

      void setOperation(std::string);
      void setOperand1(std::string);
      void setOperand2(std::string);

      std::string ADD(std::string, std::string);
    
      ALU();
      ALU(std::string, std::string, std::string);


    




};



#include "ALU.cpp"

#endif