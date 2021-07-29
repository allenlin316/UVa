#include <iostream>
#include <cmath>
#include <utility>
using namespace std;

class Game{
    private:
        int queenPosX;
        int queenPosY;
        int kingPosX;
        int kingPosY;
        int queenMoveX;
        int queenMoveY;
        pair<int,int> arr[64];
    public:
        Game(int,int,int);
        bool illegalState();
        bool illegalMove();
        bool moveNotAllowed();
        bool Stop();
};
Game::Game(int kingPos, int queenPos, int queenMove){
    int num=0;
    for(int i=1; i<=8; i++){
        for(int j=1; j<=8; j++){
            arr[num].first = i;
            arr[num].second = j;
            num++;
        }
    }
    kingPosX = arr[kingPos].first;  kingPosY = arr[kingPos].second;
    queenPosX = arr[queenPos].first; queenPosY = arr[queenPos].second;
    queenMoveX = arr[queenMove].first; queenMoveY = arr[queenMove].second;
}

bool Game::illegalState(){
    if(queenPosX == kingPosX && queenPosY == kingPosY)
        return true;

    return false;
}

bool Game::illegalMove(){
    // illegal Move -> not move ¡Bdiagonal move ¡Bpass kingPos ¡Bsame as kingPos
    if(queenMoveX == queenPosX && queenMoveY == queenPosY)  return true;
    if(queenMoveX != queenPosX && queenMoveY != queenPosY)  return true;
    if(queenPosX > kingPosX && queenMoveX <= kingPosX && queenMoveY == kingPosY)  return true;
    if(queenPosY > kingPosY && queenMoveY <= kingPosY && queenMoveX == kingPosX)    return true;
    if(queenPosX < kingPosX && queenMoveX >= kingPosX && queenMoveY == kingPosY)  return true;
    if(queenPosY < kingPosY && queenMoveY >= kingPosY && queenMoveX == kingPosX)    return true;

    return false;
}

bool Game::moveNotAllowed(){
    if(abs(queenMoveX - kingPosX) == 1 && queenMoveY == kingPosY)    return true;
    if(abs(queenMoveY - kingPosY) == 1 && queenMoveX == kingPosX)    return true;

    return false;
}

bool Game::Stop(){
    if(kingPosX == 1 && kingPosY == 1 && queenMoveX == 2 && queenMoveY == 2)
        return true;
    if(kingPosX == 8 && kingPosY == 1 && queenMoveX == 7 && queenMoveY == 2)
        return true;
    if(kingPosX == 1 && kingPosY == 8 && queenMoveX == 2 && queenMoveY == 7)
        return true;
    if(kingPosX == 8 && kingPosY == 8 && queenMoveX == 7 && queenMoveY == 7)
        return true;
    return false;
}

int main()
{
    int kingPos, queenPos, queenMove;
    while(cin >> kingPos >> queenPos >> queenMove){
        Game game(kingPos,queenPos,queenMove);
        if(game.illegalState()){
            cout << "Illegal state" << endl;
        }   else if(game.illegalMove()){
            cout << "Illegal move" << endl;
        }   else if(game.moveNotAllowed()){
            cout << "Move not allowed" << endl;
        }   else if(game.Stop()){
            cout << "Stop" << endl;
        }   else{
            cout << "Continue" << endl;
        }
    }
}
