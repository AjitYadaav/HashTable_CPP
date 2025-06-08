#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Node{
    public:
    string key;
    int val;
    Node* next;
    //constructor
    Node(string key,int val){
        this->key = key;
        this->val = val;
        this->next = NULL;
    }
};

class HashTable{
    int totalSize;
    int currSize;
    Node** table;
    public:
    HashTable(int size){
        totalSize = size;
        currSize = 0;
        table = new Node*[totalSize];
        //initializing the table with null value
        for(int i = 0; i<totalSize; i++){
            table[i] = NULL;
        }
    }
};

int main(){
    HashTable ht(5);//hashtable of size = 5
    return 0;
}