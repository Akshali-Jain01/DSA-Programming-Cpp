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
     void prepend(int value){
        Node* newNode= new Node(value);
        if(length==0){
            head = newNode;
            tail= newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
        length++;
     }
    Node* removeFirst(){
        if(length ==0) return nullptr;
        Node *temp = head;
        temp->next = nullptr;
        head = head->next;
        length--;
        if(length ==0){
            head = nullptr;
            tail = nullptr;
        }
        return temp;
      }
      Node* get(int index){
        Node* temp = head;
        if(index<0|| index>length) return nullptr;
        for(int i =0;i<index;i++){
            temp=temp->next;
        }
        return temp;
      }

      bool set(int index,int value){
        Node* temp = get(index);
        if(temp){
            temp->value =value;
            return true;
        }
        return false;
      }

    
};
int main(){
    LinkedList *myLinkedList = new LinkedList(4);
    myLinkedList->append(3);
    cout<<myLinkedList->set(3,3)<<endl;
    cout<<myLinkedList->get(1)->value<<endl;
    return 0;

}