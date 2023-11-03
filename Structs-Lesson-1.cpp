#include <iostream>
using namespace std;

int main() {
    struct Person {
        string name;
        int age;
        double heightInMeters;
    };

    Person person1;
    person1.name = "Alasdair";
    person1.age = 19;
    person1.heightInMeters = 1.83;

    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.heightInMeters << endl;

    return 0;

}

/* Output:
Name: Alasdair
Age: 19
Height: 1.83
*/