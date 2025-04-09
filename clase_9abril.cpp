#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

/*class Student{
    private:
    int id;
    string name;
    int grade1;
    int grade2;

    public:
    Student(){};
    Student(int i, string n, int g1, int g2){
        id = i;
        name = n;
        grade1 = g1;
        grade2 = g2;
    }

    void design(){
        cout<<"Nice design"<<endl;        
    }

    void print(){
        cout<<setw(3)<<left<<id<<setw(12)<<left<<name<<setw(5)<<left<<grade1<<setw(5)<<left<<grade2<<endl;
    }


};

int main(){
    Student stud[9];
    string line;
    string value[4];
    int j = 0;
    int i;
    ifstream f("C:/Users/Toshiba/Desktop/file.csv");
    while (getline(f, line)){
        stringstream ss(line);
        i = 0;
        while (getline(ss, value[i], ',')){
            i++;
        }
        stud[j] = Student(stoi(value[0]), value[1], stoi(value[2]), stoi(value[3]));
        j++;

    }
    stud[0].design();

    for (int i=0; i<9; i++){
        stud[i].print();
    }

    
}*/

int main(){
    int x;
    x = 5;
    cout<<"X's value: "<<x<<endl;
    cout<<"Memory address of x is: "<<&x<<endl;
    int *a = &x;

    cout<<"X value in pointer: "<<*a<<endl;
    cout<<"X memory address in pointer: "<<a<<endl;

    int nums[5] = {5, 10, 15, 20, 25};
    cout<<nums<<endl;
    cout<<nums[0]<<endl;
    cout<<nums[1]<<endl;
    int *ptr = nums;
    cout<<"Nums address: "<<nums<<endl;
    cout<<"Nums address with pointer: "<<ptr<<endl;
    for (int i = 0; i<5; i++)
    cout<<ptr[i]<<endl;


}