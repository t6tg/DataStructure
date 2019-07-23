#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int a[5][5];
	for(int i = 0 ; i< 5 ; i++){
		for(int j = 0 ; j<5 ; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0 ; i< 5 ; i++){
		cout << endl;
		for(int j = 0 ; j < 5 ; j++){
			cout << " "<<a[i][j];
		}
	}
	
	return 0;
}
