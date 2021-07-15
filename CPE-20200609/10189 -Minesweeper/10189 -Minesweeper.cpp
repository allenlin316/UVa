#include <iostream>
using namespace std;

char **field;
void buildField(int,int);
void solve(int,int);
void fillField(int,int);
void print(int,int);

int main()
{
    int row, col;
    while(cin >> row >> col){
        if(row == 0 && col == 0)    break;
        buildField(row,col);
        solve(row,col);
        print(row,col);
    }
}
void buildField(int row, int col){
    // create a 2D dynamic array
    char **arr = new char *[row+2];
    for(int i=0; i<row+2; i++){
        arr[i] = new char [col+2];
    }

    field = arr;

    for(int i=0; i<=row; i++){
        for(int j=0; j<=col; j++)
            field[i][j] = '0';
    }
}
void solve(int row, int col){
    char ch;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            ch = cin.get();
            if(ch == '\n')  ch = cin.get();
            if(ch == '*'){
                field[i][j] = '*';
                fillField(i, j);
            }
        }
    }
}
void fillField(int row, int col){
    for(int i=-1; i<=1; i++){
        for(int j=-1; j<=1; j++){
            if(field[row+i][col+j] != '*'){
                field[row+i][col+j]++;
            }
        }
    }
}
void print(int row, int col){
    static int fieldNum = 1;
    if(fieldNum != 1)   cout << endl;

    cout << "Field #" << fieldNum++ << ":\n";
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            cout << field[i][j];
        }
        cout << endl;
    }
}
