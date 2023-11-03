#include <iostream>
using namespace std;

void SwapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNumber = 10;
  int secondNumber = 20;

  cout << "Before swap: " << "\n";
  cout << firstNumber << secondNumber << "\n";

  // Call the function, which will change the values of firstNumber and secondNumber
  SwapNums(firstNumber, secondNumber);

  cout << "After swap: " << "\n";
  cout << firstNumber << secondNumber << "\n";

  return 0;
}



/* Output: 
Before swap: 
1020
After swap: 
2010
*/