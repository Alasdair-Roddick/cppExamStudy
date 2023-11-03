#include <iostream>
using namespace std;

int PlusFunc(int x, int y) {
  return x + y;
}

double PlusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = PlusFunc(8, 5);
  double myNum2 = PlusFunc(4.3, 6.26);

  cout << myNum1 << endl;
  cout << myNum2 << endl;
  return 0;
}



/* Output: 
13
10.56
*/