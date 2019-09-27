#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

vector<int> v ;
vector<int> m ;
int i = 0;
int meet = 0 ;
void BS(int value , int left , int right){
    int mid = (right + left) /2;
    if(v[mid] == value){
        meet = 1;
        return;
    }
    else if((right - left) == 1){
        if(v[left] == value || v[right] == value){
            i++;
            meet = 1;
            return;
        }
    }
    else if(v[mid] < value ){
        i++;
        BS(value , mid , right);
    }
    else if(v[mid] > value){
        i++;
        BS(value,left,mid);
    }
}
void BTS(int value){
    sort(v.begin() , v.end());
    meet = 0;
    int min = 0 ;
    int max = v.size() - 1;
    i = 0;
    BS(value,min,max);
    cout << "Result : " << meet << " Count : " << i << endl;
}
int main(){
    string x ;
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
        BTS(m[i]);
    }
}
