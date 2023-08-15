#include<iostream>
using namespace std;
class Node{
public:
    int value;
    Node* next;

    Node(int value){
        this->value = value;
        next= nullptr;
    }
};

class LinkedList{
private:
    Node*head;
    Node* tail;
    int length;
public:
    LinkedList(int value){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length =1;
    }
    void printList(){
        Node *temp=head;
        while(temp){
            cout<<temp->value<<endl;
            temp= temp->next;
        }
    }

    void getHead(){
        cout<<this->head<<endl;
    }
    void getTail(){
        cout<<this->tail<<endl;
    }
    void getLength(){
        cout<<this->length<<endl;
    }
};

int main(){
    LinkedList *myLinkedlist = new LinkedList(4);
    myLinkedlist->printList();
    myLinkedlist->getHead();
    myLinkedlist->getTail();
    myLinkedlist->getLength();
    return 0;
}