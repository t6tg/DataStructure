#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <iostream>

using namespace std;

int fac(int n){
    if(n == 0){
        return 1;
    }else{
        return n*fac(n-1);
    }
}

int main(){
cout<<fac(20)<<endl;
}