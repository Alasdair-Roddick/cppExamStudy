#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;

    cout << food << endl;

    cout << &food << endl;

    cout << *ptr << endl;

    *ptr = "Hamburger";

    

    cout << *ptr << endl;

    cout << &food << endl;

    cout << food << endl;

}

/* Output:
Pizza
0x16ddaee98
Pizza
Hamburger
0x16ddaee98
Hamburger
*/