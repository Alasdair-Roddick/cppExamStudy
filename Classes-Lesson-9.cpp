#include <iostream>
using namespace std;


class Employee {
    private:
        int salary;

    public:
        void setSalary(int s) {
            salary = s;
        }

        int getSalary() {
            return salary;
        }
};



int main() {
    Employee employee1;
    employee1.setSalary(50000);
    cout << employee1.getSalary() << endl;
    return 0;
}

/* Output: 50000
*/