#include <iostream>
using namespace std;


/*class Base{
    public:
    void print(){
        cout<<"Base class"<<endl;
    }

};

class Derived1: public Base{
    public:
    void show(){
        cout<<"Derived 1"<<endl;
    }

};

class Derived2: public Derived1{
    public:
    void display(){
        cout<<"Derived class 2"<<endl;
    }

};

int main(){
    Derived2 d;
    d.print();
    d.show();
    d.display();

    return 0;
}*/

//------------------------------------------------------------------

/*class Mammal{
    public:
    void print(){
        cout<<"Mammals can give direct birth"<<endl;
    }

};

class WingedMammal{
    public:
    void show(){
        cout<<"Winged animals can fly"<<endl;
    }

};

class Bat: public Mammal, public WingedMammal{


};

int main(){
    Bat b;
    b.print();
    b.show();

    return 0;
}*/

//-----------------------------------------------------------

/*class Base{
    public:
    Base(){ //constructor sin parametros
        cout<<"Base class"<<endl;
    }

};

class Derived: public Base{
    public:
    Derived(){ //constructor sin parametros
        cout<<"Derived class"<<endl;
    }

};

int main(){
    Derived d; //este object, como está inheritance, usa los dos constructors en un solo object

    return 0;
}*/

//-------------------------------------------------------------------

/*class Base{
    protected:
    int x;
    public:
    Base(int a){
        x = a;
    }
    void print(){
        cout<<"Base class"<<endl;
        cout<<"X: "<<x<<endl;
    }

};

class Derived: public Base{
    public:
    using Base::Base; //:: se llama scope resolution operator y llama al constructor de Base. Se usa cuando el constructor del base tiene parametros
    void show(){
        cout<<"Derived class"<<endl;
    }

};

int main(){
    Derived d(10);
    d.print();
    d.show();


    return 0;
}*/

//--------------------------------------------------

/*class Base{
    protected:
    float salary;
    int id;
    public:
    Base(float s, int i){
        salary = s;
        id = i;
    }

};

class Derived: public Base{
    private:
    string name;
    public:
    Derived(string n, float s, float i): Base(s, i){
        name = n;

    }
    void print(){
        cout<<"Employee name: "<<name<<endl;
        cout<<"Employee id: "<<id<<endl;
        cout<<"Employee salary: "<<salary<<endl;
    }

};

int main(){
    Derived d("Carlos", 1000, 999);
    d.print();

    return 0;
}*/

//--------------------------------------------------

class Base{
    private:
    string password;
    protected:
    string user_name;
    public:
    Base(string p, string u){
        password = p;
        user_name = u;
    }

};

class Derived: protected Base{
    public:
    string Email;
    public:
    Derived(string e, string p, string u): Base(p, u){
        Email = e;
    }
    void print(){
        cout<<"User name is: "<<user_name<<endl;
        cout<<"Email is: "<<Email<<endl;
    }

};

int main(){
    Derived d("mark@gmail.com", "123456", "MarkDaGoat");
    d.print();

    return 0;
}

