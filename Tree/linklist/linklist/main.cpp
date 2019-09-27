#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(){
        next = NULL;
    }
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

class Linklist{
public:
    Node *h;
    
    bool sc(int data){
        Node *c = h;
        while(c!=NULL){
            if(c->data == data){
                return true;
            }
            c = c->next;
        }
        return false;
    }
    
    void i(int data,int value){
        Node *newnode = new Node(data);
        Node *c = h;
        Node *r = c;
        if(h == NULL){
            h = newnode;
            h->next = NULL;
            p();
        }
        if(!sc(data)){
        if(h->data == value){
            newnode->next = h;
            h = newnode;
            p();
        }else {
            while(c!=NULL){
                if(c->data == value){
                    newnode->next = c;
                    r->next = newnode;
                    p();
                    break;
                }else if(c->next == NULL){
                    c->next = newnode;
                    newnode->next = NULL;
                    p();
                    break;
                }
                r = c;
                c = c->next;
            }
        }
        }
    }
    
    void d(int data){
        Node *c = h;
        Node *r = c;
        if(h->next == NULL){
            
        }else if(h->data == data){
            h = h->next;
            p();
        }else{
            while(c!=NULL){
                if(c->data == data){
                    r->next = c->next;
                    p();
                    break;
                }
                r = c;
                c = c->next;
            }
        }
    }
    void p(){
        Node *c = h;
        while(c!=NULL){
            cout << c->data << " ";
            c = c->next;
        }
        cout << endl;
    }
    
    
};

int main(){
    string x;
    int a,b;
    Linklist *l = new Linklist();
    while(true){
        cin >> x;
        if(x == "1"){
            cin >> a >> b;
            l->i(a, b);
        }else if(x == "0"){
            cin >> a;
            l->d(a);
        }else if(x == "3"){
            break;
        }
    }
}
