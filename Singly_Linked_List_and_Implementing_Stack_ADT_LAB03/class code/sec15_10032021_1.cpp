// An implementaion of Singly Linked List

#include<iostream>

using namespace std;

class Node{
public:
    int key;
    Node* next;
    Node(int key){
        this->key = key;
        this->next = NULL;
    }
    ~Node(){}
};

Node* head = NULL;

void PushFront(int key){
    Node* newNode = new Node(key);

    newNode->next = head;
    head = newNode;
}

void PushBack(int key){
    Node* newNode = new Node(key);

    if(head==NULL){
        head = newNode;
        return;
    }

    Node* cur = head;
    while(cur->next!=NULL)
        cur = cur->next;

    cur->next = newNode;
}

void printNodes(){
    Node* cur = head;
    while(cur!=NULL){
        cout << cur->key << " --> ";
        cur = cur->next;
    }
    cout << "NULL" << endl;
}

int main(){

    PushBack(400); // 400

    printNodes();
}
