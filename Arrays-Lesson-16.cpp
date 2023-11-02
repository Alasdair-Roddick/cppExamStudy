#include <iostream>
using namespace std;

int main() {
    char letters[2][4] = {{'a', 'b', 'c', 'd'}, {'e', 'f', 'g', 'h'}};

    for (int i = 0; i < sizeof(letters) / sizeof(letters[0]); i++) {
        for (int j = 0; j < sizeof(letters[0]) / sizeof(letters[0][0]); j++) {
            cout << letters[i][j] << " ";
        }
    }

    return 0;
}

// Output: a b c d e f g h
