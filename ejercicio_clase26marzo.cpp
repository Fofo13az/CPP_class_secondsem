#include <iostream>
using namespace std;

const double PI = 3.14159265358979323846;
class Shape{
    private:
    float var;
    public:
    Shape(float v){
        var = v;
    }
    double circle_area(){
        return PI*var*var;
    }
    double circle_perimeter(){
        return 2*PI*var;
    }
    float square_area(){
        return var*var;
    }
    float square_perimeter(){
        return 4*var;
    }
};

int main(){

    while (true){
        cout<<"Choose option from the following menu: "<<endl;
        cout<<"1. Circle\n2. Square\n3. Exit"<<endl;
        cout<<"Type the option number: ";
        int op;
        cin>>op;
        switch (op){
            case 1:
            {
                cout<<"Enter the radius: ";
                float r;
                cin>>r;
                Shape c(r);
                cout<<"The circle area is: "<<c.circle_area()<<endl;
                cout<<"The circle perimeter is: "<<c.circle_perimeter()<<endl;
                break;
            }
            case 2:
            {
                cout<<"Enter the side: ";
                float s;
                cin>>s;
                Shape sq(s);
                cout<<"The square area is: "<<sq.square_area()<<endl;
                cout<<"The square perimeter is: "<<sq.square_perimeter()<<endl;
                break;
            }
            case 3:
            {
                exit(0);
            }

            default:
            printf("Invalid option");
        }
    }


    return(0);
}