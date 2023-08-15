#include<iostream>
using namespace std;
class Node{
    public:
        int value;
        Node* next;
    Node(int value){
        this->value = value;
        next = nullptr;
    }
};
class LinkedList{
private: 
    Node* head;
    Node* tail;
    int length ;
public:
    LinkedList(int value){
        Node* newNode = new Node(value);
        head= newNode;
        tail= newNode;
        length =1;
    }
    void append(int value){
        Node*  newNode = new Node(value);
        if(length==0){
            head = newNode;
            tail= newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        length++;
    }
    void printList(){
        Node *temp = head;
        while(temp){
            cout<<temp->value<<endl;
            temp = temp->next;
        }
    }
};
int main(){
    LinkedList *myLinkedlist = new LinkedList(9);
    myLinkedlist->append(4);
    myLinkedlist->printList();
}