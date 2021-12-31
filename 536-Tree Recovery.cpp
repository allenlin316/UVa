#include<iostream>
using namespace std;

void toPostorder(string preorder, string inorder){
    if(preorder.size() == 0)
        return;
    if(preorder.size() == 1){
        cout << preorder;
        return;
    }
    char parent = preorder[0];
    int k=0;
    for(int i=0; i<inorder.size(); i++){
        if(parent == inorder[i])
            k = i;
    }
    toPostorder(preorder.substr(1, k), inorder.substr(0, k));
    toPostorder(preorder.substr(k+1, preorder.size()-k-1), inorder.substr(k+1, inorder.size()-k-1));
    cout << parent;
}

int main()
{
    string preorder, inorder;
    while(cin >> preorder >> inorder){
        toPostorder(preorder, inorder);
        cout << endl;
    }
}
