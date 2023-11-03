#include <iostream>
using namespace std;

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int z = myFunction(5, 3);
	cout << z << endl;
  cout << z * 10;
}



/* Output: 
8
80
*/