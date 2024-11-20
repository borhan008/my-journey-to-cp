#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node *links[26];
    bool flag = false;

    bool containsKey(char ch){
        return (links[ch-'a'] != NULL);
    }

    Node *get(char ch){
        return links[ch - 'a'];
    }

    void put(char ch, Node *node){
        links[ch - 'a'] = node;
    }

    void setEnd(){
        flag = true;
    }

    bool isEnd(){
        return flag;
    }
};
class Trie {
    private : Node *root;
public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node *node = root;
        for(auto ch:word){
            if(!node->containsKey(ch)){
                node->put(ch, new Node());
            }
            node = node->get(ch);
        }
        node->setEnd();
    }
    
    bool search(string word) {
        Node *node = root;
        for(auto ch:word){
            if(!node->containsKey(ch)) return false;
            node = node->get(ch);
        }
        return node->isEnd();
    }
    
    bool startsWith(string prefix) {
        Node *node = root;
        for(auto ch:prefix){
            if(!node->containsKey(ch)) return false;
            node = node->get(ch);
        }
        return true;
    }
};


int32_t main(){
	Trie *tr = new Trie();
	tr->insert("apple");
	cout << tr->search("apple") << "\n";
	
	return 0;
}