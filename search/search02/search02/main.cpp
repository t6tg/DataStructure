#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
vector<int> m;
int mv = 0;
int xcount = 0;
void search(int value , int left , int right){
    int mid = (right + left) / 2;
    if(v[mid] == value){
        mv = 1;
        return;
    }
    else if((right - left) == 1){
        if(v[left] == value || v[right] == value){
            mv = 1 ;
        }
        return;
    }
    else if(v[mid] < value){
        xcount += 1;
        search(value,mid,right);
    }
    else if(v[mid] > value){
        xcount += 1;
        search(value,left,mid);
    }
}
void BS(int value){
    sort(v.begin() , v.end());
    mv = 0;
    int min = 0;
    int max = v.size() - 1;
    search(value,min,max);
    if(mv == 0){
         cout << "Result : " << mv << " Count : " << "Not Found" <<  endl;
    }else{
            cout << "Result : " << mv << " Count : " << xcount <<  endl;
    }
    xcount = 0;
}
int main(){
    string x;
    while(true){
        cin >> x;
        if(x != "e"){
            v.push_back(atoi(x.c_str()));
        }else{
            break;
        }
    }
    while(true){
        cin >> x;
        if(x != "e"){
            m.push_back(atoi(x.c_str()));
        }else{
            break;
        }
    }
    for(int i = 0 ; i < m.size() ; i++){
        BS(m[i]);
    }
}
