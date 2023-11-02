#include <iostream>
using namespace std;

int main() {
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    cout << cars[2] << endl;
    cars[2] = "Ferrari";
    cout << cars[2] << endl;

    return 0;
}

// Output: Ford Ferrari