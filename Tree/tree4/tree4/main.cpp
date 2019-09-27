#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

class node
{
public:
    node *right;
    node *left;
    int value = 0;
    node(int v)
    {
        value = v;
        left = NULL;
        right = NULL;
    }
};

class tree
{
public:
    node *n;
    tree()
    {
        
    }
    tree(int value)
    {
        n = new node(value);
    }
    
    void add_node(int value)
    {
        if(n==NULL)
        {
            n = new node(value);
        }
        else
        {
            
            node *i = n;
            while(true)
            {
                if(i->value <= value && i->right != NULL){
                    i = i->right;
                }
                else if(i->value > value && i->left != NULL){
                    i = i->left;
                }
                else if(i->value <= value && i->right == NULL){
                    i->right = new  node(value);
                    break;
                }
                else if(i->value > value && i->left == NULL){
                    i->left = new  node(value);
                    break;
                }
            }
        }
    }
    
    bool search(int value)
    {
        node *i = n;
        while(true)
        {
            if( i->value > value && i->left != NULL )
            {
                i = i->left;
            }
            else if( i->value < value && i->right != NULL )
            {
                i = i->right;
            }
            else if( i->value == value )
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    //------------------------------------------------------------
    int max_height = 0;
    int min_height = 0;
    void height (node *m)
    {
        if( m != NULL )
        {
            min_height++;
            height(m->left);
            if( min_height > max_height )
            {
                max_height = min_height;
            }
            height(m->right);
            min_height--;
        }
    }
    bool BFS(node *m, int level)
    {
        if(level == 0)
        {
            cout<<m->value<<",";
        }
        else
        {
            if( m->left != NULL ) {  BFS(m->left,level-1);   }
            if( m->right != NULL ){  BFS(m->right,level-1);  }
        }
        return level;
    }
    void BFS()
    {
        max_height = 0;
        min_height = 0;
        height(n);
        for(int i=0 ; i < max_height ; i++)
        {
            BFS(n,i);
            cout<<"|";
        }
    }
    
    void DFS_Pre_order (node *m)
    {
        if( m != NULL )
        {
            cout<<m->value<<",";
            DFS_Pre_order(m->left);
            DFS_Pre_order(m->right);
        }
    }
    void DFS_In_order (node *m)
    {
        if( m != NULL )
        {
            DFS_In_order(m->left);
            cout<<m->value<<",";
            DFS_In_order(m->right);
        }
    }
    
    void DFS_Post_order (node *m)
    {
        if( m != NULL )
        {
            DFS_Post_order(m->left);
            DFS_Post_order(m->right);
            cout<<m->value<<",";
        }
    }
    
    //------------------------------------------------------------
    void delete_node(int v)
    {
        if(n != NULL)
        {
            node *p = n;
            node *c = n;
            if(n->value == v){
                if(n->left == NULL && n->right == NULL){
                    n = NULL;
                    return;
                }
                if(n->left != NULL && n->right == NULL){
                    n = n->left;
                    return;
                }
                if(n->left == NULL && n->right != NULL){
                    n = n->right;
                    return;
                }
            }
            while(true){
                p = c;
                if(c->value == v){
                    if(c->left == NULL && c->right == NULL){
                        return;
                    }
                    else if(c->left != NULL){
                        SwitchValueL(c);
                    }
                    else if(c->right != NULL){
                        SwitchValueR(c);
                    }
                    return;
                }else if(c->value < v){
                    if(c->right != NULL){
                        c = c->right;
                    }else{
                        return;
                    }
                    if(c->value == v){
                        if(c->right != NULL && c->left != NULL ){
                            SwitchValueL(c);
                        }else if(c->left == NULL && c->right != NULL){
                            p->right = c->right;
                        }
                        else if(c->left != NULL && c->right == NULL){
                            p->right = c->left;
                        }
                        else if(c->left == NULL && c->right == NULL){
                            p->right = NULL;
                        }
                        return;
                    }
                }else if(c->value > v){
                    if(c->left != NULL){
                        c = c->left;
                    }else{
                        return;
                    }
                    if(c->value == v){
                        if(c->right != NULL && c->left != NULL ){
                            SwitchValueL(c);
                        }else if(c->left == NULL && c->right != NULL){
                            p->left = c->right;
                        }
                        else if(c->left != NULL && c->right == NULL){
                            p->left = c->left;
                        }
                        else if(c->left == NULL && c->right == NULL){
                            p->left = NULL;
                        }
                        return;
                    }
                }
            }

        }
    }
    //----------------------------------------------------------------------
    void SwitchValueL(node *current)
    {
        node *Pmin    = current->left;
        node *min     = current->left;
        
        if( min->right == NULL )
        {
            current->value = min->value;
            current->left = min->left;
            return;
        }
        
        while(true)
        {
            min = min->right;
            if(min->right == NULL && min->left == NULL)
            {
                current->value = min->value;
                Pmin->right = NULL;
                return;
            }
            if(min->right == NULL && min->left != NULL)
            {
                current->value = min->value;
                Pmin->right = min->left;
                return;
            }
            Pmin = min;
        }
    }
    //----------------------------------------------------------------------
    void SwitchValueR(node *current)
    {
        node *Pmin    = current->right;
        node *min     = current->right;
        
        if( min->left == NULL )
        {
            current->value = min->value;
            current->right = min->right;
            return;
        }
        
        while(true)
        {
            min = min->left;
            if(min->left == NULL && min->right == NULL)
            {
                current->value = min->value;
                Pmin->left = NULL;
                return;
            }
            if(min->left == NULL && min->right != NULL)
            {
                current->value = min->value;
                Pmin->left = min->right;
                return;
            }
            Pmin = min;
        }
    }
    //----------------------------------------------------------------------
};
int main()
{
    tree *t = new tree();
    string s;
    int num;
    while(true){
        cin >> s;
        if(s == "i"){
            cin >> num;
            t->add_node(num);
        }else if(s == "d"){
            cin >> num;
            if(t->search(num)){
                while(true){
                    if(t->search(num)){
                        t->delete_node(num);
                    }else {break;}
                }
            }else{
                cout << num << endl;
            }
        }else if(s == "p"){
            t->BFS();
        }else if(s == "x"){
            break;
        }
    }
    
    return 0;
}

