#include <iostream>
using namespace std;

class Employee{
    private:
    string name;
    int id;
    string department;
    int HoursPerWeek;
    float SalaryPerHour;

    public:
    Employee(string n, int iD, string d, int hpw, float sph){
        name = n;
        id = iD;
        department = d;
        HoursPerWeek = hpw;
        SalaryPerHour = sph;
    }

    float calculate_salary_per_month(){
         float salary_per_week = (SalaryPerHour * HoursPerWeek);
         float salary_per_month = salary_per_week * 4;
        return (salary_per_month);
    }

    void print(){
        cout<<"The employee's name is: "<<name<<endl;
        cout<<"The employee's id is: "<<id<<endl;
        cout<<"The employee's department is: "<<department<<endl;
        cout<<"The employee's work hours per week are: "<<HoursPerWeek<<endl;
        cout<<"The employee's salary per hour is: "<<SalaryPerHour<<endl;
        float salary_per_month = calculate_salary_per_month();
        cout<<"The employee's salary per month is: "<<salary_per_month;

    }




};

int main(){
    cout<<"Enter the first employee's name: "<<endl;
    string n1;
    cin>>n1;
    cout<<"Enter the first employee's id: "<<endl;
    int id1;
    cin>>id1;
    cout<<"Enter the first employee's department: "<<endl;
    string department1;
    cin>>department1;
    cout<<"Enter the first employee's work hours per week: "<<endl;
    int hoursperweek1;
    cin>>hoursperweek1;
    cout<<"Enter the first employee's salary per hour: "<<endl;
    float salaryperhour1;
    cin>>salaryperhour1;

    Employee emp1(n1, id1, department1, hoursperweek1, salaryperhour1);

    cout<<"Enter the second employee's name: "<<endl;
    string n2;
    cin>>n2;
    cout<<"Enter the second employee's id: "<<endl;
    int id2;
    cin>>id2;
    cout<<"Enter the second employee's department: "<<endl;
    string department2;
    cin>>department2;
    cout<<"Enter the second employee's work hours per week: "<<endl;
    int hoursperweek2;
    cin>>hoursperweek2;
    cout<<"Enter the second employee's salary per hour: "<<endl;
    float salaryperhour2;
    cin>>salaryperhour2;

    Employee emp2(n2, id2, department2, hoursperweek2, salaryperhour2);

    float salary_employee1 = emp1.calculate_salary_per_month();
    float salary_employee2 = emp2.calculate_salary_per_month();

    if (salary_employee1 > salary_employee2){
        cout<<"The employee with the biggest salary is employee 1"<<endl;
        emp1.print();
    }
    else if (salary_employee1<salary_employee2){
        cout<<"The employee with the biggest salary is employee 2"<<endl;
        emp2.print();
    }
    else{
        cout<<"Invalid";
    }
    
    return 0;
}