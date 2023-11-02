#include <iostream>
using namespace std;

int main() {
    string carSearch;
    string cars[20] = {"Volvo", "BMW", "Ford", "Mazda", "Toyota", "Nissan", "Honda", "Hyundai", "Kia", "Chevrolet", "Audi", "Mercedes", "Porsche", "Ferrari", "Lamborghini", "Bugatti", "Renault", "Peugeot", "Citroen", "Fiat"};
    cout << "which car are you looking for? "; // Mazda
    cin >> carSearch;

    for (const string& car : cars) {
        if (car == carSearch) {
            cout << "We have that car!" << endl;
            break;
        }
        cout << car << endl;
    }
    return 0;
} 

// Output: We have that car!