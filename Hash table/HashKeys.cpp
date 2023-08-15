#include<iostream>
#include<vector>
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
                cout<<i<<": "<<endl;
                if(datamap[i]){
                Node* temp = datamap[i];
                while(temp){
                    cout<<"{ "<<temp->key<<" : "<<temp->value<<" }"<<endl;
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
        void set (string key, int value){
            int index = hash(key);
            Node* newNode = new Node(key,value);
            if(datamap[index]==nullptr){
                datamap[index]=newNode;
            }
            else{
                Node* temp = datamap[index];
                while(temp->next){
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }
        int get(string key){
            int index = hash(key);
            Node* temp = datamap[index];
            while(temp!=nullptr){
                if(temp->key==key) return temp->value;
                temp=temp->next;
            }
            return 0;
        }
         vector<string> keys() {
            vector<string> allKeys;
            for(int i = 0; i < SIZE; i++) {
                Node* temp = datamap[i];
                while (temp != nullptr) {
                    allKeys.push_back(temp->key);
                    temp = temp->next;
                }
            }
            return allKeys;
        }  
 };
 
 int main(){
    HashTable* myHashTable = new HashTable();
    myHashTable->set("nails", 100);
    myHashTable->set("tile", 50);
    myHashTable->set("lumber", 80);

    myHashTable->set("bolts", 200);
    myHashTable->set("screws", 140);
    //cout<<myHashTable->get("bolts")<<endl;
    vector<string>myKeys = myHashTable->keys();
    for(auto key :myKeys){
        cout<<key<<",";
    }
    //myHashTable->printTable();
    return 0;
 }