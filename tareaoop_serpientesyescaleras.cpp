#include <iostream>
using namespace std;

class MyGame {
    private:
    char tiles[30] = {'N','L','N','N','N', 'N','N','S','N','N', 'N', 'L', 'N','N','N', 'N','N','N','S','N', 'N','N','N', 'N', 'L', 'N', 'N', 'N', 'S','N'}; //board tiles

    int dice(){ //dice function
        srand(time(0));
        int x;
        x = rand()%6+1;
        return x;
    }
    
    void for_loop(int start, int limit){ //for loop used to print out the board
        for (int i = start; i+1<=limit; i++){
            cout<<tiles[i]<<" ";
        }
        cout<<""<<endl;
    }

    public:
    void print_board(){ //print the board function
        cout<<"--START--"<<endl;
        for_loop(0, 6);
        for_loop(6, 12);
        for_loop(12, 18);
        for_loop(18, 24);
        for_loop(24, 30);
        cout<<"--END--"<<endl;
        
    }

    void intro(){ //intro to the game
        cout<<"Welcome to Snakes and Ladders!!!"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"This is the board: "<<endl;
    }

    int turn_number = 1;
    void turn_function(){
        cout<<turn_number<<" ";
        turn_number += 1;
    }

    int current_player = 0;
    int current_tileN = 1;
    char current_tileT = tiles[0];
    int new_tileN = 1;
    char new_tileT = tiles[0];

    void game_overSwitch(){
        if(current_tileN >= 30){
            cout<<"--GAME OVER--"<<endl;
            cout<<"Player "<<current_player<<" has reached the final tile!!"<<endl;
            cout<<"Player "<<current_player<<" wins the game!!"<<endl;
            cout<<"Thanks for playing!"<<endl;
            exit(0);
        }
    }

    void game(){

        int dice_number = dice();
        new_tileN = current_tileN + dice_number;
        new_tileT = tiles[new_tileN - 1];
        if (new_tileT == 'S'){
            new_tileN -= 3;

        }
        else if (new_tileT == 'L'){
            new_tileN += 3;
        }
        else;

        if (new_tileN >= 30){
            new_tileN = 30;
        }

        cout<<current_player<<" "<<current_tileN<<" "<<dice_number<<" "<<new_tileT<<" "<<new_tileN<<endl;

        current_tileN = new_tileN;
        current_tileT = new_tileT;
        
    }

};

int main(){
    MyGame g;
    MyGame player1;
    MyGame player2;

    g.intro();
    g.print_board();
    cout<<"Ready to start?..."<<endl;

    while (true){
    char selection;
    cout<<"Type 'S' to start the game or 'E' to exit the game: ";
    cin>>selection;
    if (selection == 'S'){
        cout<<"---GAME START---"<<endl;
        cout<<"REMEMBER: NORMAL TILES (N) DON'T DO ANYTHING | LADDER TILES (L) MOVE YOU 3 TILES FORWARDS | SNAKE TILES (S) MOVE YOU 3 TILES BACKWARDS"<<endl;
        cout<<"REMEMBER: TURN NUMBER | PLAYER NUMBER | CURRENT TILE | NUMBER AFTER DICE ROLL | TILE TYPE AFTER DICE | NEW TILE"<<endl;
        cout<<"Type 'C' to continue to next turn, or 'E' to end the game. Enjoy!"<<endl;
        while (true){
            while (true){
                char input;
                cin>>input;
    
                if (input == 'C'){
                    //Aquí va a ir el object de player 1
                    g.turn_function();
                    player1.current_player = 1;
                    player1.game();
                    player1.game_overSwitch();
                    break;
                }
                else if (input == 'E'){
                    cout<<"Thanks for playing!";
                    exit(0);
                }
                else{
                    cout<<"Invalid option, try again"<<endl;
                    continue;
                }
            }
            while (true){
                char input;
                cin>>input;
    
                if (input == 'C'){
                    //Aquí va a ir el object de player 2
                    g.turn_function();
                    player2.current_player = 2;
                    player2.game();
                    player2.game_overSwitch();
                    break;
                }
                else if (input == 'E'){
                    cout<<"Thanks for playing!";
                    exit(0);
                }
                else{
                    cout<<"Invalid option, try again"<<endl;
                    continue;
                }
            }

            continue;
        }
    }
    else if (selection == 'E'){
        cout<<"Exiting game...";
        exit(0);
    }
    else {
        cout<<"Invalid option selected. Try again"<<endl;
        continue;
    }
    }

    return 0;
}
