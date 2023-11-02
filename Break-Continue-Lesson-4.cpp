#include <iostream>
using namespace std;

// example of a while loop with both break and continue

int main() {
    int i = 0;
    while (i < 10) {
        if (i == 4) {
            i++;
            continue;
        }
        if (i == 8) {
            break;
        }
        cout << i << endl;
        i++;
    }
    return 0;

} 

// Output: 0 1 2 3 5 6 7