#include <iostream>
using namespace std;

class Array{
    public:
    int nums[5] = {2, 6, 5, 9, 7};
    int find(int x){
        for (int i = 0; i<5; i++){
            if (x == nums[i])
                return i;
            
            
        }
        return -1;
    }
};

class Math: public Array{
    public: 
    int sum(){
        int s = 0;
        for (int i = 0; i <5; i++)
        s+=nums[i];

        return s;
    }
    int max(){
        int m = 0;
        for (int i = 0; i <5; i++){
            if (m<nums[i]){
                m = nums[i];
            }
        }
        return m;
    }
};

int main(){
    Math p;
    cout<<"The index is: "<<p.find(5)<<endl;
    cout<<"The summation is: "<<p.sum()<<endl;
    cout<<"The max num is: "<<p.max()<<endl;

    return 0;
}