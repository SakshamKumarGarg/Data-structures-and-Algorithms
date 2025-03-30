#include<bits/stdc++.h>
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
    // cout<<"Enter the value of node"<<endl;
    int value;
    cin>>value;

    if(value == -1){
        return NULL;
    }
    else{
        Node* root = new Node(value);
        //Adding left child 
        // cout<<"Adding left child "<<value<<endl;
        root->left = createTree();
        // Adding right child
        // cout<<"Adding right child "<<value<<endl;
        root->right = createTree();
        return root;
    }
}


void preorderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<endl;
    preorderTraversal(root->left);
    preorderTraversal(root->right);
    
}

void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<endl;
    inOrderTraversal(root->right);
}
void postOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
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
        if(front == NULL){

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
int main(){
    Node* root;
    root = createTree();
    //10 50 40 -1 -1 -1 30 20 -1 -1 -1
    //10 
    //50 30
    //40 20

    levelOrderTraversal(root);
    // cout<<root->data<<endl;

    return 0;

}