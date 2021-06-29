#include <iostream>
using namespace std;

int main()
{
    string input, result="";
    int numHyphens = 0, numLetters = 0;
    while(cin >> input){
        result="";
        numLetters = numHyphens = 0;

        for(int i=0; i<input.size(); i++){
            switch(input[i]){
                case 'A':   case 'B':   case 'C':
                    result += '2';
                    numLetters++;
                    break;
                case 'D':   case 'E':   case 'F':
                    result += '3';
                    numLetters++;
                    break;
                case 'G':   case 'H':    case 'I':
                    result +='4';
                    numLetters++;
                    break;
                case 'J':   case 'K':   case 'L':
                    result += '5';
                    numLetters++;
                    break;
                case 'M':   case 'N':   case 'O':
                    result += '6';
                    numLetters++;
                    break;
                case 'P':   case 'Q':
                case 'R':   case 'S':
                    result += '7';
                    numLetters++;
                    break;
                case 'T':   case 'U':    case 'V':
                    result += '8';
                    numLetters++;
                    break;
                case 'W':   case 'X':
                case 'Y':    case 'Z':
                    result += '9';
                    numLetters++;
                    break;
                case '1':
                    result += '1';
                    break;
                case '-':
                    result += '-';
                    numHyphens++;
                    break;
                case '0':
                    result += '0';
                    break;
            }
        }
        cout<<result<<" "<<numLetters<<" "<<numHyphens<<endl;
    }
}
