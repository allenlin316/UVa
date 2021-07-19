#include <iostream>
#include <algorithm> // sort()
#include <vector>
#include <string> // to_string¡Bstoi()
using namespace std;

bool descend(char ch1, char ch2);

int main()
{
    string incre, decre, input;
    int result;
    vector<int> numChain;

    while(cin >> input){
        if(input == "0")    break;
        numChain.clear();
        cout << "Original number was " << input << endl;
        while(true){
            incre = decre = input;
            sort(incre.begin(), incre.end());
            sort(decre.begin(), decre.end(), descend);
            result = stoi(decre) - stoi(incre);
            cout << stoi(decre) << " - " << stoi(incre) << " = " << result << endl;
            numChain.push_back(result);
            input = to_string(result);
            if(count(numChain.begin(), numChain.end(), result) >= 2){
                cout << "Chain length " << numChain.size() << endl << endl;
                break;
            }
        }
    }
}

bool descend(char ch1, char ch2){
    if(ch1 > ch2)
        return true;
    return false;
}

