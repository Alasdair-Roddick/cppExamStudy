#include <iostream>
using namespace std;



class Person {       // The class
  public:             // Access specifier
    void PrintName(string fname); // Method/function defined inside the class
};

void Person::PrintName(string fname) { // Method/function definition outside the class
  cout << fname << " is my name." << endl;
}

int main() {
    Person person1;     // Create an object of MyClass
    person1.PrintName("Alasdair");  // Call the method
    return 0;
}

/* Output:
Alasdair is my name.
*/