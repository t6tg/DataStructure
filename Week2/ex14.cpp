#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	for(int i = 0 ; i< 3 ; i++){
		cout << endl;
		for(int j = 0 ; j < 3 ; j++){
			 
			cout << " "<< a[i][j];
		}
	}
	cout << endl; 
	
	int b,c,d;
	cin>>b>>c>>d;
	
		a[b][c] = d;
		
	for(int i = 0 ; i< 3 ; i++){
		cout << endl;
		for(int j = 0 ; j < 3 ; j++){
			 
			cout << " "<< a[i][j];
		}
	}
	
	return 0;
}
