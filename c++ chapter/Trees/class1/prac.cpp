#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

Node* createTree(){
    int value;
    cin>>value;

    if(value == -1) return NULL;
    else{
        Node* root = new Node(value);
        root->left = createTree();

        root->right = createTree();
        return root;
    }
}

void preorderTraversal(Node* root){
    if(root == NULL) return;

    cout<<root->data<<endl;
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inOrderTraversal(Node* root){
    if(root == NULL) return;

    inOrderTraversal(root->left);
    cout<<root->data<<endl;
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    if(root == NULL) return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);

    cout<<root->data<<endl;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        if(front==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";
            if(front->left != NULL){
                q.push(front->left);
            }
            if(front->right != NULL){
                q.push(front->right);
            }
        }
    }
    
}

int maxDepth(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftsubtreeHeight = maxDepth(root->left);
    int rightsubtreeHeight = maxDepth(root->right);
    int maxHeight = max(leftsubtreeHeight,rightsubtreeHeight);
    int totalHeight = maxHeight+1;
    return totalHeight;
}

Node* lowestCommonAncestor(Node* root, Node* p, Node* q){
    if(root == NULL){
        return NULL;
    }
    if(root == p){
        retrun p;
    }
    if(root == q){
        return q;
    }
}

int main(){
    Node* root;
    root = createTree();

    // preorderTraversal(root);
    // inOrderTraversal(root);
    // postOrderTraversal(root);
    
    // levelOrderTraversal(root);
    int ans = maxDepth(root);
    cout<<ans<<"\n";

    
    return 0;

}