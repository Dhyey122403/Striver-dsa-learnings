// A special method of class which has same name as the class and is called when the class is created. Called only once at object creation, if we do not define it explicity, the compiler automatically defines a constructor which is called on object creation.

// Types of constructors
// 1. non parameterised -> does not contain any parameters and can be used to set some values predefined or print some message
// 2. parameterised -> can be used to set values when creating an object and a class can have multiple constructors based on the parameters, so when we create the class and pass some parameters based on it the related constructor is called.
// 3. copy constructor -> creates a shallow copy of created object
#include <bits/stdc++.h>
using namespace std;

// this is a class Employee and it has some private and public members
class Employee{
public:
    // non parameterised constructor
    // Employee(){
    //     cout << "I am a non parameterised constructor" << endl;
    // }
    // parameterised constructor (means you can pass some parameters when creating the objects)
    Employee(string employee_id, string name, string department, int age, int salary){
        // this->employee_id = value || means employee_id of this class = some value
        this->employee_id = employee_id;
        this->name = name;
        this->department = department;
        this->age = age;
        this->salary = salary;
    }


private: // access modifier , Private allows only members in class to inherit the properties
    string password;
    double salary;
public: // public can be accessed in main by . notation
    string employee_id;
    string name;
    string department;
    int age;
    
    // void set_sal(int salary){
    //     this->salary = salary;
    // }
    // int get_sal(){
    //     return this->salary;
    // }
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
    Employee e1("2025E1","Dhyey","CS",22,20000); // creates and Employee e1 (object) Object is an instance of class.
    
    // e1.employee_id = "2025E1";
    // e1.name = "Dhyey";
    // e1.department = "CS";
    // e1.age = 22;
    // e1.set_sal(20000);
    e1.getInfo();
    // cout << "Salary: "<<e1.get_sal();
    // shallow copy of e1 in e2 which is a done using copy constructor
    Employee e2(e1);
    e2.getInfo();
    return 0;
}
