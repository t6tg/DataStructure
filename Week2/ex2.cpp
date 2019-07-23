#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

class CX {
public:
    CX *c;
    const int v1 = 10 , v2 = 2 , v3 = 3 ;
    void f1(){
        cout<< v1 <<endl;
    }
    void f2(){
        cout<< v2 <<endl;
    }
    void f3(){
        cout<< v3 <<endl;
    }
};

int main(){
    CX n;
    n.f1();
    n.f2();
    n.f3();
}
