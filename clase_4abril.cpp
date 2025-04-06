#include <iostream>
#include <fstream>
using namespace std;

/*class Base{
    public:
    void print(){
        cout<<"Base class"<<endl;
    }
};

class Derived: public Base{
    public:
    void print(){
        Base::print(); //Pero solo se puede acceder a los dos al mismo tiempo
        cout<<"Derived class"<<endl;
    }
};

int main(){
    Derived d;
    d.print();
    return 0;
}*/

//------------------------------------------------------------------------------

/*class Base{
    protected:
    int x;
    public:
    void set_value(int a){
        x = a;
    }
    void print(){
        cout<<"Base class has "<<x<<" value"<<endl;
    }
};

class Derived: public Base{
    private:
    int y;
    public:
    void set_value(int a, int b){
        Base::set_value(a);
        y = b;
    }
    void print(){
        Base::print();
        cout<<"Derived class has "<<y<<" value"<<endl;
    }
};

int main(){
    Derived dih;
    dih.set_value(6, 7);
    dih.print();
    return 0;
}*/

//-------------------------------------------------------------------------------

/*class Student{
    private:
    int id;
    string name;
    float grade;
    public:
    Student(int i, string n, float g){
        id = i;
        name = n;
        grade = g;
    }
    float average(Student s1, Student s2){ //Aquí toma como parametros los mismos objetos de la class
        return((s1.grade+s2.grade)/2);
    }

};

int main(){
    Student stud1(101, "Mathew", 84.3), stud2(102, "Bernardino Crocodilo", 58.9);
    cout<<"The average is: "<<stud1.average(stud1, stud2);
    

    return 0;
}*/

//-------------------------------------------------------------------------------

/*class Student{
    private:
    int id;
    string name;
    float grade;
    public:
    Student(){} //Constructor vacio
    Student(int i, string n, float g){
        id = i;
        name = n;
        grade = g;
    }
    Student average(Student s1, Student s2){
        Student s3(103, "Carlos", 0);
        s3.grade = (s1.grade+s2.grade)/2;
        return s3;
    }
    void print(){
        cout<<"Student name is: "<<name<<endl;
        cout<<"Student id is: "<<id<<endl;
        cout<<"Student grade is: "<<grade<<endl;
    }
    
};

int main(){
    Student stud1(101, "Maria", 100);
    Student stud2(102, "Jose", 90);
    Student stud3;
    stud3 = stud3.average(stud1, stud2);
    stud3.print();
}*/

//-------------------------------------------------------------------------------

int main(){
    ofstream f("C:/Users/Toshiba/Desktop/newnewfile.csv");
    cout<<"How many lines do you want to insert?: ";
    int lines;
    cin>>lines;
    int id;
    string name;
    int grade;

    for (int i = 0; i<lines; i++){
        cout<<"Enter the ID for line "<<i+1<<": "<<endl;
        cin>>id;
        cout<<"Enter the name for line "<<i+1<<": "<<endl;
        cin>>name;
        cout<<"Enter the grade for line "<<i+1<<": "<<endl;
        cin>>grade;
    }

    f<<id<<", "<<name<<", "<<grade<<endl;
    f.close();
    
    return 0;
}