#include <iostream>
#include <string>
#include "main.h"

double getInput()
{
  std::cout << "Enter a double value: ";
  double value;
  std::cin >> value;

  return value;
}

char getSign()
{
  std::cout << "Enter one of the following ";
  std::cout << "+, -, *, / >>> " << '\n';

  char sign{};
  std::cin >> sign;

  return sign;
}

void writeAnswer(double num1, double num2, char sign)
{ 
  if (sign == '+')
    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
  else if (sign == '-')
    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
  else if (sign == '*')
    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
  else if (sign == '/')
    std::cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n';
  else
    std::cout << '\n';
}

int main()
{
  double firstNum { getInput() };
  double secondNum { getInput() };
  char userSign { getSign() };
  writeAnswer(firstNum,secondNum,userSign);

  return 0;
}