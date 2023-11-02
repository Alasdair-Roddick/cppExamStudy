#include <iostream>
using namespace std;

int main() {
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i : cars) {
        cout << cars[i] << endl;
    }

    return 0;
}

/* Output: 
Volvo
BMW
Ford
Mazda
Tesla
*/