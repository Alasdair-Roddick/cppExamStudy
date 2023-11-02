#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << endl;
    }
    return 0;
} 

// Output: 0 1 2 3 5 6 7 8 9