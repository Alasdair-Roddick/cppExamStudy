#include <iostream>
using namespace std;

int main() {
    struct Person{
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

    Person person2;
    person2.name = "Bob";
    person2.age = 20;
    person2.heightInMeters = 1.75;

    cout << "Name: " << person2.name << endl;
    cout << "Age: " << person2.age << endl;
    cout << "Height: " << person2.heightInMeters << endl;

    Person person3;
    person3.name = "Charlie";
    person3.age = 21;
    person3.heightInMeters = 1.68;
    
    cout << "Name: " << person3.name << endl;
    cout << "Age: " << person3.age << endl;
    cout << "Height: " << person3.heightInMeters << endl;
    return 0;

}

/* Output:
Name: Alasdair
Age: 19
Height: 1.83
Name: Bob
Age: 20
Height: 1.75
Name: Charlie
Age: 21
Height: 1.68
*/