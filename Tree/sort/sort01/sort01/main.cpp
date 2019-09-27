
#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int x[n];
    int m;
    for(int i = 0 ; i < n ; i++){
        cin >> m;
        x[i] = m;
    }
    int t;
    int size = sizeof(x) / sizeof(x[0]);
//    for(int i = 0 ; i < size - 1 ; i++){
//        for(int j = 0 ; j < size - 1 ; j++){
//            if(x[j] > x[j+1]){
//                if((x[j] == 8 && x[j+1] == 7) || (x[j] == 7 && x[j+1] == 8)){
//                    
//                }else{
//                    t = x[j+1];
//                    x[j+1] = x[j];
//                    x[j] = t;
//                }
//            }
//            for(int i = 0 ; i < size ;i++){
//                cout << x[i] << " ";
//            }
//            cout << endl;
//        }
//    }
    //select sort
    for(int i = 0 ; i < size ; i++){
        for(int j = i ; i < size ; j++){
            if(x[i] > x[j]){
                t = x[i];
                x[i] = x[j];
                x[j] = t;
            }
        }
    }
    
    for(int i = 0 ; i < size ;i++){
        cout << x[i] << " ";
    }
    cout << endl;
}
