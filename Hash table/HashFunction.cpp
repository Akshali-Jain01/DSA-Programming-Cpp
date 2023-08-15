#include<iostream>
using namespace std;
 class Node
 {
    public:
        string key;
        int value;
        Node* next;
        Node(string key , int value){
            this->key = key;
            this->value = value;
            this->next = nullptr;
        }
 };

class HashTable{
private: 
    static const int SIZE =7;
    Node* datamap[SIZE];
    public:
    
        void printTable(){
            for(int i =0;i<SIZE;i++){
                cout<<i<<": ";
                if(datamap[i]){
                Node* temp = datamap[i];
                while(temp){
                    cout<<temp->key<<" : "<<temp->value<<" ,";
                    temp=temp->next;
                }
            }
            cout<<endl;
        
          }
        }
        int hash(string key){
            int hash = 0;
            for(int i=0;i<key.length();i++){
                int asciiValue = int(key[i]);
                hash = (hash+asciiValue*23)%SIZE;
            }
            return hash;
        }
 };
 
 int main(){
    HashTable* myHashtable = new HashTable();
    myHashtable->printTable();
    return 0;
 }