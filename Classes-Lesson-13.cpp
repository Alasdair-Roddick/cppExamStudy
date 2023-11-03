#include <iostream>
using namespace std;

class Employee {
    protected:
        int salary;
};

class Programmer: public Employee {
    public:
        int bonus;
        void setSalary(int s) {
            salary = s;
        }
        int getSalary() {
            return salary;
        }
};




int main() {
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;
    cout << "Salary: " << myObj.getSalary() << endl;
    cout << "Bonus: " << myObj.bonus << endl;
    return 0;
}

/* Output: 
Salary: 50000
Bonus: 15000
*/