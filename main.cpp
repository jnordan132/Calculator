# include <iostream>
using namespace std;

int main() {

  float num1;
  char op;
  float num2;

  cout << "Enter your first number: ";
  cin >> num1;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter your second operands: ";
  cin >> num2;
  
  switch(op) {
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }
  return 0;
}
