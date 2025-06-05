#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    //constructor
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

Node* insertATHead(int value, Node *&head, Node *&tail)
{
    if (head == NULL && tail == NULL)
    {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{

        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;

    }

    return head;

}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next; 
    }
    cout<<"NULL"<<endl;
}


Node* insertAtTail(int value,Node* &head,Node* &tail){
    if(head == NULL && tail == NULL){
        //LL is empty
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        // LL is not empty
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }
    return head;
}

int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        temp = temp->next;
        len++;
    }

    return len;
}

void insertAtPosition(int position,int value,Node* &head,Node* &tail){
    int length = getLength(head);
    if(position==1) head = insertATHead(value,head,tail);
    else if(position == length + 1) insertAtTail(value,head,tail);
    else{
        Node* temp = head;
        while(position-2>0){
            temp = temp->next;
            position--;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

bool searchLL(int target,Node* &head){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == target){
            return true;
        }
        temp = temp->next;
    }

    return false;
}

void deleteNodefromLL(int position,Node* &head,Node* &tail){
    //if LL is empty
    if(head == NULL && tail == NULL){
        cout<<"No node to delete"<<endl;
        return;
    }
    if(head==tail){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    else{
        //multiple nodes in LL
        if(position==1){
            Node* temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
            return;
        }
        else{
            Node* temp = head;
            for(int i=0;i<position-2;i++){
                temp = temp->next;
            }
            Node* nodetodelete = temp->next;
            temp->next = nodetodelete->next;
            nodetodelete->next = NULL;
            delete nodetodelete;
        }
    }
}

void solve(Node*head,int &carry){
    if(!head) return;
    solve(head->next, carry);


    int sum = head->data + carry;
    int digit = sum%10;
    carry = sum/10;

    head->data = digit;

}
Node* add1(Node* head,int &carry){
    solve(head,carry);
    if(carry == 1){
        Node* newhead = new Node(carry);
        newhead->next = head;
        head = newhead;
        
    }
    return head;

}
int main(){

    Node*head = new Node(9);
    head->next = new Node(9);
    head->next->next = new Node(9);

    print(head);
    int carry = 1;
    head = add1(head,carry);
    print(head);
     

    return 0;

}