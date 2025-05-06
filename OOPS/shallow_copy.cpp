// Copy Constructor
// There are two types of copies
// Deep Copy and Shallow Copy
// Generally we use Shallow Copy and compiler also provides us with Shallow copy Constructor but it has few issues.
// A Shallow Copy is copy of values as it is, suppose we create a class in which a place is allocated dynamically then it is stored in heap and is pointed using a pointer, this pointer is not the value but values is at place in the pointer pointing place. So when we copy a object from other object than it creates a shallow copy, thus now changing the value of it will lead to change in value of previous one too. So we create deep copy.
#include <bits/stdc++.h>
using namespace std;

class Employee{
public:
    // Copy Constructor
    Employee(string employee_id, string name, string department, int age, double salary){
        this->employee_id = employee_id;
        this->name = name;
        this->department = department;
        this->age = age;
        this->salary = salary;
    }
    Employee(Employee &obj){ // pass by reference
        cout << "This is a shallow copy constructor" << endl;
        this->employee_id = obj.employee_id;
        this->name = obj.name;
        this->department = obj.department;
        this->age = obj.age;
        this->salary = obj.salary;
    }


private: // access modifier , Private allows only members in class to inherit the properties
    string password;
    double salary;
public: // public can be accessed in main by . notation
    string employee_id;
    string name;
    string department;
    int age;
    
    void getInfo(){
        cout << "ID: " << this->employee_id << endl;
        cout << "Name: " << this->name << endl;
        cout << "Department: " <<department << endl;
        cout << "Age: " <<age << endl;
    }
};

int main()
{
    // creates an object with initialised values by constructor
    Employee e1("2025E1","Dhyey","CS",22,25000.00);
    e1.getInfo();
    // cout << "Salary: "<<e1.get_sal();
    // shallow copy of e1 in e2 which is a done using copy constructor
    Employee e2(e1);
    e2.getInfo();
    return 0;
}
