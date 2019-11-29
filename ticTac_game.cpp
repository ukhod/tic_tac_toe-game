//Tick tack
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <windows.h>
using namespace std;
const int col = 3;
const int row = 3;


void displayGrid(string [][col]);
void playerInput(string&);
void enterGrid(string [][col],int&,string);
int checkWin(string[][col],string&);
void checkAvailableMoves(int);


int main(){

    //Player p;
    string player = "";
    int count = 0;
    string playInput;
    bool valid = true;
    string board[][col] = {{"A1","A2","A3"},
                            {"B1","B2","B3"},
                            {"C1","C2","C3"}};

    cout << setw(19) << "Tic Tac Toe"<< endl;
    cout << setw(20)   << "-----------\n" << endl;
    //cout << "Player 1 enter name: ";
    //cin >> name_player1;
    //cout << "Player 2 enter name: ";
    //cin >> name_player2;
    cout << "First Player start:" << endl;
    do{

        cout << "O - Player 1 | X - Player 2" << endl;

        displayGrid(board);
        playerInput(playInput);
        enterGrid(board,count,playInput);
        if(checkWin(board,player) == 1){
            valid = false;
            system("CLS");
            if(player == "X"){
                cout << "O - Player 1 | X - Player 2" << endl;
                cout << "Player 2 won" << endl;
            }else{
                cout << "O - Player 1 | X - Player 2" << endl;
                cout << "Player 1 won" << endl;
            }
            displayGrid(board);
            for(int i = 0; i < 50;i++){
                cout <<"!" ;
                Sleep(100);

            }
            cout << endl;
            cout << "Thank you for playing." << endl;
        }
        else{
            checkAvailableMoves(count);
            if(count == 9)valid = false;
        }
        cout << endl << endl;
        if(!count == 9 || !valid == false)
            system("CLS");

    }while(valid);

    return 0;
}

void displayGrid(string board[][col]){


    for(int i = 0;i < row;i++){
        cout << "--------------------------" << endl;
        for(int j = 0;j < col;j++){
           cout << setw(4) <<board[i][j] << setw(5) << " | " ;
        }
        cout << endl;
        //cout << endl;
    }
    cout << "--------------------------" << endl;
}
void playerInput(string& pInput){

    char temp;
    cout << "Please enter position.eq:A1 :";
    cin >> pInput;
    //if(islower(pInput[0]))

}
void enterGrid(string board[][col],int& count,string pInput){

    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
           if(board[i][j] == pInput && count%2 == 1  ){
                board[i][j] = "X";
                //cout << "Player 1 turn" << endl;
                //Sleep(1000);
                count++;
                break;
           }else if(board[i][j] == pInput && count%2 == 0 ){
               board[i][j] = "O";
               //cout << "Player 2 turn" << endl;
               //Sleep(1000);
               count++;
               break;
           }
        }
    }
}
int checkWin(string board[][col],string &playerWinner){

    string x = "X";
    string o = "O";


            //horizontal
            if((x == board[0][0]) && (x == board[1][0]) && (x == board[2][0])){
                    cout << "Player,You won!!!." << endl;
                    playerWinner = 'X';
                    return 1;
            }else if((o == board[0][0]) && (o == board[1][0]) && (o == board[2][0])){
                    cout << "Player,You won!!!." << endl;
                    playerWinner = 'O';
                    return 1;
            }else if((x == board[0][1]) && (x == board[1][1]) && (x == board[2][1])){
                    cout << "Player,You won!!!." << endl;
                    playerWinner = 'X';
                    return 1;
            }else if((o == board[0][1]) && (o == board[1][1]) && (o == board[2][1])){
                    cout << "Player,You won!!!." << endl;
                    playerWinner = 'O';
                    return 1;
            }else if((x == board[0][2]) && (x == board[1][2]) && (x == board[2][2])){
                    cout << "Player,You won!!!." << endl;
                    playerWinner = 'X';
                    return 1;
            }else if((o == board[0][2]) && (o == board[1][2]) && (o == board[2][2])){
                    cout << "Player,You won!!!." << endl;
                    playerWinner = 'O';
                    return 1;
            }else if((x == board[0][0]) && (x == board[0][1]) && (x == board[0][2])){
                    cout << "Player,You won!!!." << endl;
                    playerWinner = 'O';
                    return 1;
            }else if((o == board[0][0]) && (o == board[0][1]) && (o == board[0][2])){
                    cout << "Player,You won!!!." << endl;
                    playerWinner = 'O';
                    return 1;
            }else if((x == board[1][0]) && (x == board[1][1]) && (x == board[1][2])){
                    cout << "Player,You won!!!." << endl;
                    playerWinner = 'X';
                    return 1;
            }else if((o == board[1][0]) && (o == board[1][1]) && (o == board[1][2])){
                    cout << "Player,You won!!!." << endl;
                    playerWinner = 'O';
                    return 1;
            }else if((x == board[2][0]) && (x == board[2][1]) && (x == board[2][2])){
                    cout << "Player,You won!!!." << endl;
                    playerWinner = 'X';
                    return 1;
            }else if((o == board[2][0]) && (o == board[2][1]) && (o == board[2][2])){
                    cout << "Player,You won!!!." << endl;
                    playerWinner = 'O';
                    return 1;
            }else if((x == board[0][0]) && (x == board[1][1]) && (x == board[2][2])){
                    cout << "Player,You won!!!." << endl;
                    playerWinner = 'X';
                    return 1;
            }else if((o == board[0][0]) && (o == board[1][1]) && (o == board[2][2])){
                    cout << "Player,You won!!!." << endl;
                    playerWinner = 'O';
                    return 1;
            }if((x == board[2][0]) && (x == board[1][1]) && (x == board[0][2])){
                    cout << "Player,You won!!!." << endl;
                    playerWinner = 'X';
                    return 1;
            }else if((o == board[2][0]) && (o == board[1][1]) && (o == board[0][2])){
                    cout << "Player,You won!!!." << endl;
                    playerWinner = 'O';
                    return 1;
            }else return 0;
}
void checkAvailableMoves(int count){

    if(count == 9){
        cout << "Draw Game!!!." << endl;
    }
}

