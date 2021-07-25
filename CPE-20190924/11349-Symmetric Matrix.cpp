#include <iostream>
using namespace std;

int main()
{
    int testCase, dimension, caseNum=1;
    char ignore;
    bool isSymmetric=true;
    cin >> testCase;
    while(testCase--){
        cin >> ignore >> ignore >> dimension;
        isSymmetric=true;
        long long int matrix[dimension+1][dimension+1];
        for(int i=1; i<=dimension; i++){
            for(int j=1; j<=dimension; j++){
                cin >> matrix[i][j];
            }
        }
        long long int check[dimension+1][dimension+1];
        for(int i=dimension, k=1; i>=1 && k<=dimension; i--, k++){
            for(int j=dimension, l=1; j>=1 && l<=dimension; j--, l++){
                check[i][j] = matrix[k][l];
            }
        }
        for(int i=1; i<=dimension; i++){
            for(int j=1; j<=dimension; j++){
                if(matrix[i][j] != check[i][j] || matrix[i][j] < 0){
                    isSymmetric = false;
                    break;
                }
            }
        }
        if(!isSymmetric)
            cout << "Test #" << caseNum++ << ": " << "Non-symmetric." << endl;
        else
            cout << "Test #" << caseNum++ << ": " << "Symmetric." << endl;
    }
}
