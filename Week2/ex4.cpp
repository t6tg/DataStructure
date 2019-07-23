#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>

using namespace std;
class Node {
    public:
    void name (string a , int b , bool c , char d) {
    cout << a << " " << b << " " << c << " " << d << endl;
    }
} n;
int main() {
    n.name("Hello" , 5,true,'a');
}