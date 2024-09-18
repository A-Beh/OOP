//  main.cpp
//  Created by Ali Behfarnia on 09/16/24.

// [4] OOP: Inheritance
// It allows a new class to derive methods and attributes 
// from an existing class.
// Idea: code reusability and  hierarchical relationships


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
    
    Employee(string name, string company, int agee) {
        Name = name;
        Company = company;
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
        if (Age>30 && Age< 80)
            cout << Name << " Got Promoted!" << endl;
        else
            cout << Name << ", Sorry, no promotion for you! " << endl;
    }
    
    void ask_alphabet() {
        if (Name == "Ali")
            cout << "Yes, his name is " << Name + '.'<< endl;
        else
            cout << "No, his name is NOT " << Name + '.' <<endl;
                    
    }
};


class Developer: public Employee{ //note: if we don't put public in this line, we cannot use other functions like ask_promotion
public:
    string fav_prog;
    Developer(string nm, string com, int agwwee, string prog)
    : Employee(nm, com, agwwee){
        fav_prog = prog;
    }
    
    void fix_bug(){
        cout << get_name() << " fixed bugs using " << fav_prog +'.' << endl;
    }
};


class Teacher: public Employee {
public:
    string subject;
    Teacher(string nm, string com, int agee, string sub)
    : Employee(nm, com, agee){
        subject = sub;
    }
    
    void preprare_lesson(){
        cout << get_name() << " is preparing " << subject << " lessons." << endl;
    }
    
};


int main() {
    
    Developer dev1 = Developer("Akbar", "Amazon", 35, "C++");
    dev1.fix_bug();
    dev1.ask_promotion(); //note: if we don't put public in this line, we cannot use other functions like ask_promotion
    
    cout << "+++" <<endl;
    
    Teacher tech1 = Teacher("AB", "WSU", 88, "VHDL");
    tech1.preprare_lesson();
    tech1.ask_promotion();
    
    return 0;
}
