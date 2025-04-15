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

Node* buildBST(int val, Node* &root){
    if(root == NULL){
        root = new Node(val);
    }
    else{
        if(root->data > val){
            root->left = buildBST(val,root->left);
        }
        else{
            root->right = buildBST(val,root->right);
        }
    }
    return root;

}

void preordertraversal(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void inordertraversal(Node* root){
    if(root==NULL) return;
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}
void postordertraversal(Node* root){
    if(root==NULL) return;
    
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout<<root->data<<" ";
}

void createTree(Node* &root){
    cout<<"Enter the value of node"<<endl;
    int val;
    cin>>val;
    

    while(val != -1){
        root = buildBST(val,root);
        cout<<"Enter the value of node"<<endl;
        cin>>val;
    }
    
}
void levelordertraversal(Node* root){
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
    if(root == NULL){
        return -1;
    }
    while(root->left != NULL){
        root = root->left;
    }

    return root->data;

}

int getMax(Node* root){
    if(root == NULL){
        return -1;
    }
    while(root->right != NULL){
        root = root->right;
    }

    return root->data;
}

bool searchBST(Node* root,int target){
    if(root == NULL){
        return false;
    }
    if(root->data == target){
        return true;
    }
    else{
        if(target<root->data){
            bool leftans = searchBST(root->left,target);
            if(leftans == true){
                return true;
            }
        }
        else{
            bool rightans = searchBST(root->right,target);
            if(rightans == true){
                return true;
            }

        }
    }
    return false;
}

Node* deletefromBST(Node* root){
    
}

int main(){
    Node *root = NULL;

    //100 50 200 70 20 250 150 -1
    createTree(root);
    cout<<"Printing level order"<<" " << endl;
    levelordertraversal(root);
    cout<<endl<<"Printing inorder: "<<endl;
    inordertraversal(root);
    cout<<endl<<"Printing Pre order: "<<endl;
    preordertraversal(root);
    cout<<endl<<"Printing post order: "<<endl;
    postordertraversal(root);

    cout<<endl;
    cout<<"min value: "<<getMin(root)<<endl;
    cout<<"max value: "<<getMax(root)<<endl;

    bool searchans = searchBST(root,250);
    if(searchans){
        cout<<"Node found"<<endl;
    }
    else{
        cout<<"Node not found"<<endl;
    }

    //Note inorder of BST is always sorted
    // BST left part is smaller and right part is greater
    

    return 0;

}