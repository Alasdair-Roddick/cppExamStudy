#include <iostream>
using namespace std;

int main() {
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    for (int i = 0; i < 5; i++) {
        cout << cars[i] << endl;
    }

    return 0;
}

// Output: Volvo BMW Ford Mazda Tesla