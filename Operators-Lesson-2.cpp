#include <iostream>
using namespace std;

int main() {
    int sum1 = 100;
    int sum2 = sum1 + 50;
    int sum3 = sum2 + sum2;

    cout << sum1 << "\n";
    cout << sum2 << "\n";
    cout << sum3 << "\n";


    return 0;
}

/* Output:
100
150
300
*/
