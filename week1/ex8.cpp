#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    v.push_back(5);
    v.push_back(11);
    v.push_back(67);
    cout<<v.size()<<endl;
    cout<<v[2] << " " << v[3] << " " << v[5] << endl;
    v.pop_back();
    for(int i = 0 ; i < v.size() ; i++){
        cout<< v[i] << " ";
    }
    cout <<endl<< "--------" << endl;
    v.erase(v.begin() + 4);
    for(int i = 0 ; i < v.size() ; i++){
        cout<< v[i] << " ";
    }
    cout <<endl<< "--------" << endl;
    v.insert(v.begin() + 1,77);
    for(int i = 0 ; i < v.size() ; i++){
        cout<< v[i] << " ";
    }
}
