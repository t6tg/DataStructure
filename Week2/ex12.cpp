#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	
	vector<int> kk(15);
		
	for(int i = 0 ; i< kk.size() ; i++){
		cin >> kk[i];
	}
	sort(kk.begin(),kk.end());
	
	for(int i = 0 ; i< kk.size() ; i++){
		cout << " "<< kk[i] ;
	}
	return 0;
}
