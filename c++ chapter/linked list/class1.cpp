#include <bits/stdc++.h>
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

int main()
{

    Node* head = NULL;
    Node* tail = NULL;

    head = insertAtTail(101,head,tail);
    // print(head);

    head = insertAtTail(102,head,tail);
    // print(head);
    insertAtTail(103,head,tail);
    print(head);

    insertAtPosition(1,42,head,tail);
    print(head);

    insertAtPosition(5,57,head,tail);
    print(head);

    insertAtPosition(3,420,head,tail);
    print(head);

    // cout<<searchLL(57,head)<<endl;
    // cout<<searchLL(58,head)<<endl;

    deleteNodefromLL(4,head,tail);
    print(head);

    // insertATHead(10,head,tail);
    // print(head);
    // insertATHead(20,head,tail);
    // print(head);

    // insertATHead(30,head,tail);
    // print(head);


    // stack
    // Node first;

    // dynamic memory
    // Node *first = new Node(10);

    return 0;
}