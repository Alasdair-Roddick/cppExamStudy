#include <iostream>
using namespace std;

void ArrayReader(int myNumbers[5]) {
  for (int i = 0; i < 5; ++i) {
    cout << myNumbers[i] << "\n";
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  ArrayReader(myNumbers);
  return 0;
}



/* Output: 
10
20
30
40
50
*/