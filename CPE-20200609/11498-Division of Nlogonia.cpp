#include <iostream>
using namespace std;

string checkLoc(int,int,int,int);

int main()
{
    int numQuery, divisionX, divisionY;
    int x, y;
    while(cin >> numQuery){
        if(numQuery == 0)   break;
        cin >> divisionX >> divisionY;
        for(int i=0; i<numQuery; i++){
            cin >> x >> y;
            cout << checkLoc(x, y, divisionX, divisionY) << endl;
        }
    }
}

string checkLoc(int x, int y, int divX, int divY){
    int diffOfX = x - divX;
    int difOfY = y - divY;

    if(diffOfX==0 || difOfY == 0)  return "divisa";
    if(x < divX && y > divY)    return "NO";
    if(x > divX && y > divY)    return "NE";
    if(x < divX && y < divY)    return "SO";
    if(x > divX && y < divY)    return "SE";
}
