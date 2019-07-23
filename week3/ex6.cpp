#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <math.h>

using namespace std;
class Node {
    public:
    Node *next;
    string data;
    Node (data){
        this->data = data;
    }
};
class Link_list{
    public:
    Node *head;
    int count = 0 ;
    Link_list(string data){
        head = new Node(data);
        head->next = NULL;
        count = 1;
    }
    void insert(string data){
        Node *h = new Node(data);
        h->next = head;
        head = h ;
        count++;
    }
    void print(){
        for( Node *h = head ; h != NULL ; h = h->next){
            cout << h->data << " " ;
        }
    }
} c;
int main(){
    // Link_list();
    Link_list *l = new Link_list();
    l->insert("Hello");
    l->print();
}