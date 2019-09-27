#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
int mv = 0;
void search(int val , int left , int right){
    int mid = (right + left) / 2;
    if(v[mid] == val){
        cout << v[mid] << " ";
        mv = 1;
        return;
    }else if(right <= left){
//        cout << mid << " ";
        return;
    }else if(v[mid] < val){
        cout << v[mid] <<  " ";
        search(val,mid+1,right);
    }
    else if(v[mid] > val){
        cout << v[mid] <<  " ";
        search(val,left,mid-1);
    }
}

void bs(int val){
    mv = 0;
    int min = 0;
    int max = v.size() - 1;
    sort(v.begin() , v.end());
    search(val,min,max);
    if(mv == 1){
        cout << "Y" << endl;
        cout << val << endl;
    }else{
        cout << "N" << endl;
    }
}
int main(){
    string s;
    int num;
    while(true){
        cin >> s;
        if(s == "e"){
            break;
        }else if(s == "s"){
            cin >> num;
            bs(num);
        }else{
            v.push_back(atoi(s.c_str()));
        }
    }
}
