#include <iostream>
using namespace std;

int main() {
    char letters[2][4] = {{'a', 'b', 'c', 'd'}, {'e', 'f', 'g', 'h'}};

    cout << letters[0][2] << endl;
    letters[0][2] = 'z';
    cout << letters[0][2] << endl;

    return 0;
}

// Output: c z
