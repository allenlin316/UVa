#include <iostream>
#include <stack>
using namespace std;
// ��C,D,E,I �ݦ��Ÿ�(+/*)
// ��N�ݦ��
// ��p~z�ݦ��B�⤸(�Ʀr)
int main()
{
    bool isExist;
    string input, tmp;
    stack<string>myStack;
    while(cin>>input){
        while(!myStack.empty())
            myStack.pop();
        isExist=true;

        for(int i=input.size()-1; i>=0; i--){
            if(input[i]>='p' && input[i]<='z'){
                tmp = input[i];
                myStack.push(tmp);
            }
            else if(input[i]=='N'){
                if(myStack.empty()){
                    isExist = false;
                    break;
                }
                tmp = myStack.top();
                myStack.pop();
                tmp = input[i] + tmp;
                myStack.push(tmp);
            }
            else if(input[i]=='C' || input[i]=='D' || input[i]=='E' || input[i]=='I'){
                if(myStack.empty()){
                    isExist=false;
                    break;
                }
                tmp = myStack.top();
                myStack.pop();
                tmp = input[i] + tmp;
                if(myStack.empty()){
                    isExist =false;
                    break;
                }
                tmp += myStack.top();
                myStack.pop();
                myStack.push(tmp);
            }
            else{
                isExist = false;
                break;
            }

        }
         if(myStack.size()!=1)
                isExist= false;
            if(isExist)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }
}
