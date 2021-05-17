#include <iostream>
#include <vector>
using namespace std;

void visited(  vector<vector<bool> >&check, vector<vector<char> >&area, int,int,int&);

int main()
{
    int row, col;
    int numOfDepo = 0;
    while(cin>>row>>col){
        vector<vector<char> >area(row,vector<char>(col));
        vector<vector<bool> >check(row,vector<bool>(col));
        numOfDepo=0;

        if(row==0)  break;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cin>>area[i][j];
                check[i][j]=false;
            }
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(area[i][j]=='@' && check[i][j]==false){
                    visited(check, area, i, j,numOfDepo);
                    numOfDepo++;
                }
            }
        }
        cout<<numOfDepo<<endl;
    }
}
void visited(  vector<vector<bool> >&check, vector<vector<char> >&area, int row , int col, int &num) {
    if(row<0 || row>=area.size())
        return;
    if(col<0 || col>=area[0].size())
        return;
    if(area[row][col]!='@' || check[row][col]==true)
        return;

    check[row][col] = true;
    visited(check, area, row-1, col-1,num);
    visited(check, area, row-1, col,num);
    visited(check, area, row-1, col+1,num);
    visited(check, area, row, col-1,num);
    visited(check, area, row, col+1,num);
    visited(check,area, row+1, col-1,num);
    visited(check, area, row+1, col,num);
    visited(check, area, row+1, col+1,num);

}


