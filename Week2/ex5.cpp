#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>

using namespace std ;
    string name;
    void set(string x){
        name = x;
    }
    void get(){
        cout << name << endl;
    }
int main(){
    string z;
    cin>>z;
    set(z);
    get();
}