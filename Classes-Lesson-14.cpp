#include <iostream>
using namespace std;

class Animal {
    public:
        void animalSound() {
            cout << "This animal makes a sound \n";
        }
};

class Pig : public Animal {
    public:
        void animalSound() {
            cout << "The pig says: wee wee \n";
        }
};

class Dog : public Animal {
    public:
        void animalSound() {
            cout << "The dog says: ruff ruff \n";
        }
};




int main() {
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();

    return 0;
}

/* Output: 
This animal makes a sound 
The pig says: wee wee 
The dog says: ruff ruff 
*/