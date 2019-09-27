#include <iostream>
#include <vector>
using namespace std;

class Stack{
public:
    vector<int> v;
    void push(int data){
        v.push_back(data);
    }
    void D(){
        v.erase(v.begin());
    }
    void P(){
        for(int i =  v.size() - 1 ; i >= 0  ; i--){
            cout << v[i] << " " ;
        }
        cout << endl;
    }
};

int main(){
    Stack *s = new Stack();
    string x;
    int a;
    int si;
    cin >> si ;
    while(true){
        cin >> x;
        if(x == "1"){
                cin >> a;
             if(s->v.size() < si){
                s->push(a);
            }else{
                cout << "MAX" << endl;
                continue;
            }
        }else if(x == "0"){
            if(s->v.size() > 1){
                cout << s->v[0] << endl;
                s->D();
            }else{
                cout << "Cannot Remove Vector" << endl;
                continue ;
            }
            s->P();
        }else{
            s->P();
            break;
        }
    }
}
