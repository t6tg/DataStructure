#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <math.h>

using namespace std;

int main(){
    // int arr1[2][5];
    // int arr2[2][5];
    // int  sum[4]
    int arr1[2][3] = {{1,2,3} , {4,5,6}};
    int arr2[3][2] = {{1,2} , {3,4} , {5,6}};

    for(int i = 0 ; i < 2; i++){
        for(int j  = 0  ; j < 3 ; j++){
            // cout << arr2[i][j] ;
            for(int k = 0 ; k < 20 ; k++ ){
                cout << "Hello " << k   << endl;
            }
        }
    }
}