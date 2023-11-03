#include <iostream>
using namespace std;

int PlusFuncInt(int x, int y) {
  return x + y;
}

double PlusFuncDouble(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = PlusFuncInt(8, 5);
  double myNum2 = PlusFuncDouble(4.3, 6.26);

  cout << myNum1 << endl;
  cout << myNum2 << endl;
  return 0;
}



/* Output: 
13
10.56
*/