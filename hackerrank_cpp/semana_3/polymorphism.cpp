#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
    protected:
    map<int,Node*> mp;
    int cp; 
    Node* tail; 
    Node* head; 
    virtual void set(int a, int b) = 0;
    virtual int get(int c) = 0;
};
    
class LRUCache : public Cache{
    public:


    LRUCache(int capacidade){
        cp = capacidade;
        head = new Node(0,0);
        tail = new Node(0,0);
        head->next = tail;
        tail->prev = head;
    };


    void set(int a, int b) override {
        if (mp.find(a) != mp.end()) {
            Node* key_position = mp[a];
            key_position->value = b;
            remove(key_position);
            add(key_position);
        } else {
            if (mp.size() == cp) {
                Node* last_used_key = tail->prev;
                remove(last_used_key);
                mp.erase(last_used_key->key);
                delete last_used_key;
            }
            Node* new_node = new Node(a, b);
            add(new_node);
            mp[a] = new_node;
        }
    }

    int get(int c) override {
        if (mp.find(c) != mp.end()) {
            Node* node = mp[c];
            remove(node);
            add(node);
            return node->value;
        } else {
            return -1;
        }
    }

private:
    void remove(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void add(Node* node) {
        node->next = head->next;
        head->next->prev =node;
        head->next = node;
        node->prev = head;
    }


};
int main() {
    int N, M;
    cin >> N >> M;
    LRUCache objeto(M);
    for(int i = 0; i < N; i++){
        string type;
        cin >> type;
        if(type == "get"){
            int key;
            cin >> key;  
            cout << objeto.get(key) << endl;
        } else if (type == "set"){
            int key, value;
            cin >> key >> value;
            objeto.set(key, value);
        }
    }
    return 0;
}
