#include <iostream>
using namespace std;
class node{
public:
    int data = 0 ;
    node *r;
    node *l ;
    node(int data){
        this->data = data;
        r = NULL;
        l = NULL;
    }
};
class tree{
    node *n;
    tree(int data){
        n = new node(data);
    }
    void A(int data){
        node *c = n;
        while(true){
            if(c->data < data && c->r != NULL){
                c  = c->r;
            }
            else if(c->data > data && c->l != NULL){
                c = c->l;
            }
            else if(c->data < data && c->r == NULL){
                c->r = new node(data);
                break;
            }
            else if(c->data > data && c->l == NULL){
                c->l = new  node(data);
                break;
            }
            else{
                break;
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
            }
            else{
                min = min->r;
                if(min->r == NULL){
                    c->data = min->data;
                    Pmin->r = c->r;
                    return;
                }
            }
        }
    }
    
    void D(int data){
        node *p = n;
        node *c = n;
        while(true){
            p = c;
            if(c->data == data){
                if(c->r == NULL && c->l == NULL){
                    return;
                }else if(c->r != NULL){
                    SVR(c);
                }
                else if(c->l != NULL){
                    SVL(c);
                }
                return ;
            }else if(c->data > data){
                if(c->l != NULL){
                    c = c->l;
                }else{
                    return;
                }
                if(c->data == data){
                    if(c->l == NULL && c->r == NULL){
                        p->l = NULL;
                    }
                    else if(c->l != NULL && c->r == NULL){
                        p->l = c->l;
                    }
                    else if(c->l == NULL && c->r != NULL){
                        p->l = c->r;
                    }
                    else if(c->l != NULL && c->r != NULL){
                        SVR(c);
                    }
                    return;
                }
            }
            else if(c->data < data){
                if(c->r != NULL){
                    c = c->r;
                }
                else{
                    return ;
                }
                if(c->data == data){
                    if(c->l == NULL && c->r == NULL){
                        p->r =  NULL;
                    }else if(c->l != NULL && c->r == NULL){
                        p->r = c->l;
                    }
                    else if(c->l == NULL && c->r != NULL){
                        p->r = c->r;
                    }
                    else if(c->l == NULL && c->r == NULL){
                        SVR(c);
                    }
                    return ;
                }
            }
        }
    }
};
int main(){
    
}
