#include <iostream>
using namespace std;

class Hotel{
    protected:
    int room_num;
    string key_password;
    float price_per_night;
    public:
    Hotel(int rn, string kp, float ppn){
        room_num = rn;
        key_password = kp;
        price_per_night = ppn;
    }

};

class Client: private Hotel{
    protected: 
    string client_name;
    int client_id;
    int nights;
    public:
    Client(string cn, int ci, int n, int rn, string kp, float ppn): Hotel(rn, kp, ppn){
        client_name = cn;
        client_id = ci;
        nights = n;

    }

    float stay_price(){
        return (nights * price_per_night);
    }

    void info_display(){
        cout<<"Client: "<<client_name<<endl;
        cout<<"Client's ID: "<<client_id<<endl;
        cout<<"Room: "<<room_num<<endl;
        cout<<"Key password: "<<key_password<<endl;
        cout<<"Number of nights: "<<nights<<endl;
        cout<<"Total price for stay: "<<stay_price()<<endl;
        cout<<"Enjoy your stay!!"<<endl;
    }

};

int main(){
    string clientName;
    int clientID;
    int nightsNumber;

    cout<<"Enter client's name: ";
    cin>>clientName;
    cout<<"Enter client's id: ";
    cin>>clientID;
    cout<<"Enter number of nights: ";
    cin>>nightsNumber;

    Client c(clientName, clientID, nightsNumber, 1001, "Room1001PASSWORD", 5000);
    c.stay_price();
    c.info_display();


    return 0;
}