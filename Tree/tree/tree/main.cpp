#include <iostream>

using namespace std;

class node{
public:
    int data = 0;
    node *r;
    node *l;
    node(int data){
        this->data = data;
        r = NULL;
        l = NULL;
    }
};
class tree{
public:
    node *n ;
    tree(int data){
        n = new node(data);
    }
    void add(int data){
        node *i = n;
        while(true){
            if(i->data > data && i->l != NULL){
                i = i->l;
            }
            else if(i->data < data && i->r != NULL){
                i = i->r;
            }
            else if(i->data > data && i->l == NULL){
                i->l = new node(data);
                break;
            }
            else if(i->data < data && i->r == NULL){
                i->r = new node(data);
                break;
            }
            else{
                break;
            }
        }
    }
    int  max_height = 0;
    int  temp_height  = 0 ;
    void height(node *m){
        if(m != NULL){
            temp_height++;
            height(m->l);
            if( temp_height > max_height){
                max_height = temp_height ;
            }
            height(m->r);
            temp_height--;
        }
    }
    
    bool BFS(node *m , int level){
        if(level == 0){
            cout << m->data << ",";
        }
        else{
            if(m->l != NULL ){
                BFS(m->l,level-1);
            }
            if(m->r != NULL){
                BFS(m->r , level-1);
            }
        }
        return 1;
    }
    
    void BFS(){
        max_height = 0;
        temp_height = 0;
        height(n);
        for(int i = 0 ; i < max_height ; i++){
            BFS(n,i);
            cout << "|";
        }
    }
    
    void D(int val){
        node *p = n;
        node *c = n;
        while(true){
            p = c;
            if(c->data == val){
                if(c->l == NULL && c->r == NULL){
                    return;
                }
                else if(c->r != NULL){
                    SVR(c);
                }
                else if(c->l != NULL){
                    SVL(c);
                }
                return ;
            }
            else if(c->data > val){
                if(c->l != NULL){
                    c = c->l;
                }
                else{
                    return;
                }
                if(c->data == val){
                    if(c->l == NULL && c->r == NULL){
                        p->l = NULL;
                    }else if(c->l == NULL && c->r != NULL){
                        p->l = c->r;
                    }else if(c->l != NULL && c->r == NULL){
                        p->l = c->l;
                    }else if(c->r != NULL && c->l != NULL){
                        SVR(c);
                    }
                    return;
                }
            }
            else if(c->data < val){
                if(c->r != NULL){
                    c  = c->r;
                }else{
                    return;
                }
                if(c->data == val){
                    if(c->r == NULL && c->l == NULL){
                        p->r = NULL;
                    }else if(c->r == NULL && c->l != NULL){
                        p->r = c->l;
                    }else if(c->r != NULL && c->l == NULL){
                        p->r = c->r;
                    }else if(c->r == NULL && c->l  == NULL){
                        SVR(c);
                    }
                    return;
                }
            }
        }
    }
    
    void SVR(node *c){
        node *Pmin;
        node *min = c->r;
        while(true){
            Pmin = min;
            if(min->l == NULL){
                c->data = min->data;
                c->r = min->r;
                return;
            }
            else{
                min = min->l;
                if(min->l == NULL){
                    c->data = min->data;
                    Pmin->l = c->l;
                    return;
                }
            }
        }
    }
    
    void SVL(node *c){
        node *Pmin;
        node *min = c->l;
        while(true){
            Pmin = min;
            if(min->r == NULL){
                c->data = min->data;
                c->l = min->l;
                return;
            }else{
                min = min->r;
                if(min->r == NULL){
                    c->data = min->data;
                    Pmin->r = c->r;
                    return;
                }
            }
        }
    }
};
int main(){
    tree *t = new tree(0);
    t->add(-1);
    t->add(2);
    t->add(20);
    t->add(4);
    t->add(5);
    t->add(6);
    t->D(20);
    t->BFS();
}
