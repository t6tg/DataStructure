#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[15];
	for(int i = 0 ; i < 15 ; i++){
		cin >> a[i];
	}
	for(int i = 0 ; i < 15 ; i++){
		if((a[i]%3)==0){
			cout<<a[i]<<"  ";
		}
		else{
			
		}
	}
	
	return 0 ;
}
