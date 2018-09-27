#include <stdio.h>
#include <float.h>

int menu();
void GetOperands();
double Calculate(double,double,int);

int main(int argc, char const *argv[]) {
  int ret = 0;
  int operand1;
  int operand2;
  double result;
  printf("Choose one of the following operations %d\n", ret);
  ret = menu();
  printf("%d\n",ret);
  GetOperands();
  result = Calculate(operand1,operand2,ret);
  printf("%lf\n",result);
  return 0;
}
int menu()
{
  int choice = 0;

  printf("\tAdd (1)\n");
  printf("\tSubtract (2)\n");
  printf("\tMultiply (3)\n");
  printf("\tDivide (4)\n");
  printf("\tStop program (-1)\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);
  if (choice > 4 || choice == 0 || choice < -1)
  {
    printf("Input not allowed, please try again\n");
  }
  else
  {
    return choice;
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
double Calculate(double operand1,double operand2,int ret){
  
  double result;
  result = operand1 ret operand2;
  return result;
}
