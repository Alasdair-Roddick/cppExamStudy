#include <iostream>
using namespace std;



class Person {       // The class
  public:             // Access specifier
    Person() {
        cout << "Hello World!";
    
    } // Method/function defined inside the class
};



int main() {
    Person person1;     // Create an object of MyClass
    return 0;
}

/* Output:
Hello, World!
*/