#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>

using namespace std ;
class node{
    public:
    string name;
    void set(string x){
        name = x;
    }
    void get(){
        cout << name << endl;
    }
};
int main(){
    node x1,x2,x3,x4,x5;
    string z;
    cin>>z;
    x1.set(z);
    x1.get();
    x2.set(z);
    x2.get();
    x3.set(z);
    x3.get();
    x4.set(z);
    x4.get();
    x5.set(z);
    x5.get();
}
