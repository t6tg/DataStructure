#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    string x; int a;
    bool b = false;
    while(true){
        cin >> x;
        if(x == "U"){
            cin >> a;
            for(int i = 0 ; i < v.size()  ; i++){
                if(a == v[i]){
                    b = true;
                }
            }
            if(b == false){
                v.push_back(a);
            }
            b = false;
        }
        else if(x == "P"){
            if(!v.empty()){
            for(int i = 0 ; i <= v.size() - 1 ; i++){
                cout << v[i] << " ";
            }
            cout << endl;
            }
        }
        else if(x == "T"){
            if(!v.empty()){
                cout << v[v.size()-1] << endl;
            }
        }else if(x == "O"){
            if(!v.empty()){
                cout << v[v.size()-1] << endl;
                v.pop_back();
            }
        }
        else if(x == "X"){
            break;
        }
        else if(x == "N"){
            if(!v.empty()){
                cout << v.size() << endl;
            }
        }
        
    }
}
