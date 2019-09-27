#include <stdio.h>
#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(){
	vector<int> v;
	string s;
	while(true){
		cin >> s;
		if(s != "e"){
			v.push_back(atoi(s.c_str()));
		}else{
			break;
		}
	}
	for(int i = 0 ; i < v.size() ; i++){
		int t = i;
		for(int j = i ; i < v.size() ; i++){
			if(v[t] > v[j]){
				t = j;
			}
		}
		int tt = v[i];
		v[i] = v[t];
		v[t] = tt;
	}
	for(int i = 0 ; i < v.size() ; i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

