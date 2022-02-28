#include <iostream>
#include <iomanip>
#include <cstddef>
using namespace std;

class Gameboard
{
    char gameSpace[4][4];
    int flag;
public:
    Gameboard(); //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
    char getGameSpace(int row,int column);
    int fourInRow(); //four 'x's in any row 'wins'
    void printInfo(); //print the game board in a 4x4 matrix
};

//TODO: complete the class definition
Gameboard::Gameboard(){
    for(size_t i = 0; i<4; i++){
        for(size_t j = 0; j<4; j++){
            gameSpace[i][j] = '-';
        }
    }
    flag = 1;
}
void Gameboard::setGameSpace(int row,int column, char value){
    gameSpace[row][column] = value;
}

char Gameboard::getGameSpace(int row,int column){
    return gameSpace[row][column];
}

int Gameboard::fourInRow(){
    for(size_t i = 0; i<4; i++){
        for(size_t j = 0; j<4; j++){
            if (gameSpace[i][j] != 'x'){
                break;
                flag = 0;
            }
        }
    }
    return flag;
}
void Gameboard::printInfo(){
    for(size_t i = 0; i<4; i++){
        for(size_t j = 0; j<4; j++){
            cout<<gameSpace[i][j]<<" ";
        }
        cout<<"\n";
    }
}


int main()
{
    Gameboard game1;
    game1.setGameSpace(0,0,'x');
    game1.setGameSpace(0,1,'x');
    game1.setGameSpace(0,2,'x');
    game1.setGameSpace(0,3,'y');
    game1.setGameSpace(1,0,'x');
    game1.setGameSpace(2,0,'x');
    game1.setGameSpace(3,0,'x');
    game1.setGameSpace(3,1,'x');
    game1.setGameSpace(3,2,'x');
    game1.setGameSpace(3,3,'x');
    
    if(game1.fourInRow() == 1)
    {
        cout<<"X got four in a row! \n\n";
    }
    else
    {
        cout<<"X did not get four in a row :(\n\n";
    }
    game1.printInfo();
    return 0;
}
