//
//  main.cpp
//  [0] OOP Classes and objects
//
//  Created by Ali Behfarnia on 09/16/24.
//

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class Employee {
public:
    string Name;
    string Company;
    int Age;
    
    Employee(string nm, string com, int agee) {
        Name = nm;
        Company = com;
        Age = agee;
    }
        
    void introduce(){
        cout << "Name = " << Name << endl;
        cout << "Company = " << Company << endl;
        cout << "Age = " << Age << endl;
    }
    
};


int main() {
    
    int number;
    
    Employee employee1 =  Employee("Ali", "Tennessee", 120);
    employee1.introduce();
    cout << "+++++++++++++++++++++" <<endl;
    
    Employee employee2 =  Employee("Jeff", "Pepsi", 40);
    employee2.introduce();
    cout << "+++++++++++++++++++++" <<endl;
    
    
    return 0;
}
