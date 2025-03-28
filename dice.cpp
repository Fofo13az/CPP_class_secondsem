#include <iostream>
using namespace std;

int main(){
    srand(time(0));
    int x;
    x = rand()%6+1;
    cout<<x<<endl;


    return 0;
}