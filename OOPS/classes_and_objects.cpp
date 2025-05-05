#include <bits/stdc++.h>
using namespace std;

// this is a class Employee and it has some private and public members
class Employee{
private: // access modifier , Private allows only members in class to inherit the properties
    string password;
    double salary;
public: // public can be accessed in main by . notation
    string employee_id;
    string name;
    string department;
    int age;
    
    void set_sal(int salary){
        this->salary = salary;
    }
    int get_sal(){
        return this->salary;
    }
    void getInfo(){
        cout << "ID: " << this->employee_id << endl;
        cout << "Name: " << this->name << endl;
        cout << "Department: " <<department << endl;
        cout << "Age: " <<age << endl;
    }
};

int main()
{
    Employee e1; // creates and Employee e1 (object) Object is an instance of class.
    e1.employee_id = "2025E1";
    e1.name = "Dhyey";
    e1.department = "CS";
    e1.age = 22;
    e1.set_sal(20000);
    e1.getInfo();
    cout << "Salary: "<<e1.get_sal();
    
    return 0;
}
