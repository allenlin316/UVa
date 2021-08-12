#include <iostream>
#include <algorithm>
using namespace std;

int **dp;
void initArray(int,int);
int dpSolve(string,string);
int smallest(int,int,int);

int main()
{
    int lengthWord1, lengthWord2, result;
    string word1, word2;
    while(cin >> lengthWord1 >> word1 >> lengthWord2 >> word2){
        initArray(lengthWord1, lengthWord2);
        result = dpSolve(word1, word2);
        cout << result << endl;
    }
}

void initArray(int n, int m){
    // create a dynamic 2D-array
    int **arr = new int *[n+1];
    for(int i=0; i<=n; i++){
        arr[i] = new int [m+1];
    }

    dp = arr;
}

int smallest(int x, int y, int z){
    int result = min(x, y);
    return min(result, z);
}

int dpSolve(string word1, string word2){
    int length1 = word1.size();
    int length2 = word2.size();
    // base case
    for(int i=0; i<=length1; i++)
        dp[i][length2] = length1 - i;
    for(int j=0; j<=length2; j++)
        dp[length1][j] = length2 - j;

    // bottom-up
    for(int i=length1-1; i>=0; i--){
        for(int j=length2-1; j>=0; j--){
            if(word1[i] == word2[j])
                dp[i][j] = dp[i+1][j+1];
            else
                dp[i][j] = 1 + smallest(dp[i][j+1], dp[i+1][j], dp[i+1][j+1]);
        }
    }

    return dp[0][0];
}
