#include<iostream>
using namespace std;
class Node{
    public:
        int value;
        Node* next;
        Node* prev;

    Node(int value){
        this->value = value;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList{
    private:
        int length;
        Node* head;
        Node* tail;
    public:
        DoublyLinkedList(int value){
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }
        void printList(){
            Node* temp = head;
            while(temp){
                cout<<temp->value<<endl;
                temp = temp->next;
            }
        }
        void getHead(){
            cout<<head->value<<endl;
        }
        void getTail(){
            cout<<tail->value<<endl;
        }
        void getLength(){
            cout<<length<<endl;
        }
        void append(int value){
            Node* newNode = new Node(value);
            if(length==0){
                head= newNode;
                tail = newNode;
            }
            else{
                newNode->prev = tail;
                tail ->next = newNode;
                tail = newNode;
            }
            length++;
        }
};

int main(){
    DoublyLinkedList* myLinkedList = new DoublyLinkedList(8);
    myLinkedList->getLength();
    myLinkedList->append(9);
    myLinkedList->printList();
}