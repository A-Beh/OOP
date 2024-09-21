
//  Created by Ali Behfarnia on 09/24.
//  [4] Polymorphism

// Polymorphism: means to "have many forms"
//               objects can be identified by more than one type
//               Ex. a dog is also


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
    
    // Age: Setter and Getter
    void set_age(int agee){//setter
        if(agee>=18)
        Age = agee;
    }
    int get_age(){//getter
        return Age;
    }
    
    // Function: Promotion
    void ask_promotion() {
        if (Age>30)
            cout << Name << " Got Promoted!" << endl;
        else
            cout << Name << ", Sorry, no promotion for you! " << endl;
    }
    
    // Function: Boss Name
    void ask_alphabet() {
        if (Name == "Ali")
            cout << "Yes, his name is " << Name + '.'<< endl;
        else
            cout << "No, his name is NOT " << Name + '.' <<endl;
    }
    
    // Function:
    virtual void work(){ // when we put virtual to this, it executes the most derived version 
        cout << Name << " is checking email and performing tasks. " <<endl;
    }
};


class Developer: public Employee{ //note: if we don't put public in this line, we cannot use other functions like ask_promotion
public:
    string fav_prog;
    Developer(string nm, string com, int agwwee, string prog)
    : Employee(nm, com, agwwee){
        fav_prog = prog;
    }
    
    // Func: Doing bug fix
    void fix_bug(){
        cout << get_name() << " fixed bugs using " << fav_prog +'.' << endl;
    }
    
    //Func: Work Tasks
    void work(){
        cout << get_name() << " is writing " << fav_prog +'.' <<endl;
    }
    
    
};


// Class: Teacher
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
    
    void work(){
        cout << get_name() << " is teaching " << subject+'.' <<endl;
    }
};

int main() {/*
             The most common use of polymorphism is when a parent class reference is used
             to refer to a child class object
             */
    
    Developer dev1 = Developer("Akbar", "Amazon", 40, "C++");
    Teacher tech1 = Teacher("AB", "WSU", 38, "VHDL");
    cout<<"Work function using the objects:"<<endl;
    dev1.work();
    tech1.work();

    cout<< "   "<<endl;
    
    cout<<"Work function using the pointer of the objects:"<<endl;
    Employee* e1 = &dev1;
    Employee* e2 = &tech1;
    
    e1 -> work(); // Reminder: The symbol -> used when we want to access 
    e2 -> work();//            members using a pointer. 
    cout<< "   "<<endl;
//    dev1.fix_bug();
//    dev1.ask_promotion(); //note: if we don't put public in this line, we cannot use other functions like ask_promotion
//    tech1.preprare_lesson();
//    tech1.ask_promotion();
    
    return 0;
}
