#include <iostream>
using namespace std;



class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
    MyClass myObj1;  // Create an object of MyClass
    MyClass myObj2;  // Create another object of MyClass

    // Access attributes and set values
    myObj1.myNum = 15;
    myObj1.myString = "Some text";

    myObj2.myNum = 20;
    myObj2.myString = "Some other text";


    // Print attribute values
    cout << myObj1.myNum << "\n";
    cout << myObj1.myString << endl;

    cout << myObj2.myNum << "\n";
    cout << myObj2.myString << endl;
    return 0;
}

/* Output:
15
Some text
20
Some other text
*/