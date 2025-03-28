#include <iostream>
using namespace std;

/*class Mother{
    private:
    string mother_name;
    public:
    void set_data(string m){
        mother_name = m;
    }
    void show(){
        cout<<"Mother name is: "<<mother_name<<endl;

    }


};

class Daughter: public Mother{
    public:
    string daughter_name;

    void print(){
        cout<<"Daughter name is: "<<daughter_name<<endl;
    }    

};

int main(){
    Daughter d;
    d.daughter_name = "Maria";
    d.set_data("Mama");
    d.show();
    d.print();

    return 0;
}*/

class Employee{
    private:
    int id;
    protected:
    float salary;
    public:
    string name;

    void set(int i){
        id = i;
    }

    void show(){
        cout<<"The employee's id is: "<<id<<endl;
    }
};

class Programmer: public Employee{
    public:
    void set_value(string n, float s){
        name = n;
        salary = s;
    }
    void print(){
        cout<<"The employee's name is: "<<name<<endl;
        cout<<"The employee's salary is: "<<salary<<endl;
    }

};

int main(){
    Programmer p;
    p.set(123);
    p.show();
    p.set_value("Adolfo", 100000);
    p.print();

    
    return 0;
}

