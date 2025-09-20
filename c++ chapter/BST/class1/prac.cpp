#include<iostream>
#include<queue>

using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val){
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

Node* BuildBST(int val,Node* root){
    if(root == NULL){
        root = new Node(val);
        return root;
    }
    else{
        if(val < root->data){
            root->left = BuildBST(val,root->left);
        }
        else{
            root->right = BuildBST(val,root->right);
        }
    }
    return root;
}

void preorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node* root){
    if(root==NULL) return;

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

void postorderTraversal(Node* root){
    if(root==NULL) return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}

void createTree(Node* root){
    cout<<"Enter the value of the node: "<<endl;
    int val; cin>>val;
    while(val!=-1){
        root = BuildBST(val,root);
        cout<<"Enter the value of the node: "<<endl;
        cin>>val;
    }
}

void levelorderTraversal(Node* root){
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
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
    }
}


int getMin(Node* root){
    if(root==NULL){
        return -1;
    }
    while(root->left != NULL){
        root = root->left;
    }

    return root->data;
}

int getMax(Node* root){
    if(root==NULL){
        return -1;
    }
    while(root->right != NULL){
        root = root->right;
    }

    return root->right;
}

bool SearchBST(Node* root,int target){
    if(root==NULL){
        return false;
    }
    if(root->data == target){
        return true;
    }
    else{
        if(target < root->data){
            bool leftans = searchBST(root->left,target);
            if(leftans == true){
                return true;
            }
        }
        else{
            bool rightans = SearchBST(root->right,target);
            if(rightans==true) return true;
        }
    }

    return false;
}

Node* deletenode(Node* root,int key){
    if(root == NULL){
        return NULL;
    }

    if(root->data == key){
        if(root->left == NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        if(root->left != NULL && root->right == NULL){
            Node* newnode = root->left;
            root->left = NULL;
            delete root;
            return newnode;
        }
        if(root->left == NULL && root->right != NULL){
            Node* newnode = root->right;
            root->right = NULL;
            delete root;
            return newnode;
        }
        if(root->left != NULL && root->right != NULL){
            int minval = getMin(root->right);
            root->data = minval;
            root->right = deletenode(root->right,minval);
            return root;
        }
    }
    else{

        if(key< root->data){
            root->left = deletenode(root->left,key);
        }
        else{
            root->right = deletenode(root->right,key);
        }
    }

    return root;
}

