//  main.cpp
//  Created by Ali Behfarnia on 09/17/24.

// [3] OOP: Abstraction

// Key features: 
// 1) Hides Implementation Details 2) Promoting reusability, 3) Used by derived classes

// Abstract class: A class that cannot be instantiated on its own
// They can contain abstract methods, which are declared but have no implementation.
// Abstract classes benefits:
// 1. Prevents instantiation of the class itself
// 2. Requires children to use inherited abstract methods


#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class AbstEmp {
    virtual void ask_promotion() = 0;
    virtual void ask_alphabet() = 0;
};


class Employee:AbstEmp {
private:
    string Name;
    string Company;
    int Age;
        
public:
//    string Name;
//    string Company;
//    int Age;
    
    Employee(string nm, string com, int agee) {
        Name = nm;
        Company = com;
        Age = agee;
    }
        
    void introduce() {
        cout << "Name = " << Name << endl;
        cout << "Company = " << Company << endl;
        cout << "Email = " << Name + "@" + Company + ".com" << endl;
        cout << "Age = " << Age << endl;
    }
    
    // Name: Setter and Getter
    void set_name(string nm){//setter
        Name = nm;
    }
    string get_name(){//getter
        return Name;
    }
    
    // Company: Setter and Getter
    void set_company(string comp){//setter
        Company = comp;
    }
    string get_company(){//getter
        return Company;
    }
    
    void set_age(int agee){//setter
        if(agee>=18)
        Age = agee;
    }
    int get_age(){//getter
        return Age;
    }
    
    void ask_promotion() {
        if (Age>25)
            cout << Name << " Got Promoted!" << endl;
        else
            cout << "Hey " << Name << ", you're gogoli, so no promotion for you! " << endl;
    }
    
    void ask_alphabet() {
        if (Name == "Ali")
            cout << "Yes, his name is " << Name + '.'<< endl;
        else
            cout << "No, his name is NOT " << Name + '.' <<endl;
                    
    }
};

int main() {
    
//    int number;
    
    Employee employee1 =  Employee("Ali", "Southern", 88);
    employee1.introduce();
    cout << "+++++++++++++++++++++" <<endl;
    
    Employee employee2 =  Employee("Jeff", "Oklahoma", 20);
    employee2.introduce();
    cout << "+++++++++++++++++++++" <<endl;
    
    employee1.ask_promotion();
    employee1.ask_alphabet();
    employee2.ask_promotion();
    
    
    return 0;
}
