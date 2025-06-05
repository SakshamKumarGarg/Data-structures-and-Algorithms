#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }

};

void InsertAtHead(int value,Node* &head,Node* &tail){
    if(head==NULL && tail == NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode  = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void print(Node* head){
    Node* temp = head;    // 0(1) complexity
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

}

void printreverse(Node* tail){
    Node* temp = tail;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp  = temp->prev;
    }
    cout<<"NULL"<<endl;
}

void InsertAtTail(int value,Node* &head,Node* &tail){
    if(head==NULL && tail==NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;

    }
    else{
        Node* newNode = new Node(value);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

int getLength(Node* &head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
        
    }

    return len;
}

void InsertAtPosition(int position,int value,Node* &head,Node* &tail){
    int length = getLength(head);
    if(position==1) InsertAtHead(value,head,tail);
    else if(position == length+1) InsertAtTail(value,head,tail);
    else{
        Node* temp = head;
        for(int i=0;i<position-2;i++){
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        Node* forward = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = forward;
        forward->prev = newNode;
    }
}

bool searchLL(int target,Node* head){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == target){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteNodefromAll(int position,Node* &head,Node* &tail){
    int length = getLength(head);
    if(head == NULL && tail == NULL){
        cout<<"list is empty"<<endl;
        return;
    }

    if(head==tail){
        Node*temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    else if(position==1){
            Node* temp = head;
            head = head->next;
            head->prev = NULL;
            temp->next = NULL;
            delete temp;
            return;
        }
    else if(position == length){
        Node* temp = tail;
        tail = temp->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < position - 2; i++)
        {
            temp = temp->next;
        }
        Node *curr = temp->next;
        Node *forward = curr->next;
        temp->next = forward;
        forward->prev = temp;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
    }
}



int main(){
    Node* head = NULL;
    Node* tail = NULL;

    // InsertAtHead(10,head,tail);
    // InsertAtHead(20,head,tail);
    // InsertAtHead(30,head,tail);
    // print(head);                            
    // printreverse(tail);

    InsertAtTail(10,head,tail);
    InsertAtTail(20,head,tail);
    InsertAtTail(30,head,tail);
    // print(head);
    // printreverse(tail);

    InsertAtPosition(3,420,head,tail);
    print(head);
    // print(head);
    // cout<<searchLL(30,head);

    deleteNodefromAll(3,head,tail);
    print(head);

    return 0;

}