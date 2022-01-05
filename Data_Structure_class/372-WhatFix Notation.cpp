#include <iostream>
#include <stack>
using namespace std;

string reverseStr(string prefix){
    string result = "";
    for(int i=prefix.size(); i>=0; i--){
        result += prefix[i];
    }
    return result;
}

int solveOp(char op){
    switch(op){
        case '$':
        case '*':
        case '/':
        case '+':
        case '-':
        case '&':
        case '|':
        case '!':
            return 1;
        default:
            return 0;
    }
}

string toPostfix(string prefix){
    stack<string> mystack;
    prefix = reverseStr(prefix);
    string tmp, tmp1, tmp2;
    for(int i=0; i<prefix.size(); i++){
        if(prefix[i]>='a' && prefix[i]<='z'){
            tmp = prefix[i];
            mystack.push(tmp);
        }
        if(solveOp(prefix[i])){
            tmp1 = mystack.top();
            mystack.pop();
            tmp2 = mystack.top();
            mystack.pop();
            string combine = tmp1 + tmp2 + prefix[i];
            mystack.push(combine);
        }
        else
            continue;
    }
    return mystack.top();
}

void print(string postfix){
    cout << "POSTFIX =>";
    for(int i=0; i<postfix.size(); i++){
        cout << " " << postfix[i];
    }
    cout << endl;
}

int main()
{
    string infix, prefix, postfix;
    while(getline(cin, infix)){
        getline(cin, prefix);
        cout << "INFIX   => " << infix << endl;
        cout << "PREFIX  => " << prefix << endl;
        postfix = toPostfix(prefix);
        print(postfix);
    }
}
