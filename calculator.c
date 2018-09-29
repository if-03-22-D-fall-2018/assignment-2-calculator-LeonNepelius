#include <stdio.h>
#include <float.h>
#include <stdbool.h>

int menu();
void GetOperands(double*,double*);
double Calculate(double,double,int);

int main(int argc, char const *argv[]) {
  int choice;
  double result;
  double operand1;
  double operand2;
  bool stay = true;
  while (stay)
  {
    choice = menu();
    if (choice == 0)
    {
      return 0;
    }
    GetOperands(&operand1,&operand2);
    result = Calculate(operand1,operand2,choice);
    if (result != 0)
    {
        printf("The result is: %lf\n",result);
    }
    printf("\n");
  }
  return 0;
}
int menu()
{
  int choice = 0;
  bool stay = true;
  while (stay)
  {
    printf("Choose one of the following operations\n");
    printf("\tAdd (1)\n");
    printf("\tSubtract (2)\n");
    printf("\tMultiply (3)\n");
    printf("\tDivide (4)\n");
    printf("\tStop program (-1)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == -1)
    {
      return 0;
    }
    if (choice > 4 || choice == 0 || choice < -1)
    {
      printf("Input not allowed, please try again\n");
    }
    else
    {
      return choice;
    }
  }
  return 0;
}

void GetOperands(double* operand1, double* operand2)
{

  printf("Please enter the first operand: ");
  scanf("%lf", operand1);
  printf("Please enter the second operand: ");
  scanf("%lf", operand2);

}

double Calculate(double operand1,double operand2,int choice){

  double result;
  if (choice == 1)
  {
    result = operand1 + operand2;
  }
  if (choice == 2)
  {
    result = operand1 - operand2;
  }
  if (choice == 3)
  {
    result = operand1 * operand2;
  }
  if (choice == 4)
  {
    if (operand2 == 0)
    {
      printf("Division by zero\n");
      return 0;
    }
    result = operand1 / operand2;
  }
  return result;
}
