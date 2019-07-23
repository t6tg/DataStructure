#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <iostream>

using namespace std;
class car {
void wheel (int x){
    cout << x <<endl;
}
void color (string c){
     cout << c <<endl;
}
void point (double p){
     cout << p <<endl;
}
};
int main () {
    car c;
    c.wheel(4);
    c.color("Black");
    c.point(80.5);
}

