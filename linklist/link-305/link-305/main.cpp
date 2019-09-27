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
class Link{
public:
    Node *h;
        int size(){
        Node *c = h;
        int  i = 0;
        while(c != NULL){
            i++;
            c = c->next;
        }
            return i;
    }
    void I(int data , int ch){
        Node *newNode = new Node(data);
        Node *c = h;
        if(h == NULL){
            h = newNode;
        }
        else if(C(data)){
            while(c != NULL){
                if(ch == c->data){
                    newNode->next = c->next;
                    c->next = newNode;
                    break;
                }else if( c->next == NULL){
                    newNode->next = h;
                    h =  newNode;
                    break;
                }
                c = c->next;
            }
        }
    }
    bool C(int data){
        Node *c = h;
        while(c != NULL){
            if(c->data == data){
                return false;
            }
            c = c->next;
        }
        return true;
    }
    void D(int ch){
        Node *c = h;
        Node *p =c;
        if(h->data == ch){
            h = h->next;
        }
        else{
            while(c != NULL){
                if(ch == c->data){
                    p->next = c->next;
                    break;
                }
                p = c;
                c = c->next;
            }
        }
    }
    void P(){
        Node *c = h;
        while(c != NULL){
            cout << c->data << " " ;
            c =c->next;
        }
        cout << endl;
    }
};
int main(){
    Link *l = new  Link();
    int max;
    string x;
    int a,b;
    cin >> max;
    while(true){
        cin >> x;
        if(x == "0"){
            cin >> b;
            if(l->size() > 1){
            l->D(b);
            }else{
                cout << "Cannot Remove Linklist" << endl;
                continue;
            }
        }
        else if(x == "1"){
            cin >> a >> b;
            if(l->size() < max){
                l->I(a, b);
            }else{
                cout << "Max" << endl;
                continue;
            }
            
        }else{
            l->P();
            break;
        }
    }
}
