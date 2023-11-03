#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;

    cout << food << endl;
    cout << &food << endl;
    cout << ptr << endl;
}

/* Output:
Pizza
0x16d522e98
0x16d522e98
*/