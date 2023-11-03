#include <iostream>
using namespace std;



int main() {
  myFunction();
  return 0;
}

void myFunction() {
  cout << "I just got executed!";
}

/* Output: Functions-Lesson-3.cpp:7:3: error: use of undeclared identifier 'myFunction'
   myFunction();
   ^
 1 error generated.*/