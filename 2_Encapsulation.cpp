//  main.cpp
//  [0] OOP Classes and objects
//
//  Created by Ali Behfarnia on 09/16/24.

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class Employee {
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
        cout << "Email = " << Name + "@" + Company + ".edu" << endl;
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
    
      // Age: Setter and Getter
    void set_age(int agee){//setter
        if(agee>=18)
        Age = agee;
    }
    int get_age(){//getter
        return Age;
    }
    
};

int main() {
    
//    int number;
    
    Employee employee1 =  Employee("Ali", "tennessee", 100);
    employee1.introduce();
    cout << "+++++++++++++++++++++" <<endl;
    
    Employee employee2 =  Employee("Jeff", "oklahoma", 50);
    employee2.introduce();
    cout << "+++++++++++++++++++++" <<endl;
    
    employee1.set_age(18);
    cout << employee1.get_name() << " is " << employee1.get_age() <<" years old."<<endl;

    employee1.set_company("Gishaa Lovers");
    cout << employee1.get_name() << " is work at " << employee1.get_company() <<" !"<<endl;
    
    return 0;
}
