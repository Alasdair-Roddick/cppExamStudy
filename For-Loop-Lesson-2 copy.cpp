#include <iostream>
using namespace std;

int main() {
    // Outer Loop
    for (int i = 0; i < 5; i++) {
        cout << "Outer Loop: " << i << endl;
        // Inner Loop
        for (int j = 0; j < 5; j++) {
            cout << "Inner Loop: " << j << endl;
        }
    }

    return 0;
}

/* Output:
Outer Loop: 0
Inner Loop: 0
Inner Loop: 1
Inner Loop: 2
Inner Loop: 3
Inner Loop: 4
Outer Loop: 1
Inner Loop: 0
Inner Loop: 1
Inner Loop: 2
Inner Loop: 3
Inner Loop: 4
Outer Loop: 2
Inner Loop: 0
Inner Loop: 1
Inner Loop: 2
Inner Loop: 3
Inner Loop: 4
Outer Loop: 3
Inner Loop: 0
Inner Loop: 1
Inner Loop: 2
Inner Loop: 3
Inner Loop: 4
Outer Loop: 4
Inner Loop: 0
Inner Loop: 1
Inner Loop: 2
Inner Loop: 3
Inner Loop: 4
*/
