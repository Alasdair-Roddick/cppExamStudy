#include <iostream>
using namespace std;



class MyClass {
    public:
        int x;
    private:
        int y;
};



int main() {
    MyClass myObj;
    myObj.x = 25;  // Allowed (public)
    myObj.y = 50;  // Not allowed (private)

    return 0;
}

/* Output: error: 'y' is a private member of 'MyClass'
*/