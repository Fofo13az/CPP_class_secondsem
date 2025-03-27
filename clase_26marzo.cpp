#include <iostream>
using namespace std;

class Employee {
    private:
        string name;
        float salary;
    public:
    Employee(string n, float s){
        name = n;
        salary = s;
    }
    Employee(){
        cout<<"Type your name: ";
        cin>>name;
        cout<<"Type your salary: ";
        cin>>salary;
    }
    
    void print(){
        cout<<"Employee's name: "<<name<<endl;
        cout<<"Employee's salary: "<<salary<<endl;
    }
};

int main(){
    Employee e;
    Employee p("Pedro", 1000);
    e.print();
    p.print();
    
    return 0;
}
