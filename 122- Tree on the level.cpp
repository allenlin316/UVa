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
        if(isRepeat)  continue; //�Y�@�Ӹ`�I�Q���Ƶ��ȤF

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
            isRepeat = true; // �d�ݬY�@�Ӹ`�I�O�_�Q���Ƶ���
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
    // �@�w�n���P�_���ЬO�_�� NULL�A���M�|�������ܦ� Dangling pointer
    if(root == nullptr) return false; //��ܶ]�츭�`�I(�Y�L�{���C�Ӹ`�I������)
    if(root->value == 0)   return true; //��ܦ�new�Xnode���S������ (�Y�D�بS�����o�Ӹ`�I��)

    bool check = searchTree(root->left) || searchTree(root->right);

    return check;
}
