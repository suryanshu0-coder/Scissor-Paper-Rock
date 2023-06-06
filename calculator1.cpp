#include <iostream>
#include <cmath>

using namespace std;

class SimpleCalculator
{
protected:
         float num1;
         float num2;
         char operation;
         float result;

public:
         SimpleCalculator()
         {
                  num1 = 0;
                  num2 = 0;
         }

         void inputNumberForSimpleCalculation()
         {
                  cout << "Enter operator [+,-,*,/]: ";
                  cin >> operation;
                  cout << "Enter two numbers: ";
                  cin >> num1 >> num2;
         }

         void SimpleCalculation()
         {
                  switch (operation)
                  {
                  case '+':
                           result = num1 + num2;
                           cout << "The sum is: " << result << endl;
                           break;

                  case '-':
                           result = num1 - num2;
                           cout << "The difference is: " << result << endl;
                           break;

                  case '*':
                           result = num1 * num2;
                           cout << "The product is: " << result << endl;
                           break;

                  case '/':
                           if (num2 != 0)
                           {
                                    result = num1 / num2;
                                    cout << "The division is: " << result << endl;
                           }
                           else
                           {
                                    cout << "Error: Division by zero is not allowed." << endl;
                           }
                           break;

                  default:
                           cout << "Invalid operation" << endl;
                           break;
                  }
         }
};

class ScientificCalculator
{
protected:
         float num1;
         float num2;
         char operation;
         float result;

public:
         ScientificCalculator()
         {
                  num1 = 0;
                  num2 = 0;
         }

         void inputNumberForScientificCalculation()
         {
                  cout << "Enter operator [^, s, c, l]: ";
                  cin >> operation;
                  cout << "Enter a number: ";
                  cin >> num1;
                  if (operation != 's' && operation != 'c')
                  {
                           cout << "Enter another number: ";
                           cin >> num2;
                  }
         }

         void ScientificCalculation()
         {
                  switch (operation)
                  {
                  case '^':
                           result = pow(num1, num2);
                           cout << "The power is: " << result << endl;
                           break;

                  case 's':
                           result = sqrt(num1);
                           cout << "The square root is: " << result << endl;
                           break;

                  case 'c':
                           result = cos(num1);
                           cout << "The cosine of num1 is: " << result << endl;
                           break;

                  case 'l':
                           result = log(num1);
                           cout << "The natural logarithm is: " << result << endl;
                           break;

                  default:
                           cout << "Invalid operation" << endl;
                           break;
                  }
         }
};

class Hybrid : public SimpleCalculator, public ScientificCalculator
{
public:
         void takeInput()
         {
                  inputNumberForSimpleCalculation();
                  inputNumberForScientificCalculation();
         }

         void calculation()
         {
                  SimpleCalculator::SimpleCalculation();
                  ScientificCalculator::ScientificCalculation();
         }
};

int main()
{
         Hybrid h1;
         h1.takeInput();
         h1.calculation();

         return 0;
}
