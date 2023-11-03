#include <iostream>
using namespace std;

void GetFirstName(string fname = "No Name Provided") {
  cout << fname << endl;
}

int main() {
  GetFirstName("Alasdair");
  GetFirstName();
  GetFirstName("Liam");
  GetFirstName("Megan");
  return 0;
}



/* Output: Alasdair
No Name Provided
Liam
Megan
*/