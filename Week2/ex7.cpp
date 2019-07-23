#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int main(){
    int x;
    cin>> x ;
    if(x > 0 ){
        for(int i = 0 ; i < x ; i++){
            for(int j = x-i ; j > 0 ; j--){
                cout << " ";
            }
            for (int  k = 0; k < i+1 ; k++ ){
                cout << "*";
            }
            cout<<endl;
         }
    }
}