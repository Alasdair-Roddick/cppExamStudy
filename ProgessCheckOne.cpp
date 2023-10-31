#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int age;
    int currentYear;
    int ageGoal = 100;
    int yearWhenAgeGoal;

    // Get user input for age and current year
    cout << "Enter your current age: ";
    cin >> age;
    cout << "Enter the current year: ";
    cin >> currentYear;

    // Calculate the year when the user will turn 100
    yearWhenAgeGoal = currentYear + (ageGoal - age);

    // Check conditions and display output
    if (age >= 100) {
        cout << "You are already 100 years old" << endl;
    } else if (age < 0) {
        cout << "You are not born yet" << endl;
    } else {
        cout << "You will turn 100 years old in the year " << yearWhenAgeGoal << endl;
    }

    return 0;
}
