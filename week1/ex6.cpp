#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <stdlib.h>

using namespace std;
int money[8] = {5, 10, 15, 20, 25, 30, 35, 40};
string message[4] = {"My" , "name" , "is" , "god" };
char character[5] = {'a','b','c','d','e'};
bool checker[3] = {true,true,false};
float point[4] = {10.59,5.5,6.89,2.6};
int main()
{
    for(int i = 0 ; i < 8 ;i++){
        cout<< money[i] << " " << endl;
    }
    cout<< "---------"<<endl;;
    for(int i = 0 ; i < 4 ;i++){
        cout<< message[i] << " " << endl;
    }
    cout<< "---------"<<endl;;
    for(int i = 0 ; i < 5 ;i++){
        cout<< character[i] << " " << endl;
    }
    cout<< "---------"<<endl;;
    for(int i = 0 ; i < 3;i++){
        cout<< checker[i] << " " << endl;
    }
    cout<< "---------"<<endl;;
    for(int i = 0 ; i < 4;i++){
        cout<< point[i] << " " << endl;
    }

    return 0; 
}