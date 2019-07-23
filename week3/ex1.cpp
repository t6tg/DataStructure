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
    int arr1[2][5] = {{1,2,3,4,5} , {1,2,3,4,5}};
    int arr2[2][5] = {{1,2,3,4,5} , {1,2,3,4,5}};
    for(int i = 0 ; i < 2 ; i++){
        for(int j  = 0  ; j < 5 ; j++){
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }
}