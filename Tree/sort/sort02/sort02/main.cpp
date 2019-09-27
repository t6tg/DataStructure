#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    string x;
    while(true){
        cin >> x;
        if((x < "a" || x > "z") && (x < "A" || x > "Z")){
            v.push_back(atoi(x.c_str()));
        }else{
            break;
        }
    }
    sort(v.begin() , v.end());
    for(int i = 0; i < v.size() ; i++){
        cout << v[i] << " ";
    }
    cout << endl;
//    for(int i = 0 ; i < v.size() ; i++){
//        for(int j = i ; j < v.size() ; j++){
//            if(v[i] > v[j]){
//                int temp = v[i];
//                v[i] = v[j];
//                v[j] = temp;
//            }
//        }
//        for(int i = 0 ; i < v.size() ; i++){
//            cout << v[i] << " ";
//        }
//        cout << endl;
//    }
//    for(int i = 1 ; i < v.size() ; i++){
//        for(int j = 0 ; j < i ; j++){
//            if(v[j] > v[i]){
//                int temp = v[i];
//                for(int k = i ; k > j ; k--){
//                    v[k] = v[k-1];
//                }
//                v[j] = temp;
//                break;
//            }
//        }
//        for(int i = 0 ; i < v.size() ; i++){
//            cout << v[i] << " " ;
//        }
//        cout << endl;
//    }
}
//7 1 5 3 6 10 4 8 9 2 x
