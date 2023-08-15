#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node *next;

    Node(int value){
        this->value = value;
        next = nullptr;
    }
};

class Stack{
    private:
    Node *top;
    int height ;

    public:
    Stack(int value){
        Node* newNode = new Node(value);
        top = newNode;
        height=1;
    }

    void printStack(){
        Node* temp = top;
        cout<<"Stack is: "<<endl;
        while(temp){
            cout<<temp->value<<endl;
            temp = temp->next;
        }
    }
    void getTop(){
        cout<<"Top: "<<top->value<<endl;
    }
    void getHeight(){
        cout<<"Height: "<<height<<endl;
    }

};

int main(){
    Stack* myStack = new Stack(2);
    myStack->getHeight();
    myStack->getTop();
    myStack->printStack();
    return 0; 
}