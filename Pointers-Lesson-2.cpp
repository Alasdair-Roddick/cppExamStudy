#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;

    cout << ptr << endl;

    cout << *ptr << endl;
}

/* Output:
0x16f062e98
Pizza
*/