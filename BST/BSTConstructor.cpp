#include<iostream>
using namespace std;
class Node{
    public:
        int value;
        Node* leftchild;
        Node* rightchild;

    Node(int value){
        this->value = value;
        leftchild=nullptr;
        rightchild=nullptr;
    }
};

class BinarySearchTree{
    public: 
    Node* root;

    BinarySearchTree(){
        root= nullptr;
    }
};

int main(){
    BinarySearchTree *Mytree  = new BinarySearchTree();
    cout<<Mytree->root<<endl; 
}