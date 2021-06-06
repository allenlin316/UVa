#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<char> myStack;
    string result, input;
    bool check;
    int testCase;
    cin>>testCase;
    cin.get();
    while(testCase--){
        getline(cin,input); // the first rule said it can be an empty string
        check=true;
        while(!myStack.empty()) myStack.pop();

        for(int i=0; i<input.size(); i++){
            if(input[i]=='(' || input[i]=='['){
                myStack.push(input[i]);
            }
            else if(input[i]==')' || input[i]==']'){
                if(myStack.empty()){
                    check=false;
                    break;
                }
                if( (input[i]==')' && myStack.top()=='[') || (input[i]==']' && myStack.top()=='(') ) {
                    check=false;
                    break;
                }
                result += myStack.top();
                myStack.pop();
            }
        }
        if(!check || !myStack.empty())
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
}
