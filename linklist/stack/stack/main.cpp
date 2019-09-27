#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> v;
    int  x;
    string a;
    cin >> x;
    for(int i = 0 ; i < x ; i++){
        cin >> a;
        v.push_back(a);
    }
    
    for(int i = v.size() - 1 ; i >= 0 ; i--){
        cout << v[i] << " " ;
        v.pop_back();
        for(int j = 0 ; j < v.size() ; j++){
            cout << v[j] << " " ;
        }
        cout << endl;
    }
}
