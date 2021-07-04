#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numSol, numInput;
    int totalChar=0, runIndex=0;
    string lineSol="", lineOutput="", input="";
    string resultSol="", resultOutput="", tmp="";
    while(cin >> numSol){
        cin.get();
        if(numSol == 0)   break;
        runIndex++;
        totalChar= 0;
        resultOutput = resultSol = "";

        for(int i=0; i<numSol; i++){
            getline(cin, input);
            totalChar += input.size();
            if(!i){
                lineSol = input;
            }
            else{
                input = input + '\n';
                lineSol += input;
            }
        }
        cin >> numInput;
        cin.get();
        for(int i=0; i<numInput; i++){
            getline(cin, input);
            if(!i){
                lineOutput = input;
            }
            else{
                input = input + '\n';
                lineOutput += input;
            }
        }
        if(lineSol == lineOutput){
            cout << "Run #" << runIndex << ": Accepted" << endl;
            continue;
        }
        for(int i=0; i<lineSol.size(); i++){
            if(lineSol[i]==' ' || lineSol[i]=='\n'){
                lineSol.erase(i, 1);
                i--;
            }
        }

        for(int i=0; i<lineOutput.size(); i++){
            if(lineOutput[i]==' ' || lineOutput[i]=='\n'){
                lineOutput.erase(i, 1);
                i--;
            }
        }

        if(lineSol == lineOutput){
            cout << "Run #" << runIndex << ": Presentation Error"  << endl;
            continue;
        }
        else{ //Presentation error 題目有要求，只要數字對順序也對，但字母不對都是
            for(int i=0; i<lineSol.size(); i++){
                if(lineSol[i]>='0' && lineSol[i]<='9'){
                    resultSol += lineSol[i];
                }
            }
            for(int i=0; i<lineOutput.size(); i++){
                if(lineOutput[i]>='0' && lineOutput[i]<='9')
                    resultOutput += lineOutput[i];
            }
            if(resultOutput == resultSol)
                cout << "Run #" << runIndex << ": Presentation Error"  << endl;
            else
                cout << "Run #" << runIndex << ": Wrong Answer"  << endl;
        }
    }
}
