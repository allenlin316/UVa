#include <iostream>
using namespace std;

int gcd(int,int);

int main()
{
    int G = 0, N;
    while(cin >> N){
        if(N == 0)  break;
        G = 0;
        for(int i = 1; i<N; i++){
            for(int j=i+1; j<=N; j++){
                G += gcd(i, j);
            }
        }
        cout << G << endl;
    }

}
int gcd(int num1, int num2){
    if(num2 > num1) swap(num1,num2);

    if(num1 % num2 == 0)
        return num2;
    else if(num1 % num2 > 0)
        return gcd(num1 % num2, num2);
}
