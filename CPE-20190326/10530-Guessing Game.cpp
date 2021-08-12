#include <iostream>
using namespace std;



int main()
{
    int num;
    bool guess[11];
    for(int i=1; i<=10; i++)    guess[i] = true;
    string response;
    while(cin >> num){
        cin.get();
        if(num == 0)    break;
        getline(cin, response);

        if(response == "right on"){
            if(guess[num])  cout << "Stan may be honest\n";
            else    cout << "Stan is dishonest\n";
            for(int i=1; i<=10; i++)    guess[i] = true;
            continue;
        }

        if(response == "too high"){
            for(int i=num; i<=10; i++)
                guess[i] = false;
        }
        else if(response == "too low"){
            for(int i=1; i<=num; i++){
                guess[i] = false;
            }
        }
    }
}
