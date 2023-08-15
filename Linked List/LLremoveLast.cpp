#include<iostream>
using namespace std;


class Node{
    public:
    int value;
    Node* next;


    Node(int value){
        this->value= value;
        next = nullptr;
    }

};
class LinkedList{
    private:
    Node* head;
    Node*tail;
    int length;

    public:

    LinkedList(int value){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length =1;
    }

    void printList(){
        Node* temp = head;
        while(temp!= nullptr){
            cout<<temp->value<<endl;
            temp= temp->next;
        }
    }
    
    void append( int value){
            Node * newNode = new Node(value);
            if(length ==0){
                head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                tail=newNode;
            }
            length++;
    }
        
    Node* removelast(){
            if (length ==0) return nullptr;
            Node* temp= head;
            Node* pre = head;
            while(temp->next){
                pre = temp;
                temp= temp->next;
            }
            tail = pre;
            tail->next = nullptr;
            length --;
            if (length ==0) {
                tail = nullptr;
                head = nullptr;
            }
            return temp;
     }
    
};
int main(){
    LinkedList *myLinkedList = new LinkedList(4);
    myLinkedList->append(3);
    myLinkedList->append(2);
     myLinkedList->append(2);
      myLinkedList->append(2);
    cout<<"Removed Node: "<<myLinkedList->removelast()->value<<endl;
    cout<<"Next Removed Node: "<<myLinkedList->removelast()->value<<endl;
    cout<<"Remaining list: "<<endl;
    myLinkedList->printList();
    return 0;

}