#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
using namespace std;
vector<int> v;
bool ch(string x){
    for(int i = 0 ; i < v.size() ; i++){
        if(atoi(x.c_str()) == v[i]){
            return false;
        }
    }
    return true;
}
void P(vector<int> b){
    if(!b.empty()){
    for(int i = 0 ; i < v.size() ;i++){
        cout << b[i] << " ";
    }
    cout << endl;
    }
}
void bubble(){
    vector<int> b ;
    for(int i = 0 ; i < v.size() ; i++){
        b.push_back(v[i]);
    }
    for(int i = 0; i < b.size() - 1;i++){
        for(int j = 0 ; j < (b.size() - i)-1 ; j++){
            if(b[j] > b[j+1]){
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
        P(b);
    }
}
void sort(){
    vector<int> c ;
    for(int i = 0 ; i < v.size() ; i++){
        c.push_back(v[i]);
    }
    for(int i = 1 ; i < c.size() ; i++){
        for(int j = 0 ; j < i ; j++){
            if(c[j] > c[i]){
                int temp = c[i];
                for(int k = i;k > j; k--){
                    c[k] = c[k-1];
                }
                c[j] = temp;
                break;
            }
        }
        P(c);
    }
}
int main(){
    string x;
    while(true){
        cin >> x;
        bool m = ch(x);
        if(!(x >= "1" && x <= "9") && x == "x"){
            break;
        }
        else if(atoi(x.c_str()) > 0){
            if(m){
                v.push_back(atoi(x.c_str()));
            }
        }
    }
    while (true) {
        string s;
        cin >> s;
        if(s == "i"){
            sort();
        }else if(s == "b"){
            bubble();
        }else if(s == "x"){
            break;
        }
    }
}
