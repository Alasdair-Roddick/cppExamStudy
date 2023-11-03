#include <iostream>
using namespace std;

int main() {
    struct {
        string name;
        int age;
        double heightInMeters;
    } Person;

    Person.name = "Alasdair";
    Person.age = 19;
    Person.heightInMeters = 1.83;

    cout << "Name: " << Person.name << endl;
    cout << "Age: " << Person.age << endl;
    cout << "Height: " << Person.heightInMeters << endl;

    return 0;

}

/* Output:
Name: Alasdair
Age: 19
Height: 2.1574e-314
*/