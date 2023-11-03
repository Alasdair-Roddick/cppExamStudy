#include <iostream>
using namespace std;



class Person {       
  public:
    string name;
    int age;
    string eyeColor;

    Person(string name, int age, string eyeColor) {
        name = name;
        age = age;
        eyeColor = eyeColor;             

    
    } 
};



int main() {
    Person person1("Alasdair", 19, "Blue");     

    cout << person1.name << endl;
    cout << person1.age << endl;
    cout << person1.eyeColor << endl;

    return 0;
}

/* Output:
Alasdair
19
Blue
*/