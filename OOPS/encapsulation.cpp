// Encapsutaion is wrapping up data and methods in a class. So whatever we have done in this code is encapsulation, we have wrapped up essential informations of an employee in a class named Employee and in main function we are accessing it by using . notations for public members and for private members we need to use get and set methods. By default if we do not declare the access modifier, it is considered as private but if we want to set them as public we need to use the Keyword Public and inside a class members of private class can be accessed by memebers of same class thus to set or get the value of private members we create get and set methods. 
// Encapsulation helps in security of data by hiding data and methods.
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
