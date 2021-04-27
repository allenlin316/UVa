#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void output(int);
 int main()
 {
     int testCase, sizeOfMatrix;
     int check=0;
     double input[200][200]={0};
     double rever[200][200]={0};
     char ch;

     cin>>testCase;
     while(testCase--){
        cin>>ch>>ch>>sizeOfMatrix;
        check=0;
        for(int i=0; i<sizeOfMatrix; i++){
            for(int j=0; j<sizeOfMatrix; j++){
                cin>>input[i][j];
                rever[sizeOfMatrix-1-i][sizeOfMatrix-1-j]=input[i][j];
            }
        }

        for(int i=0; i<sizeOfMatrix; i++){
            for(int j=0; j<sizeOfMatrix; j++){
                if(rever[i][j]!=input[i][j] || input[i][j]<0)
                    check++;
            }
        }
        output(check);
     }
 }
 void output(int check){
     static int testNum=1;
     if(check==0)
        cout<<"Test #"<<testNum++<<": Symmetric."<<endl;
     else
        cout<<"Test #"<<testNum++<<": Non-symmetric."<<endl;
 }
