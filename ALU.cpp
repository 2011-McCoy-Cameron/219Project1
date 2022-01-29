#include "ALU.h"

ALU::ALU()
{
    operation = " ";
    operand1 = " ";
    operand2 = " ";

}

ALU::ALU(std::string inputOperation, std::string inputOperand1, std::string inputOperand2)
{

  operation = inputOperation;
  operand1 = inputOperand1;
  operand2 = inputOperand2;

}

std::string ALU::getOperation()
{
    return operation;
}

std::string ALU::getOperand1()
{
    return operand1;
}

std::string ALU::getOperand2()
{
    return operand2;
}

void ALU::setOperation(std::string inputOperation)
{
    operation = inputOperation;
}

void ALU::setOperand1(std::string inputOperand1)
{
    operand1 = inputOperand1;
}

void ALU::setOperand2(std::string inputOperand2)
{
    operand2 = inputOperand2;
}

std::string ALU::ADD(std::string operand1, std::string operand2)
{
    std::string hexSum;
    return hexSum;
}