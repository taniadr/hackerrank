//Week of Code 32 - my first participation
//Problem 1: Duplication (is about strings)
//Level: Easy
//Coder: taniadr

#include <iostream>       // std::cout
#include <string>         // std::string
#include <bitset>  
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;
#define maxleng (1000)
vector<bool> duplic(){
	vector<bool> resp;
	vector<bool> temp;
	resp.push_back(0);
	resp.push_back(1);
	int aux=2;
	while(aux <= maxleng){
		
		temp = resp;
		temp.flip();
		for (int i=0; i<temp.size(); i++){
			resp.push_back(temp[i]);
		}
		aux = resp.size();
	}
	return resp;
}
int main(){
		
	int q, qi;
	cin>>q;
	vector<bool> table = duplic();
	for (int i=0; i<q; i++){
		cin>>qi;
		cout<<table[qi]<<endl;
	}
}


