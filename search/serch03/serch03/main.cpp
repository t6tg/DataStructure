#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;
vector<int> m;
int mv = 0;
void BS(int value , int left , int right){
    int mid = (right + left) / 2;
    if(v[mid] == value){
        mv = 1;
        return;
    }else if((right - left) == 1){
        if(v[right] == value || v[left] == value ){
            mv = 1;
        }
        return;
    }else if(v[mid] < value){
        BS(value,mid,right);
    }else if(v[mid] > value){
        BS(value,left,mid);
    }
}
void M(int value){
    mv = 0;
    int min = 0;
    int max = v.size() - 1;
    BS(value,min,max);
    cout << mv << endl;
}

int main(){
    string s;
    while(true){
        cin >> s;
        if(atoi(s.c_str()) > 0){
            v.push_back(atoi(s.c_str()));
        }
        else if(s == "e"){
            break;
        }
    }
    sort(v.begin() , v.end());
    while(true){
        cin >> s;
        if(atoi(s.c_str()) > 0){
            m.push_back(atoi(s.c_str()));
        }else if(s == "e"){
            break;
        }
    }
    for(int i = 0 ; i < m.size() ; i++){
        M(m[i]);
    }
}
