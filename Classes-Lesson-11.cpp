#include <iostream>
using namespace std;


class MyClass {
    public:
        void myFunction() {
            cout << "Some content in parent class." << endl;
        }
};

class MyChildClass : public MyClass {
    public:
        void myFunction() {
            cout << "Some content in child class." << endl;
        }
};

class MyGrandChildClass : public MyChildClass {
    public:
        void myFunction() {
            cout << "Some content in grand child class." << endl;
        }
};



int main() {
    MyGrandChildClass myObj;
    myObj.myFunction();
    return 0;
}

/* Output: 
Some content in grand child class.
*/