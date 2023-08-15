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

        Node* removeLast(){
            Node* temp = tail;
            if(length==0) return nullptr;
            if(length==1){
                head=nullptr;
                tail=nullptr;
            }
            
            else{ 
                 
                tail = tail->prev;
                tail->next = nullptr;
                temp->prev = nullptr;
                }

                length--;
                return temp; 
        }

        void preppend (int value){
            Node* newNode = new Node(value);
            if(length==0){
                head=newNode;
                tail=newNode;
            }
            else{
                head->prev = newNode;
                newNode->next = head;
                head= newNode;
            }
            length++;
        }
};

int main(){
    DoublyLinkedList* myLinkedList = new DoublyLinkedList(8);
   
    myLinkedList->append(9);
    myLinkedList->preppend(1);
    myLinkedList->printList();
   
}