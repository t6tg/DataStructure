#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n ; bool f = false; cout<<"input number"<<endl;
	cin>>n;
	for(int i = 2 ; i < n ; i++){
		if(n%i == 0){
			f = true; break;
		}
	}
	if(f==false && n>1){
		cout << "prime";
	}
	else{
		cout << "not prime";
	}
 return 0;
}
