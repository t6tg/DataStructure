#include <iostream>
using namespace std;

class node
{
public:
    node *right;
    node *left;
    int value;
    node()
    {
        value = -1;
        left = NULL;
        right = NULL;
    }
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
        n = new node();
    }
    //////////////
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
    ////////
    void add_node(string value)
    {
        if(search(atoi(value.c_str())) && atoi(value.c_str()) != -1){
            cout << value << endl;
        }
        else{
            if(n->value == -1){
                n->value = atoi(value.c_str());
            }
            if(atoi(value.c_str()) > 0){
                node *c = n;
                while (true) {
                    if(c->value < atoi(value.c_str()) && c->right != NULL){
                        c = c->right;
                    }else if(c->value > atoi(value.c_str()) && c->left != NULL){
                        c = c->left;
                    }else if(c->value < atoi(value.c_str()) && c->right == NULL){
                        c->right = new node(atoi(value.c_str()));
                        break;
                    }else if(c->value > atoi(value.c_str()) && c->left == NULL){
                        c->left = new node(atoi(value.c_str()));
                        break;
                    }else{
                        break;
                    }
                }
            }
        }
    }
    
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
            cout<<m->value<<" ";
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
        if(n->value != -1)
        {
            max_height = 0;
            min_height = 0;
            height(n);
            for(int i=0 ; i < max_height ; i++)
            {
                BFS(n,i);
                cout<<"| ";
            }
            cout<<endl;
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
    void delete_node(string v)
    {
        if(n->value != -1){
            node *c = n;
            node *p = n;
            while(true){
                p = c;
                if(c->value == atoi(v.c_str())){
                    if(c->right == NULL && c->left == NULL){
                        n->value = -1;
                        return;
                    }else if(c->left != NULL && c->right == NULL){
                        SwitchValueL(c);
                    }else if(c->right != NULL && c->left == NULL){
                        SwitchValueR(c);
                    }
                    return;
                }
                if(c->value < atoi(v.c_str())){
                    if(c->right != NULL){
                        c = c->right;
                    }else{
                        return;
                    }
                    if(c->value == atoi(v.c_str())){
                        if(c->right != NULL && c->left != NULL){
                            SwitchValueL(c);
                        }else if(c->right != NULL && c->left == NULL){
                            p->right = c->right;
                        }else if(c->right == NULL && c->left != NULL){
                            p->right = c->left;
                        }else  if(c->right == NULL && c->left == NULL){
                            p->right = NULL;
                        }
                        return;
                    }
                }
                if(c->value > atoi(v.c_str())){
                    if(c->left != NULL){
                        c = c->left;
                    }else{
                        return;
                    }
                    if(c->value == atoi(v.c_str())){
                        if(c->right != NULL && c->left != NULL){
                        SwitchValueL(c);
                        }else if(c->right != NULL && c->left == NULL){
                            p->left = c->right;
                        }else if(c->right == NULL && c->left != NULL){
                            p->left = c->left;
                        }else  if(c->right == NULL && c->left == NULL){
                            p->left = NULL;
                        }
                        return;
                    }
                }
            }
        }
    }
    //----------------------------------------------------------------------
    //----------------------------------------------------------------------
    //----------------------------------------------------------------------
};

int main()
{
    tree *t = new tree();
    string s;
    string num;
    while(true)
    {
        cin>>s;
        if(s == "i"){
            cin >> num;
            if(atoi(num.c_str()) > 0){
            t->add_node(num);
            }
        }else if(s == "p"){
            t->BFS();
        }
        else if(s == "d"){
            cin >> num;
            if(!t->search(atoi(num.c_str())) || atoi(num.c_str()) < 0){
                cout << num << endl;
            }
            t->delete_node(num);
        }
        else if(s == "x"){
            break;
        }
    }
    return 0;
}
