#include <iostream>
using namespace std;

/*class Shape{
    protected:
    int height;
    int base;
    public:
    void area(){
        cout<<"Enter the height"<<endl;
        cin>>height;
        cout<<"Enter the base"<<endl;
        cin>>base;
    }
};

class Triangle:public Shape{
    public:
    void area(){
        cout<<"The area for the triangle is: "<<height*base/2<<endl;
    }
};

class Rectangle:public Shape{
    public:
    void area(){
        cout<<"The area for the square is: "<<height*base<<endl;
    }
};

int main(){
    Triangle t;
    Shape *ptr = &t;
    ptr->area();
    t.area();
    Rectangle r;
    Shape*ptr2=&r;
    ptr2->area();
    r.area();
    
    return 0;
}*/

/*class Base{
    protected:
    int x;

    public:
    Base(int a){
        x = a;
    }
    virtual void print(){
        cout<<"Base class has "<<x<<" value"<<endl;
    }
};

class Derived: public Base{
    private:
    int y;

    public: 
    Derived(int a, int b): Base(a){
        y = b;
    }
    void print(){
        cout<<"Derived class has: "<<y<<" value"<<endl;
    }

};

int main(){
    Derived d(5, 10);
    Base *ptr = &d;
    ptr->print();
    d.print();
}*/

class Parents{
    protected: 
    string mother_name;
    string fater_name;

    public:
    void set_data(){
        cout<<"Enter the mother name: ";
        cin>>mother_name;
        cout<<"Enter the father name: ";
        cin>>fater_name;

    }

    virtual void print() = 0; //Pure virtual function, por lo que ahora parents es una abstract class
};

class Kids: public Parents{
    private:
    string kid_name;

    public:
    void set_data(){
        cout<<"Enter the kid name: ";
        cin>>kid_name;
    }

    void print(){
        cout<<"The mother name is: "<<mother_name<<endl;
        cout<<"The father name is: "<<fater_name<<endl;
        cout<<"The kid name is: "<<kid_name<<endl;
    }
};

int main(){
    Kids k;
    Parents *ptr = &k;
    ptr->set_data();
    k.set_data();
    k.print();

    return 0;
}