#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> v;
vector<int> m;
int mv = 0;
void S(int val , int left , int right){
    int mid = (right + left) / 2;
    if(v[mid] == val){
        mv=1;
        return;
    }else if((right-left) == 1){
        if(v[right] == val || v[left] == val){
            mv = 1;
        }
        return;
    }else if(v[mid] < val){
        S(val,mid,right);
    }
    else if(v[mid] > val){
        S(val,left,mid);
    }
}
void ch(int val){
    mv = 0;
    int min = 0;
    int max = v.size() - 1;
    S(val,min,max);
    cout << mv << endl;
}
int main(){
    string s;
    while (true) {
        cin >> s;
        if(s != "e"){
                v.push_back(atoi(s.c_str()));
        }else {
            break;
        }
    }
    sort(v.begin() , v.end());
    while (true) {
        cin >> s;
        if(s != "e"){
            m.push_back(atoi(s.c_str()));
        }else {
            break;
        }
    }
    for(int i = 0 ; i < m.size() ; i++){
        ch(m[i]);
    }
}
