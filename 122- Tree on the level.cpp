#include <iostream>
#include <queue>
using namespace std;

struct TreeNode
{
    int value;
    TreeNode *right;
    TreeNode *left;
    TreeNode(int val=0, TreeNode *r=nullptr, TreeNode *l=nullptr){
        value = val;
        right = r;
        left = l;
    }
};

void printTree(TreeNode *root);
void deleteTree(TreeNode *root);
bool searchTree(TreeNode *root);

int main()
{
    TreeNode *node =nullptr;
    string input;
    bool isRepeat;
    int index=1, value=0;

    while(cin>>input){
        value = 0;

        if(input=="()"){
            if( isRepeat || searchTree(node) ){
                cout<<"not complete"<<endl;
            }
            else{
                printTree(node);
            }
            deleteTree(node);
            isRepeat = false;
            node = nullptr;
            continue;
        }
        if(isRepeat)  continue; //某一個節點被重複給值了

        for( index=1; input[index] != ','; index++){
            value = value*10 + input[index]-'0';
        }

        if(node==nullptr)  node = new TreeNode();
        TreeNode *curNode = node;

        for(++index; input[index] != ')'; index++){
            if(input[index] == 'L'){
                if(curNode->left == nullptr)
                    curNode->left = new TreeNode();
                curNode = curNode->left;
            }
            else if(input[index] == 'R'){
                if(curNode->right == nullptr)
                    curNode->right = new TreeNode();
                curNode = curNode->right;
            }
        }
        if(curNode->value != 0){
            isRepeat = true; // 查看某一個節點是否被重複給值
            continue;
        }
        curNode->value = value;
        //cout<<curNode->value<<" ";
    }
}

void printTree(TreeNode *root){
    queue<TreeNode*> myqueue;
    myqueue.push(root);
    int outputUse=0;

    while(!myqueue.empty()){
        TreeNode *tmp = myqueue.front();
        myqueue.pop();

        if(outputUse++!=0) cout<<" ";
        cout<<tmp->value;

        if(tmp->left != nullptr)   myqueue.push(tmp->left);
        if(tmp->right != nullptr)  myqueue.push(tmp->right);
    }
    cout<<endl;
}

void deleteTree(TreeNode *root){
    if(root == nullptr)
        return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

bool searchTree(TreeNode *root){
    // 一定要先判斷指標是否為 NULL，不然會讓指標變成 Dangling pointer
    if(root == nullptr) return false; //表示跑到葉節點(即過程中每個節點都有值)
    if(root->value == 0)   return true; //表示有new出node但沒有給值 (即題目沒有給這個節點值)

    bool check = searchTree(root->left) || searchTree(root->right);

    return check;
}
